ObjectUI.CustomPreviewSection=class{constructor(object){this._sectionElement=createElementWithClass('span','custom-expandable-section');this._object=object;this._expanded=false;this._cachedContent=null;const customPreview=object.customPreview();let headerJSON;try{headerJSON=JSON.parse(customPreview.header);}catch(e){Common.console.error('Broken formatter: header is invalid json '+e);return;}
this._header=this._renderJSONMLTag(headerJSON);if(this._header.nodeType===Node.TEXT_NODE){Common.console.error('Broken formatter: header should be an element node.');return;}
if(customPreview.hasBody){this._header.classList.add('custom-expandable-section-header');this._header.addEventListener('click',this._onClick.bind(this),false);this._expandIcon=UI.Icon.create('smallicon-triangle-right','custom-expand-icon');this._header.insertBefore(this._expandIcon,this._header.firstChild);}
this._sectionElement.appendChild(this._header);}
element(){return this._sectionElement;}
_renderJSONMLTag(jsonML){if(!Array.isArray(jsonML))
return createTextNode(jsonML+'');const array=(jsonML);return array[0]==='object'?this._layoutObjectTag(array):this._renderElement(array);}
_renderElement(object){const tagName=object.shift();if(!ObjectUI.CustomPreviewSection._tagsWhiteList.has(tagName)){Common.console.error('Broken formatter: element '+tagName+' is not allowed!');return createElement('span');}
const element=createElement((tagName));if((typeof object[0]==='object')&&!Array.isArray(object[0])){const attributes=object.shift();for(const key in attributes){const value=attributes[key];if((key!=='style')||(typeof value!=='string'))
continue;element.setAttribute(key,value);}}
this._appendJsonMLTags(element,object);return element;}
_layoutObjectTag(objectTag){objectTag.shift();const attributes=objectTag.shift();const remoteObject=this._object.runtimeModel().createRemoteObject((attributes));if(remoteObject.customPreview())
return(new ObjectUI.CustomPreviewSection(remoteObject)).element();const sectionElement=ObjectUI.ObjectPropertiesSection.defaultObjectPresentation(remoteObject);sectionElement.classList.toggle('custom-expandable-section-standard-section',remoteObject.hasChildren);return sectionElement;}
_appendJsonMLTags(parentElement,jsonMLTags){for(let i=0;i<jsonMLTags.length;++i)
parentElement.appendChild(this._renderJSONMLTag(jsonMLTags[i]));}
_onClick(event){event.consume(true);if(this._cachedContent)
this._toggleExpand();else
this._loadBody();}
_toggleExpand(){this._expanded=!this._expanded;this._header.classList.toggle('expanded',this._expanded);this._cachedContent.classList.toggle('hidden',!this._expanded);if(this._expanded)
this._expandIcon.setIconType('smallicon-triangle-down');else
this._expandIcon.setIconType('smallicon-triangle-right');}
_loadBody(){function load(bindRemoteObject,formatter,config){function substituteObjectTagsInCustomPreview(jsonMLObject){if(!jsonMLObject||(typeof jsonMLObject!=='object')||(typeof jsonMLObject.splice!=='function'))
return;const obj=jsonMLObject.length;if(!(typeof obj==='number'&&obj>>>0===obj&&(obj>0||1/obj>0)))
return;let startIndex=1;if(jsonMLObject[0]==='object'){const attributes=jsonMLObject[1];const originObject=attributes['object'];const config=attributes['config'];if(typeof originObject==='undefined')
throw'Illegal format: obligatory attribute "object" isn\'t specified';jsonMLObject[1]=bindRemoteObject(originObject,config);startIndex=2;}
for(let i=startIndex;i<jsonMLObject.length;++i)
substituteObjectTagsInCustomPreview(jsonMLObject[i]);}
try{const body=formatter.body(this,config);substituteObjectTagsInCustomPreview(body);return body;}catch(e){console.error('Custom Formatter Failed: '+e);return null;}}
const customPreview=this._object.customPreview();const args=[{objectId:customPreview.bindRemoteObjectFunctionId},{objectId:customPreview.formatterObjectId}];if(customPreview.configObjectId)
args.push({objectId:customPreview.configObjectId});this._object.callFunctionJSON(load,args,onBodyLoaded.bind(this));function onBodyLoaded(bodyJsonML){if(!bodyJsonML)
return;this._cachedContent=this._renderJSONMLTag(bodyJsonML);this._sectionElement.appendChild(this._cachedContent);this._toggleExpand();}}};ObjectUI.CustomPreviewComponent=class{constructor(object){this._object=object;this._customPreviewSection=new ObjectUI.CustomPreviewSection(object);this.element=createElementWithClass('span','source-code');const shadowRoot=UI.createShadowRootWithCoreStyles(this.element,'object_ui/customPreviewComponent.css');this.element.addEventListener('contextmenu',this._contextMenuEventFired.bind(this),false);shadowRoot.appendChild(this._customPreviewSection.element());}
expandIfPossible(){if(this._object.customPreview().hasBody&&this._customPreviewSection)
this._customPreviewSection._loadBody();}
_contextMenuEventFired(event){const contextMenu=new UI.ContextMenu(event);if(this._customPreviewSection){contextMenu.revealSection().appendItem(Common.UIString('Show as JavaScript object'),this._disassemble.bind(this));}
contextMenu.appendApplicableItems(this._object);contextMenu.show();}
_disassemble(){this.element.shadowRoot.textContent='';this._customPreviewSection=null;this.element.shadowRoot.appendChild(ObjectUI.ObjectPropertiesSection.defaultObjectPresentation(this._object));}};ObjectUI.CustomPreviewSection._tagsWhiteList=new Set(['span','div','ol','li','table','tr','td']);;ObjectUI.ObjectPopoverHelper=class{constructor(linkifier,resultHighlightedAsDOM){this._linkifier=linkifier;this._resultHighlightedAsDOM=resultHighlightedAsDOM;}
dispose(){if(this._resultHighlightedAsDOM)
SDK.OverlayModel.hideDOMNodeHighlight();if(this._linkifier)
this._linkifier.dispose();}
static buildObjectPopover(result,popover){let fulfill;const promise=new Promise(x=>fulfill=x);function didGetFunctionProperties(funcObject,popoverContentElement,popoverValueElement,properties,internalProperties){if(internalProperties){for(let i=0;i<internalProperties.length;i++){if(internalProperties[i].name==='[[TargetFunction]]'){funcObject=internalProperties[i].value;break;}}}
ObjectUI.ObjectPropertiesSection.formatObjectAsFunction(funcObject,popoverValueElement,true);funcObject.debuggerModel().functionDetailsPromise(funcObject).then(didGetFunctionDetails.bind(null,popoverContentElement));}
function didGetFunctionDetails(popoverContentElement,response){if(!response){fulfill(null);return;}
const container=createElementWithClass('div','object-popover-container');const title=container.createChild('div','function-popover-title source-code');const functionName=title.createChild('span','function-name');functionName.textContent=UI.beautifyFunctionName(response.functionName);const rawLocation=response.location;const linkContainer=title.createChild('div','function-title-link-container');const sourceURL=rawLocation&&rawLocation.script()?rawLocation.script().sourceURL:null;let linkifier=null;if(rawLocation&&sourceURL){linkifier=new Components.Linkifier();linkContainer.appendChild(linkifier.linkifyRawLocation(rawLocation,sourceURL));}
container.appendChild(popoverContentElement);popover.contentElement.appendChild(container);fulfill(new ObjectUI.ObjectPopoverHelper(linkifier,false));}
const description=result.description.trimEnd(ObjectUI.ObjectPopoverHelper.MaxPopoverTextLength);let popoverContentElement=null;if(result.type!=='object'){popoverContentElement=createElement('span');UI.appendStyle(popoverContentElement,'object_ui/objectValue.css');UI.appendStyle(popoverContentElement,'object_ui/objectPopover.css');const valueElement=popoverContentElement.createChild('span','monospace object-value-'+result.type);valueElement.style.whiteSpace='pre';if(result.type==='string')
valueElement.createTextChildren('"',description,'"');else if(result.type!=='function')
valueElement.textContent=description;if(result.type==='function'){result.getOwnProperties(false,didGetFunctionProperties.bind(null,result,popoverContentElement,valueElement));return promise;}
popover.contentElement.appendChild(popoverContentElement);fulfill(new ObjectUI.ObjectPopoverHelper(null,false));}else{let linkifier=null;let resultHighlightedAsDOM=false;if(result.subtype==='node'){SDK.OverlayModel.highlightObjectAsDOMNode(result);resultHighlightedAsDOM=true;}
if(result.customPreview()){const customPreviewComponent=new ObjectUI.CustomPreviewComponent(result);customPreviewComponent.expandIfPossible();popoverContentElement=customPreviewComponent.element;}else{popoverContentElement=createElementWithClass('div','object-popover-content');UI.appendStyle(popoverContentElement,'object_ui/objectPopover.css');const titleElement=popoverContentElement.createChild('div','monospace object-popover-title');titleElement.createChild('span').textContent=description;linkifier=new Components.Linkifier();const section=new ObjectUI.ObjectPropertiesSection(result,'',linkifier);section.element.classList.add('object-popover-tree');section.titleLessMode();popoverContentElement.appendChild(section.element);}
popover.setMaxContentSize(new UI.Size(300,250));popover.setSizeBehavior(UI.GlassPane.SizeBehavior.SetExactSize);popover.contentElement.appendChild(popoverContentElement);fulfill(new ObjectUI.ObjectPopoverHelper(linkifier,resultHighlightedAsDOM));}
return promise;}};ObjectUI.ObjectPopoverHelper.MaxPopoverTextLength=10000;;ObjectUI.ObjectPropertiesSection=class extends UI.TreeOutlineInShadow{constructor(object,title,linkifier,emptyPlaceholder,ignoreHasOwnProperty,extraProperties){super();this._object=object;this._editable=true;this.hideOverflow();this.setFocusable(false);this._objectTreeElement=new ObjectUI.ObjectPropertiesSection.RootElement(object,linkifier,emptyPlaceholder,ignoreHasOwnProperty,extraProperties);this.appendChild(this._objectTreeElement);if(typeof title==='string'||!title){this.titleElement=this.element.createChild('span');this.titleElement.textContent=title||'';}else{this.titleElement=title;this.element.appendChild(title);}
this.element._section=this;this.registerRequiredCSS('object_ui/objectValue.css');this.registerRequiredCSS('object_ui/objectPropertiesSection.css');this.rootElement().childrenListElement.classList.add('source-code','object-properties-section');}
static defaultObjectPresentation(object,linkifier,skipProto){const componentRoot=createElementWithClass('span','source-code');const shadowRoot=UI.createShadowRootWithCoreStyles(componentRoot,'object_ui/objectValue.css');shadowRoot.appendChild(ObjectUI.ObjectPropertiesSection.createValueElement(object,false,true));if(!object.hasChildren)
return componentRoot;const objectPropertiesSection=new ObjectUI.ObjectPropertiesSection(object,componentRoot,linkifier);objectPropertiesSection.editable=false;if(skipProto)
objectPropertiesSection.skipProto();return objectPropertiesSection.element;}
static CompareProperties(propertyA,propertyB){const a=propertyA.name;const b=propertyB.name;if(a==='__proto__')
return 1;if(b==='__proto__')
return-1;if(!propertyA.enumerable&&propertyB.enumerable)
return 1;if(!propertyB.enumerable&&propertyA.enumerable)
return-1;if(a.startsWith('_')&&!b.startsWith('_'))
return 1;if(b.startsWith('_')&&!a.startsWith('_'))
return-1;if(propertyA.symbol&&!propertyB.symbol)
return 1;if(propertyB.symbol&&!propertyA.symbol)
return-1;return String.naturalOrderComparator(a,b);}
static createNameElement(name){const nameElement=createElementWithClass('span','name');if(/^\s|\s$|^$|\n/.test(name))
nameElement.createTextChildren('"',name.replace(/\n/g,'\u21B5'),'"');else
nameElement.textContent=name;return nameElement;}
static valueElementForFunctionDescription(description,includePreview,defaultName){const valueElement=createElementWithClass('span','object-value-function');let text='';if(description){text=description.replace(/^function [gs]et /,'function ').replace(/^function [gs]et\(/,'function\(').replace(/^[gs]et /,'');}
defaultName=defaultName||'';const asyncMatch=text.match(/^(async\s+function)/);const isGenerator=text.startsWith('function*');const isGeneratorShorthand=text.startsWith('*');const isBasic=!isGenerator&&text.startsWith('function');const isClass=text.startsWith('class ')||text.startsWith('class{');const firstArrowIndex=text.indexOf('=>');const isArrow=!asyncMatch&&!isGenerator&&!isBasic&&!isClass&&firstArrowIndex>0;let textAfterPrefix;if(isClass){textAfterPrefix=text.substring('class'.length);const classNameMatch=/^[^{\s]+/.exec(textAfterPrefix.trim());let className=defaultName;if(classNameMatch)
className=classNameMatch[0].trim()||defaultName;addElements('class',textAfterPrefix,className);}else if(asyncMatch){textAfterPrefix=text.substring(asyncMatch[1].length);addElements('async \u0192',textAfterPrefix,nameAndArguments(textAfterPrefix));}else if(isGenerator){textAfterPrefix=text.substring('function*'.length);addElements('\u0192*',textAfterPrefix,nameAndArguments(textAfterPrefix));}else if(isGeneratorShorthand){textAfterPrefix=text.substring('*'.length);addElements('\u0192*',textAfterPrefix,nameAndArguments(textAfterPrefix));}else if(isBasic){textAfterPrefix=text.substring('function'.length);addElements('\u0192',textAfterPrefix,nameAndArguments(textAfterPrefix));}else if(isArrow){const maxArrowFunctionCharacterLength=60;let abbreviation=text;if(defaultName)
abbreviation=defaultName+'()';else if(text.length>maxArrowFunctionCharacterLength)
abbreviation=text.substring(0,firstArrowIndex+2)+' {\u2026}';addElements('',text,abbreviation);}else{addElements('\u0192',text,nameAndArguments(text));}
valueElement.title=description||'';return valueElement;function nameAndArguments(contents){const startOfArgumentsIndex=contents.indexOf('(');const endOfArgumentsMatch=contents.match(/\)\s*{/);if(startOfArgumentsIndex!==-1&&endOfArgumentsMatch&&endOfArgumentsMatch.index>startOfArgumentsIndex){const name=contents.substring(0,startOfArgumentsIndex).trim()||defaultName;const args=contents.substring(startOfArgumentsIndex,endOfArgumentsMatch.index+1);return name+args;}
return defaultName+'()';}
function addElements(prefix,body,abbreviation){const maxFunctionBodyLength=200;if(prefix.length)
valueElement.createChild('span','object-value-function-prefix').textContent=prefix+' ';if(includePreview)
valueElement.createTextChild(body.trim().trimEnd(maxFunctionBodyLength));else
valueElement.createTextChild(abbreviation.replace(/\n/g,' '));}}
static createValueElementWithCustomSupport(value,wasThrown,showPreview,parentElement,linkifier){if(value.customPreview()){const result=(new ObjectUI.CustomPreviewComponent(value)).element;result.classList.add('object-properties-section-custom-section');return result;}
return ObjectUI.ObjectPropertiesSection.createValueElement(value,wasThrown,showPreview,parentElement,linkifier);}
static createValueElement(value,wasThrown,showPreview,parentElement,linkifier){let valueElement;const type=value.type;const subtype=value.subtype;const description=value.description;if(type==='object'&&subtype==='internal#location'){const rawLocation=value.debuggerModel().createRawLocationByScriptId(value.value.scriptId,value.value.lineNumber,value.value.columnNumber);if(rawLocation&&linkifier)
return linkifier.linkifyRawLocation(rawLocation,'');valueElement=createUnknownInternalLocationElement();}else if(type==='string'&&typeof description==='string'){valueElement=createStringElement();}else if(type==='function'){valueElement=ObjectUI.ObjectPropertiesSection.valueElementForFunctionDescription(description);}else if(type==='object'&&subtype==='node'&&description){valueElement=createNodeElement();}else if(type==='number'&&description&&description.indexOf('e')!==-1){valueElement=createNumberWithExponentElement();if(parentElement)
parentElement.classList.add('hbox');}else{valueElement=createElementWithClass('span','object-value-'+(subtype||type));valueElement.title=description||'';if(value.preview&&showPreview){const previewFormatter=new ObjectUI.RemoteObjectPreviewFormatter();previewFormatter.appendObjectPreview(valueElement,value.preview,false);}else{valueElement.setTextContentTruncatedIfNeeded(description);}}
if(wasThrown){const wrapperElement=createElementWithClass('span','error value');wrapperElement.createTextChild('['+Common.UIString('Exception')+': ');wrapperElement.appendChild(valueElement);wrapperElement.createTextChild(']');return wrapperElement;}
valueElement.classList.add('value');return valueElement;function createUnknownInternalLocationElement(){const valueElement=createElementWithClass('span');valueElement.textContent='<'+Common.UIString('unknown')+'>';valueElement.title=description||'';return valueElement;}
function createStringElement(){const valueElement=createElementWithClass('span','object-value-string');valueElement.createChild('span','object-value-string-quote').textContent='"';valueElement.createTextChild('').setTextContentTruncatedIfNeeded(description.replace(/\n/g,'\u21B5'));valueElement.createChild('span','object-value-string-quote').textContent='"';valueElement.title=description||'';return valueElement;}
function createNodeElement(){const valueElement=createElementWithClass('span','object-value-node');ObjectUI.RemoteObjectPreviewFormatter.createSpansForNodeTitle(valueElement,(description));valueElement.addEventListener('click',event=>{Common.Revealer.reveal(value);event.consume(true);},false);valueElement.addEventListener('mousemove',()=>SDK.OverlayModel.highlightObjectAsDOMNode(value),false);valueElement.addEventListener('mouseleave',()=>SDK.OverlayModel.hideDOMNodeHighlight(),false);return valueElement;}
function createNumberWithExponentElement(){const valueElement=createElementWithClass('span','object-value-number');const numberParts=description.split('e');valueElement.createChild('span','object-value-scientific-notation-mantissa').textContent=numberParts[0];valueElement.createChild('span','object-value-scientific-notation-exponent').textContent='e'+numberParts[1];valueElement.classList.add('object-value-scientific-notation-number');valueElement.title=description||'';return valueElement;}}
static formatObjectAsFunction(func,element,linkify,includePreview){func.debuggerModel().functionDetailsPromise(func).then(didGetDetails);function didGetDetails(response){if(linkify&&response&&response.location){element.classList.add('linkified');element.addEventListener('click',()=>Common.Revealer.reveal(response.location)&&false);}
let defaultName=includePreview?'':'anonymous';if(response&&response.functionName)
defaultName=response.functionName;const valueElement=ObjectUI.ObjectPropertiesSection.valueElementForFunctionDescription(func.description,includePreview,defaultName);element.appendChild(valueElement);}}
skipProto(){this._skipProto=true;}
expand(){this._objectTreeElement.expand();}
setEditable(value){this._editable=value;}
objectTreeElement(){return this._objectTreeElement;}
enableContextMenu(){this.element.addEventListener('contextmenu',this._contextMenuEventFired.bind(this),false);}
_contextMenuEventFired(event){const contextMenu=new UI.ContextMenu(event);contextMenu.appendApplicableItems(this._object);if(this._object instanceof SDK.LocalJSONObject){contextMenu.viewSection().appendItem(ls`Expand recursively`,this._objectTreeElement.expandRecursively.bind(this._objectTreeElement,Number.MAX_VALUE));contextMenu.viewSection().appendItem(ls`Collapse children`,this._objectTreeElement.collapseChildren.bind(this._objectTreeElement));}
contextMenu.show();}
titleLessMode(){this._objectTreeElement.listItemElement.classList.add('hidden');this._objectTreeElement.childrenListElement.classList.add('title-less-mode');this._objectTreeElement.expand();}};ObjectUI.ObjectPropertiesSection._arrayLoadThreshold=100;ObjectUI.ObjectPropertiesSection.RootElement=class extends UI.TreeElement{constructor(object,linkifier,emptyPlaceholder,ignoreHasOwnProperty,extraProperties){const contentElement=createElement('content');super(contentElement);this._object=object;this._extraProperties=extraProperties||[];this._ignoreHasOwnProperty=!!ignoreHasOwnProperty;this._emptyPlaceholder=emptyPlaceholder;this.setExpandable(true);this.selectable=false;this.toggleOnClick=true;this.listItemElement.classList.add('object-properties-section-root-element');this._linkifier=linkifier;}
onexpand(){if(this.treeOutline)
this.treeOutline.element.classList.add('expanded');}
oncollapse(){if(this.treeOutline)
this.treeOutline.element.classList.remove('expanded');}
ondblclick(e){return true;}
onpopulate(){ObjectUI.ObjectPropertyTreeElement._populate(this,this._object,!!this.treeOutline._skipProto,this._linkifier,this._emptyPlaceholder,this._ignoreHasOwnProperty,this._extraProperties);}};ObjectUI.ObjectPropertyTreeElement=class extends UI.TreeElement{constructor(property,linkifier){super();this.property=property;this.toggleOnClick=true;this.selectable=false;this._highlightChanges=[];this._linkifier=linkifier;this.listItemElement.addEventListener('contextmenu',this._contextMenuFired.bind(this),false);}
static _populate(treeElement,value,skipProto,linkifier,emptyPlaceholder,flattenProtoChain,extraProperties,targetValue){if(value.arrayLength()>ObjectUI.ObjectPropertiesSection._arrayLoadThreshold){treeElement.removeChildren();ObjectUI.ArrayGroupingTreeElement._populateArray(treeElement,value,0,value.arrayLength()-1,linkifier);return;}
function callback(properties,internalProperties){treeElement.removeChildren();if(!properties)
return;extraProperties=extraProperties||[];for(let i=0;i<extraProperties.length;++i)
properties.push(extraProperties[i]);ObjectUI.ObjectPropertyTreeElement.populateWithProperties(treeElement,properties,internalProperties,skipProto,targetValue||value,linkifier,emptyPlaceholder);}
if(flattenProtoChain)
value.getAllProperties(false,true,callback);else
SDK.RemoteObject.loadFromObjectPerProto(value,true,callback);}
static populateWithProperties(treeNode,properties,internalProperties,skipProto,value,linkifier,emptyPlaceholder){properties.sort(ObjectUI.ObjectPropertiesSection.CompareProperties);const tailProperties=[];let protoProperty=null;for(let i=0;i<properties.length;++i){const property=properties[i];property.parentObject=value;if(property.name==='__proto__'&&!property.isAccessorProperty()){protoProperty=property;continue;}
if(property.isOwn&&property.getter){const getterProperty=new SDK.RemoteObjectProperty('get '+property.name,property.getter,false);getterProperty.parentObject=value;tailProperties.push(getterProperty);}
if(property.isOwn&&property.setter){const setterProperty=new SDK.RemoteObjectProperty('set '+property.name,property.setter,false);setterProperty.parentObject=value;tailProperties.push(setterProperty);}
const canShowProperty=property.getter||!property.isAccessorProperty();if(canShowProperty&&property.name!=='__proto__')
treeNode.appendChild(new ObjectUI.ObjectPropertyTreeElement(property,linkifier));}
for(let i=0;i<tailProperties.length;++i)
treeNode.appendChild(new ObjectUI.ObjectPropertyTreeElement(tailProperties[i],linkifier));if(!skipProto&&protoProperty)
treeNode.appendChild(new ObjectUI.ObjectPropertyTreeElement(protoProperty,linkifier));if(internalProperties){for(let i=0;i<internalProperties.length;i++){internalProperties[i].parentObject=value;const treeElement=new ObjectUI.ObjectPropertyTreeElement(internalProperties[i],linkifier);if(internalProperties[i].name==='[[Entries]]'){treeElement.setExpandable(true);treeElement.expand();}
treeNode.appendChild(treeElement);}}
ObjectUI.ObjectPropertyTreeElement._appendEmptyPlaceholderIfNeeded(treeNode,emptyPlaceholder);}
static _appendEmptyPlaceholderIfNeeded(treeNode,emptyPlaceholder){if(treeNode.childCount())
return;const title=createElementWithClass('div','gray-info-message');title.textContent=emptyPlaceholder||Common.UIString('No properties');const infoElement=new UI.TreeElement(title);treeNode.appendChild(infoElement);}
static createRemoteObjectAccessorPropertySpan(object,propertyPath,callback){const rootElement=createElement('span');const element=rootElement.createChild('span');element.textContent=Common.UIString('(...)');if(!object)
return rootElement;element.classList.add('object-value-calculate-value-button');element.title=Common.UIString('Invoke property getter');element.addEventListener('click',onInvokeGetterClick,false);function onInvokeGetterClick(event){event.consume();object.getProperty(propertyPath,callback);}
return rootElement;}
setSearchRegex(regex,additionalCssClassName){let cssClasses=UI.highlightedSearchResultClassName;if(additionalCssClassName)
cssClasses+=' '+additionalCssClassName;this.revertHighlightChanges();this._applySearch(regex,this.nameElement,cssClasses);const valueType=this.property.value.type;if(valueType!=='object')
this._applySearch(regex,this.valueElement,cssClasses);return!!this._highlightChanges.length;}
_applySearch(regex,element,cssClassName){const ranges=[];const content=element.textContent;regex.lastIndex=0;let match=regex.exec(content);while(match){ranges.push(new TextUtils.SourceRange(match.index,match[0].length));match=regex.exec(content);}
if(ranges.length)
UI.highlightRangesWithStyleClass(element,ranges,cssClassName,this._highlightChanges);}
revertHighlightChanges(){UI.revertDomChanges(this._highlightChanges);this._highlightChanges=[];}
onpopulate(){const propertyValue=(this.property.value);console.assert(propertyValue);const skipProto=this.treeOutline?this.treeOutline._skipProto:true;const targetValue=this.property.name!=='__proto__'?propertyValue:this.property.parentObject;ObjectUI.ObjectPropertyTreeElement._populate(this,propertyValue,skipProto,this._linkifier,undefined,undefined,undefined,targetValue);}
ondblclick(event){const inEditableElement=event.target.isSelfOrDescendant(this.valueElement)||(this.expandedValueElement&&event.target.isSelfOrDescendant(this.expandedValueElement));if(!this.property.value.customPreview()&&inEditableElement&&(this.property.writable||this.property.setter))
this._startEditing();return false;}
onattach(){this.update();this._updateExpandable();}
onexpand(){this._showExpandedValueElement(true);}
oncollapse(){this._showExpandedValueElement(false);}
_showExpandedValueElement(value){if(!this.expandedValueElement)
return;if(value)
this.listItemElement.replaceChild(this.expandedValueElement,this.valueElement);else
this.listItemElement.replaceChild(this.valueElement,this.expandedValueElement);}
_createExpandedValueElement(value){const needsAlternateValue=value.hasChildren&&!value.customPreview()&&value.subtype!=='node'&&value.type!=='function'&&(value.type!=='object'||value.preview);if(!needsAlternateValue)
return null;const valueElement=createElementWithClass('span','value');if(value.description==='Object')
valueElement.textContent='';else
valueElement.setTextContentTruncatedIfNeeded(value.description||'');valueElement.classList.add('object-value-'+(value.subtype||value.type));valueElement.title=value.description||'';return valueElement;}
update(){this.nameElement=ObjectUI.ObjectPropertiesSection.createNameElement(this.property.name);if(!this.property.enumerable)
this.nameElement.classList.add('object-properties-section-dimmed');if(this.property.synthetic)
this.nameElement.classList.add('synthetic-property');this._updatePropertyPath();const separatorElement=createElementWithClass('span','object-properties-section-separator');separatorElement.textContent=': ';if(this.property.value){const showPreview=this.property.name!=='__proto__';this.valueElement=ObjectUI.ObjectPropertiesSection.createValueElementWithCustomSupport(this.property.value,this.property.wasThrown,showPreview,this.listItemElement,this._linkifier);}else if(this.property.getter){this.valueElement=ObjectUI.ObjectPropertyTreeElement.createRemoteObjectAccessorPropertySpan(this.property.parentObject,[this.property.name],this._onInvokeGetterClick.bind(this));}else{this.valueElement=createElementWithClass('span','object-value-undefined');this.valueElement.textContent=Common.UIString('<unreadable>');this.valueElement.title=Common.UIString('No property getter');}
const valueText=this.valueElement.textContent;if(this.property.value&&valueText&&!this.property.wasThrown)
this.expandedValueElement=this._createExpandedValueElement(this.property.value);this.listItemElement.removeChildren();this.listItemElement.appendChildren(this.nameElement,separatorElement,this.valueElement);}
_updatePropertyPath(){if(this.nameElement.title)
return;const useDotNotation=/^(_|\$|[A-Z])(_|\$|[A-Z]|\d)*$/i;const isInteger=/^[1-9]\d*$/;const name=this.property.name;const parentPath=this.parent.nameElement?this.parent.nameElement.title:'';if(useDotNotation.test(name))
this.nameElement.title=parentPath?`${parentPath}.${name}`:name;else if(isInteger.test(name))
this.nameElement.title=parentPath+'['+name+']';else
this.nameElement.title=parentPath+'["'+JSON.stringify(name)+'"]';}
_contextMenuFired(event){const contextMenu=new UI.ContextMenu(event);contextMenu.appendApplicableItems(this);if(this.property.symbol)
contextMenu.appendApplicableItems(this.property.symbol);if(this.property.value)
contextMenu.appendApplicableItems(this.property.value);if(this.nameElement&&this.nameElement.title){const copyPathHandler=InspectorFrontendHost.copyText.bind(InspectorFrontendHost,this.nameElement.title);contextMenu.clipboardSection().appendItem(ls`Copy property path`,copyPathHandler);}
if(this.property.parentObject instanceof SDK.LocalJSONObject){contextMenu.viewSection().appendItem(ls`Expand recursively`,this.expandRecursively.bind(this,Number.MAX_VALUE));contextMenu.viewSection().appendItem(ls`Collapse children`,this.collapseChildren.bind(this));}
contextMenu.show();}
_startEditing(){if(this._prompt||!this.treeOutline._editable||this._readOnly)
return;this._editableDiv=this.listItemElement.createChild('span','editable-div');let text=this.property.value.description;if(this.property.value.type==='string'&&typeof text==='string')
text='"'+text+'"';this._editableDiv.setTextContentTruncatedIfNeeded(text,Common.UIString('<string is too large to edit>'));const originalContent=this._editableDiv.textContent;this.setExpandable(false);this.listItemElement.classList.add('editing-sub-part');this.valueElement.classList.add('hidden');this._prompt=new ObjectUI.ObjectPropertyPrompt();const proxyElement=this._prompt.attachAndStartEditing(this._editableDiv,this._editingCommitted.bind(this,originalContent));this.listItemElement.getComponentSelection().selectAllChildren(this._editableDiv);proxyElement.addEventListener('keydown',this._promptKeyDown.bind(this,originalContent),false);}
_editingEnded(){this._prompt.detach();delete this._prompt;this._editableDiv.remove();this._updateExpandable();this.listItemElement.scrollLeft=0;this.listItemElement.classList.remove('editing-sub-part');}
_editingCancelled(){this.valueElement.classList.remove('hidden');this._editingEnded();}
_editingCommitted(originalContent){const userInput=this._prompt.text();if(userInput===originalContent){this._editingCancelled();return;}
this._editingEnded();this._applyExpression(userInput);}
_promptKeyDown(originalContent,event){if(isEnterKey(event)){event.consume();this._editingCommitted(originalContent);return;}
if(event.key==='Escape'){event.consume();this._editingCancelled();return;}}
async _applyExpression(expression){const property=SDK.RemoteObject.toCallArgument(this.property.symbol||this.property.name);expression=SDK.RuntimeModel.wrapObjectLiteralExpressionIfNeeded(expression.trim());if(this.property.synthetic){let invalidate=false;if(expression)
invalidate=await this.property.setSyntheticValue(expression);if(invalidate){const parent=this.parent;parent.invalidateChildren();parent.onpopulate();}else{this.update();}
return;}
const errorPromise=expression?this.property.parentObject.setPropertyValue(property,expression):this.property.parentObject.deleteProperty(property);const error=await errorPromise;if(error){this.update();return;}
if(!expression){this.parent.removeChild(this);}else{const parent=this.parent;parent.invalidateChildren();parent.onpopulate();}}
_onInvokeGetterClick(result,wasThrown){if(!result)
return;this.property.value=result;this.property.wasThrown=wasThrown;this.update();this.invalidateChildren();this._updateExpandable();}
_updateExpandable(){if(this.property.value){this.setExpandable(!this.property.value.customPreview()&&this.property.value.hasChildren&&!this.property.wasThrown);}else{this.setExpandable(false);}}
path(){return this.nameElement.title;}};ObjectUI.ArrayGroupingTreeElement=class extends UI.TreeElement{constructor(object,fromIndex,toIndex,propertyCount,linkifier){super(String.sprintf('[%d \u2026 %d]',fromIndex,toIndex),true);this.toggleOnClick=true;this.selectable=false;this._fromIndex=fromIndex;this._toIndex=toIndex;this._object=object;this._readOnly=true;this._propertyCount=propertyCount;this._linkifier=linkifier;}
static _populateArray(treeNode,object,fromIndex,toIndex,linkifier){ObjectUI.ArrayGroupingTreeElement._populateRanges(treeNode,object,fromIndex,toIndex,true,linkifier);}
static _populateRanges(treeNode,object,fromIndex,toIndex,topLevel,linkifier){object.callFunctionJSON(packRanges,[{value:fromIndex},{value:toIndex},{value:ObjectUI.ArrayGroupingTreeElement._bucketThreshold},{value:ObjectUI.ArrayGroupingTreeElement._sparseIterationThreshold},{value:ObjectUI.ArrayGroupingTreeElement._getOwnPropertyNamesThreshold}],callback);function packRanges(fromIndex,toIndex,bucketThreshold,sparseIterationThreshold,getOwnPropertyNamesThreshold){let ownPropertyNames=null;const consecutiveRange=(toIndex-fromIndex>=sparseIterationThreshold)&&ArrayBuffer.isView(this);const skipGetOwnPropertyNames=consecutiveRange&&(toIndex-fromIndex>=getOwnPropertyNamesThreshold);function*arrayIndexes(object){if(toIndex-fromIndex<sparseIterationThreshold){for(let i=fromIndex;i<=toIndex;++i){if(i in object)
yield i;}}else{ownPropertyNames=ownPropertyNames||Object.getOwnPropertyNames(object);for(let i=0;i<ownPropertyNames.length;++i){const name=ownPropertyNames[i];const index=name>>>0;if((''+index)===name&&fromIndex<=index&&index<=toIndex)
yield index;}}}
let count=0;if(consecutiveRange){count=toIndex-fromIndex+1;}else{for(const i of arrayIndexes(this))
++count;}
let bucketSize=count;if(count<=bucketThreshold)
bucketSize=count;else
bucketSize=Math.pow(bucketThreshold,Math.ceil(Math.log(count)/Math.log(bucketThreshold))-1);const ranges=[];if(consecutiveRange){for(let i=fromIndex;i<=toIndex;i+=bucketSize){const groupStart=i;let groupEnd=groupStart+bucketSize-1;if(groupEnd>toIndex)
groupEnd=toIndex;ranges.push([groupStart,groupEnd,groupEnd-groupStart+1]);}}else{count=0;let groupStart=-1;let groupEnd=0;for(const i of arrayIndexes(this)){if(groupStart===-1)
groupStart=i;groupEnd=i;if(++count===bucketSize){ranges.push([groupStart,groupEnd,count]);count=0;groupStart=-1;}}
if(count>0)
ranges.push([groupStart,groupEnd,count]);}
return{ranges:ranges,skipGetOwnPropertyNames:skipGetOwnPropertyNames};}
function callback(result){if(!result)
return;const ranges=(result.ranges);if(ranges.length===1){ObjectUI.ArrayGroupingTreeElement._populateAsFragment(treeNode,object,ranges[0][0],ranges[0][1],linkifier);}else{for(let i=0;i<ranges.length;++i){const fromIndex=ranges[i][0];const toIndex=ranges[i][1];const count=ranges[i][2];if(fromIndex===toIndex)
ObjectUI.ArrayGroupingTreeElement._populateAsFragment(treeNode,object,fromIndex,toIndex,linkifier);else
treeNode.appendChild(new ObjectUI.ArrayGroupingTreeElement(object,fromIndex,toIndex,count,linkifier));}}
if(topLevel){ObjectUI.ArrayGroupingTreeElement._populateNonIndexProperties(treeNode,object,result.skipGetOwnPropertyNames,linkifier);}}}
static _populateAsFragment(treeNode,object,fromIndex,toIndex,linkifier){object.callFunction(buildArrayFragment,[{value:fromIndex},{value:toIndex},{value:ObjectUI.ArrayGroupingTreeElement._sparseIterationThreshold}],processArrayFragment.bind(this));function buildArrayFragment(fromIndex,toIndex,sparseIterationThreshold){const result=Object.create(null);if(toIndex-fromIndex<sparseIterationThreshold){for(let i=fromIndex;i<=toIndex;++i){if(i in this)
result[i]=this[i];}}else{const ownPropertyNames=Object.getOwnPropertyNames(this);for(let i=0;i<ownPropertyNames.length;++i){const name=ownPropertyNames[i];const index=name>>>0;if(String(index)===name&&fromIndex<=index&&index<=toIndex)
result[index]=this[index];}}
return result;}
function processArrayFragment(arrayFragment,wasThrown){if(!arrayFragment||wasThrown)
return;arrayFragment.getAllProperties(false,true,processProperties.bind(this));}
function processProperties(properties,internalProperties){if(!properties)
return;properties.sort(ObjectUI.ObjectPropertiesSection.CompareProperties);for(let i=0;i<properties.length;++i){properties[i].parentObject=this._object;const childTreeElement=new ObjectUI.ObjectPropertyTreeElement(properties[i],linkifier);childTreeElement._readOnly=true;treeNode.appendChild(childTreeElement);}}}
static _populateNonIndexProperties(treeNode,object,skipGetOwnPropertyNames,linkifier){object.callFunction(buildObjectFragment,[{value:skipGetOwnPropertyNames}],processObjectFragment.bind(this));function buildObjectFragment(skipGetOwnPropertyNames){const result={__proto__:this.__proto__};if(skipGetOwnPropertyNames)
return result;const names=Object.getOwnPropertyNames(this);for(let i=0;i<names.length;++i){const name=names[i];if(String(name>>>0)===name&&name>>>0!==0xffffffff)
continue;const descriptor=Object.getOwnPropertyDescriptor(this,name);if(descriptor)
Object.defineProperty(result,name,descriptor);}
return result;}
function processObjectFragment(arrayFragment,wasThrown){if(!arrayFragment||wasThrown)
return;arrayFragment.getOwnProperties(true,processProperties.bind(this));}
function processProperties(properties,internalProperties){if(!properties)
return;properties.sort(ObjectUI.ObjectPropertiesSection.CompareProperties);for(let i=0;i<properties.length;++i){properties[i].parentObject=this._object;const childTreeElement=new ObjectUI.ObjectPropertyTreeElement(properties[i],linkifier);childTreeElement._readOnly=true;treeNode.appendChild(childTreeElement);}}}
onpopulate(){if(this._propertyCount>=ObjectUI.ArrayGroupingTreeElement._bucketThreshold){ObjectUI.ArrayGroupingTreeElement._populateRanges(this,this._object,this._fromIndex,this._toIndex,false,this._linkifier);return;}
ObjectUI.ArrayGroupingTreeElement._populateAsFragment(this,this._object,this._fromIndex,this._toIndex,this._linkifier);}
onattach(){this.listItemElement.classList.add('object-properties-section-name');}};ObjectUI.ArrayGroupingTreeElement._bucketThreshold=100;ObjectUI.ArrayGroupingTreeElement._sparseIterationThreshold=250000;ObjectUI.ArrayGroupingTreeElement._getOwnPropertyNamesThreshold=500000;ObjectUI.ObjectPropertyPrompt=class extends UI.TextPrompt{constructor(){super();this.initialize(ObjectUI.javaScriptAutocomplete.completionsForTextInCurrentContext.bind(ObjectUI.javaScriptAutocomplete));}};ObjectUI.ObjectPropertiesSectionExpandController=class{constructor(){this._expandedProperties=new Set();}
watchSection(id,section){section.addEventListener(UI.TreeOutline.Events.ElementAttached,this._elementAttached,this);section.addEventListener(UI.TreeOutline.Events.ElementExpanded,this._elementExpanded,this);section.addEventListener(UI.TreeOutline.Events.ElementCollapsed,this._elementCollapsed,this);section[ObjectUI.ObjectPropertiesSectionExpandController._treeOutlineId]=id;if(this._expandedProperties.has(id))
section.expand();}
stopWatchSectionsWithId(id){for(const property of this._expandedProperties){if(property.startsWith(id+':'))
this._expandedProperties.delete(property);}}
_elementAttached(event){const element=(event.data);if(element.isExpandable()&&this._expandedProperties.has(this._propertyPath(element)))
element.expand();}
_elementExpanded(event){const element=(event.data);this._expandedProperties.add(this._propertyPath(element));}
_elementCollapsed(event){const element=(event.data);this._expandedProperties.delete(this._propertyPath(element));}
_propertyPath(treeElement){const cachedPropertyPath=treeElement[ObjectUI.ObjectPropertiesSectionExpandController._cachedPathSymbol];if(cachedPropertyPath)
return cachedPropertyPath;let current=treeElement;const rootElement=treeElement.treeOutline.objectTreeElement();let result;while(current!==rootElement){let currentName='';if(current.property)
currentName=current.property.name;else
currentName=typeof current.title==='string'?current.title:current.title.textContent;result=currentName+(result?'.'+result:'');current=current.parent;}
const treeOutlineId=treeElement.treeOutline[ObjectUI.ObjectPropertiesSectionExpandController._treeOutlineId];result=treeOutlineId+(result?':'+result:'');treeElement[ObjectUI.ObjectPropertiesSectionExpandController._cachedPathSymbol]=result;return result;}};ObjectUI.ObjectPropertiesSectionExpandController._cachedPathSymbol=Symbol('cachedPath');ObjectUI.ObjectPropertiesSectionExpandController._treeOutlineId=Symbol('treeOutlineId');ObjectUI.ObjectPropertiesSection.Renderer=class{render(object,options){if(!(object instanceof SDK.RemoteObject))
return Promise.reject(new Error('Can\'t render '+object));options=options||{};const title=options.title;const section=new ObjectUI.ObjectPropertiesSection(object,title);if(!title)
section.titleLessMode();if(options.expanded)
section.expand();section.editable=!!options.editable;return Promise.resolve(section.element);}};;ObjectUI.JavaScriptAutocomplete=class{constructor(){this._expressionCache=new Map();SDK.consoleModel.addEventListener(SDK.ConsoleModel.Events.CommandEvaluated,this._clearCache,this);UI.context.addFlavorChangeListener(SDK.ExecutionContext,this._clearCache,this);SDK.targetManager.addModelListener(SDK.DebuggerModel,SDK.DebuggerModel.Events.DebuggerResumed,this._clearCache,this);SDK.targetManager.addModelListener(SDK.DebuggerModel,SDK.DebuggerModel.Events.DebuggerPaused,this._clearCache,this);}
_clearCache(){this._expressionCache.clear();}
async completionsForTextInCurrentContext(fullText,query,force){const trimmedText=fullText.trim();const[mapCompletions,expressionCompletions]=await Promise.all([this._mapCompletions(trimmedText,query),this._completionsForExpression(trimmedText,query,force)]);return mapCompletions.concat(expressionCompletions);}
async argumentsHint(fullText){const functionCall=await Formatter.formatterWorkerPool().findLastFunctionCall(fullText);if(!functionCall)
return null;const executionContext=UI.context.flavor(SDK.ExecutionContext);if(!executionContext)
return null;const result=await executionContext.evaluate({expression:functionCall.baseExpression,objectGroup:'argumentsHint',includeCommandLineAPI:true,silent:true,returnByValue:false,generatePreview:false,throwOnSideEffect:functionCall.possibleSideEffects,timeout:functionCall.possibleSideEffects?500:undefined},false,false);if(!result||result.exceptionDetails||!result.object||result.object.type!=='function'){executionContext.runtimeModel.releaseObjectGroup('argumentsHint');return null;}
const args=await this._argumentsForFunction(result.object,async()=>{const result=await executionContext.evaluate({expression:functionCall.receiver,objectGroup:'argumentsHint',includeCommandLineAPI:true,silent:true,returnByValue:false,generatePreview:false,throwOnSideEffect:functionCall.possibleSideEffects,timeout:functionCall.possibleSideEffects?500:undefined},false,false);return(result&&!result.exceptionDetails)?result.object:null;},functionCall.functionName);executionContext.runtimeModel.releaseObjectGroup('argumentsHint');if(!args.length||(args.length===1&&!args[0].length))
return null;return{args,argumentIndex:functionCall.argumentIndex};}
async _argumentsForFunction(functionObject,receiverObjGetter,parsedFunctionName){const description=functionObject.description;if(!description.endsWith('{ [native code] }'))
return[await Formatter.formatterWorkerPool().argumentsList(description)];if(description==='function () { [native code] }'){const properties=await functionObject.getOwnPropertiesPromise(false);const internalProperties=properties.internalProperties||[];const targetProperty=internalProperties.find(property=>property.name==='[[TargetFunction]]');const argsProperty=internalProperties.find(property=>property.name==='[[BoundArgs]]');const thisProperty=internalProperties.find(property=>property.name==='[[BoundThis]]');if(thisProperty&&targetProperty&&argsProperty){const originalSignatures=await this._argumentsForFunction(targetProperty.value,()=>Promise.resolve(thisProperty.value));const boundArgsLength=SDK.RemoteObject.arrayLength(argsProperty.value);const clippedArgs=[];for(const signature of originalSignatures){const restIndex=signature.slice(0,boundArgsLength).findIndex(arg=>arg.startsWith('...'));if(restIndex!==-1)
clippedArgs.push(signature.slice(restIndex));else
clippedArgs.push(signature.slice(boundArgsLength));}
return clippedArgs;}}
const javaScriptMetadata=await self.runtime.extension(Common.JavaScriptMetadata).instance();const name=/^function ([^(]*)\(/.exec(description)[1]||parsedFunctionName;if(!name)
return[];const uniqueSignatures=javaScriptMetadata.signaturesForNativeFunction(name);if(uniqueSignatures)
return uniqueSignatures;const receiverObj=await receiverObjGetter();const className=receiverObj.className;if(javaScriptMetadata.signaturesForInstanceMethod(name,className))
return javaScriptMetadata.signaturesForInstanceMethod(name,className);if(receiverObj.type==='function'&&receiverObj.description.endsWith('{ [native code] }')){const receiverName=/^function ([^(]*)\(/.exec(receiverObj.description)[1];const staticSignatures=javaScriptMetadata.signaturesForStaticMethod(name,receiverName);if(staticSignatures)
return staticSignatures;}
let protoNames;if(receiverObj.type==='number'){protoNames=['Number','Object'];}else if(receiverObj.type==='string'){protoNames=['String','Object'];}else if(receiverObj.type==='symbol'){protoNames=['Symbol','Object'];}else if(receiverObj.type==='bigint'){protoNames=['BigInt','Object'];}else if(receiverObj.type==='boolean'){protoNames=['Boolean','Object'];}else if(receiverObj.type==='undefined'||receiverObj.subtype==='null'){protoNames=[];}else{protoNames=await receiverObj.callFunctionJSONPromise(function(){const result=[];for(let object=this;object;object=Object.getPrototypeOf(object)){if(typeof object==='object'&&object.constructor&&object.constructor.name)
result[result.length]=object.constructor.name;}
return result;});}
for(const proto of protoNames){const instanceSignatures=javaScriptMetadata.signaturesForInstanceMethod(name,proto);if(instanceSignatures)
return instanceSignatures;}
return[];}
async _mapCompletions(text,query){const mapMatch=text.match(/\.\s*(get|set|delete)\s*\(\s*$/);const executionContext=UI.context.flavor(SDK.ExecutionContext);if(!executionContext||!mapMatch)
return[];const expression=await Formatter.formatterWorkerPool().findLastExpression(text.substring(0,mapMatch.index));if(!expression)
return[];const result=await executionContext.evaluate({expression:expression.baseExpression,objectGroup:'mapCompletion',includeCommandLineAPI:true,silent:true,returnByValue:false,generatePreview:false,throwOnSideEffect:expression.possibleSideEffects,timeout:expression.possibleSideEffects?500:undefined},false,false);if(result.error||!!result.exceptionDetails||result.object.subtype!=='map')
return[];const properties=await result.object.getOwnPropertiesPromise(false);const internalProperties=properties.internalProperties||[];const entriesProperty=internalProperties.find(property=>property.name==='[[Entries]]');if(!entriesProperty)
return[];const keysObj=await entriesProperty.value.callFunctionJSONPromise(getEntries);executionContext.runtimeModel.releaseObjectGroup('mapCompletion');return gotKeys(Object.keys(keysObj));function getEntries(){const result={__proto__:null};for(let i=0;i<this.length;i++){if(typeof this[i].key==='string')
result[this[i].key]=true;}
return result;}
function gotKeys(rawKeys){const caseSensitivePrefix=[];const caseInsensitivePrefix=[];const caseSensitiveAnywhere=[];const caseInsensitiveAnywhere=[];let quoteChar='"';if(query.startsWith('\''))
quoteChar='\'';let endChar=')';if(mapMatch[0].indexOf('set')!==-1)
endChar=', ';const sorter=rawKeys.length<1000?String.naturalOrderComparator:undefined;const keys=rawKeys.sort(sorter).map(key=>quoteChar+key+quoteChar);for(const key of keys){if(key.length<query.length)
continue;if(query.length&&key.toLowerCase().indexOf(query.toLowerCase())===-1)
continue;const title=key.split('\n').join('\\n');const text=title+endChar;if(key.startsWith(query))
caseSensitivePrefix.push({text:text,title:title,priority:4});else if(key.toLowerCase().startsWith(query.toLowerCase()))
caseInsensitivePrefix.push({text:text,title:title,priority:3});else if(key.indexOf(query)!==-1)
caseSensitiveAnywhere.push({text:text,title:title,priority:2});else
caseInsensitiveAnywhere.push({text:text,title:title,priority:1});}
const suggestions=caseSensitivePrefix.concat(caseInsensitivePrefix,caseSensitiveAnywhere,caseInsensitiveAnywhere);if(suggestions.length)
suggestions[0].subtitle=Common.UIString('Keys');return suggestions;}}
async _completionsForExpression(fullText,query,force){const executionContext=UI.context.flavor(SDK.ExecutionContext);if(!executionContext)
return[];let expression;if(fullText.endsWith('.')||fullText.endsWith('['))
expression=await Formatter.formatterWorkerPool().findLastExpression(fullText.substring(0,fullText.length-1));if(!expression){if(fullText.endsWith('.'))
return[];expression={baseExpression:'',possibleSideEffects:false};}
const needsNoSideEffects=expression.possibleSideEffects;const expressionString=expression.baseExpression;const dotNotation=fullText.endsWith('.');const bracketNotation=!!expressionString&&fullText.endsWith('[');if((expressionString&&!isNaN(expressionString))||(!expressionString&&query&&!isNaN(query)))
return[];if(!query&&!expressionString&&!force)
return[];const selectedFrame=executionContext.debuggerModel.selectedCallFrame();let completionGroups;const TEN_SECONDS=10000;let cache=this._expressionCache.get(expressionString);if(cache&&cache.date+TEN_SECONDS>Date.now()){completionGroups=await cache.value;}else if(!expressionString&&selectedFrame){cache={date:Date.now(),value:completionsOnPause(selectedFrame)};this._expressionCache.set(expressionString,cache);completionGroups=await cache.value;}else{const resultPromise=executionContext.evaluate({expression:expressionString,objectGroup:'completion',includeCommandLineAPI:true,silent:true,returnByValue:false,generatePreview:false,throwOnSideEffect:needsNoSideEffects,timeout:needsNoSideEffects?500:undefined},false,false);cache={date:Date.now(),value:resultPromise.then(result=>completionsOnGlobal.call(this,result))};this._expressionCache.set(expressionString,cache);completionGroups=await cache.value;}
return this._receivedPropertyNames(completionGroups.slice(0),dotNotation,bracketNotation,expressionString,query);async function completionsOnGlobal(result){if(result.error||!!result.exceptionDetails||!result.object)
return[];let object=result.object;while(object&&object.type==='object'&&object.subtype==='proxy'){const properties=await object.getOwnPropertiesPromise(false);const internalProperties=properties.internalProperties||[];const target=internalProperties.find(property=>property.name==='[[Target]]');object=target?target.value:null;}
if(!object)
return[];let completions=[];if(object.type==='object'||object.type==='function'){completions=await object.callFunctionJSONPromise(getCompletions,[SDK.RemoteObject.toCallArgument(object.subtype)])||[];}else if(object.type==='string'||object.type==='number'||object.type==='boolean'||object.type==='bigint'){const evaluateResult=await executionContext.evaluate({expression:'('+getCompletions+')("'+object.type+'")',objectGroup:'completion',includeCommandLineAPI:false,silent:true,returnByValue:true,generatePreview:false},false,false);if(evaluateResult.object&&!evaluateResult.exceptionDetails)
completions=evaluateResult.object.value||[];}
executionContext.runtimeModel.releaseObjectGroup('completion');if(!expressionString){const globalNames=await executionContext.globalLexicalScopeNames();if(completions.length)
completions[0].items=completions[0].items.concat(globalNames);else
completions.push({items:globalNames.sort(),title:Common.UIString('Lexical scope variables')});}
for(const group of completions){for(let i=0;i<group.items.length;i++)
group.items[i]=group.items[i].replace(/\n/g,'\\n');group.items.sort(group.items.length<1000?this._itemComparator:undefined);}
return completions;function getCompletions(type){let object;if(type==='string')
object=new String('');else if(type==='number')
object=new Number(0);else if(type==='bigint')
object=Object(BigInt(0));else if(type==='boolean')
object=new Boolean(false);else
object=this;const result=[];try{for(let o=object;o;o=Object.getPrototypeOf(o)){if((type==='array'||type==='typedarray')&&o===object&&o.length>9999)
continue;const group={items:[],__proto__:null};try{if(typeof o==='object'&&o.constructor&&o.constructor.name)
group.title=o.constructor.name;}catch(ee){}
result[result.length]=group;const names=Object.getOwnPropertyNames(o);const isArray=Array.isArray(o);for(let i=0;i<names.length&&group.items.length<10000;++i){if(isArray&&/^[0-9]/.test(names[i]))
continue;group.items[group.items.length]=names[i];}}}catch(e){}
return result;}}
async function completionsOnPause(callFrame){const result=[{items:['this']}];const scopeChain=callFrame.scopeChain();const groupPromises=[];for(const scope of scopeChain){groupPromises.push(scope.object().getAllPropertiesPromise(false,false).then(result=>({properties:result.properties,name:scope.name()})));}
const fullScopes=await Promise.all(groupPromises);executionContext.runtimeModel.releaseObjectGroup('completion');for(const scope of fullScopes)
result.push({title:scope.name,items:scope.properties.map(property=>property.name).sort()});return result;}}
_receivedPropertyNames(propertyGroups,dotNotation,bracketNotation,expressionString,query){if(!propertyGroups)
return[];const includeCommandLineAPI=(!dotNotation&&!bracketNotation);if(includeCommandLineAPI){const commandLineAPI=['dir','dirxml','keys','values','profile','profileEnd','monitorEvents','unmonitorEvents','inspect','copy','clear','getEventListeners','debug','undebug','monitor','unmonitor','table','queryObjects','$','$$','$x'];propertyGroups.push({items:commandLineAPI});}
return this._completionsForQuery(dotNotation,bracketNotation,expressionString,query,propertyGroups);}
_completionsForQuery(dotNotation,bracketNotation,expressionString,query,propertyGroups){const quoteUsed=(bracketNotation&&query.startsWith('\''))?'\'':'"';if(!expressionString){const keywords=['await','break','case','catch','class','const','continue','debugger','default','delete','do','else','exports','extends','finally','for','function','if','import','in','instanceof','new','return','super','switch','this','throw','try','typeof','var','void','while','with','yield','let','static','async','of'];propertyGroups.push({title:ls`keywords`,items:keywords.sort()});}
const allProperties=new Set();let result=[];let lastGroupTitle;const regex=/^[a-zA-Z_$\u008F-\uFFFF][a-zA-Z0-9_$\u008F-\uFFFF]*$/;const lowerCaseQuery=query.toLowerCase();for(const group of propertyGroups){const caseSensitivePrefix=[];const caseInsensitivePrefix=[];const caseSensitiveAnywhere=[];const caseInsensitiveAnywhere=[];for(let i=0;i<group.items.length;i++){let property=group.items[i];if(!bracketNotation&&!regex.test(property))
continue;if(bracketNotation){if(!/^[0-9]+$/.test(property))
property=quoteUsed+property.escapeCharacters(quoteUsed+'\\')+quoteUsed;property+=']';}
if(allProperties.has(property))
continue;if(property.length<query.length)
continue;const lowerCaseProperty=property.toLowerCase();if(query.length&&lowerCaseProperty.indexOf(lowerCaseQuery)===-1)
continue;allProperties.add(property);if(property.startsWith(query))
caseSensitivePrefix.push({text:property,priority:4});else if(lowerCaseProperty.startsWith(lowerCaseQuery))
caseInsensitivePrefix.push({text:property,priority:3});else if(property.indexOf(query)!==-1)
caseSensitiveAnywhere.push({text:property,priority:2});else
caseInsensitiveAnywhere.push({text:property,priority:1});}
const structuredGroup=caseSensitivePrefix.concat(caseInsensitivePrefix,caseSensitiveAnywhere,caseInsensitiveAnywhere);if(structuredGroup.length&&group.title!==lastGroupTitle){structuredGroup[0].subtitle=group.title;lastGroupTitle=group.title;}
result=result.concat(structuredGroup);result.forEach(item=>{if(item.text.endsWith(']'))
item.title=item.text.substring(0,item.text.length-1);});}
return result;}
_itemComparator(a,b){const aStartsWithUnderscore=a.startsWith('_');const bStartsWithUnderscore=b.startsWith('_');if(aStartsWithUnderscore&&!bStartsWithUnderscore)
return 1;if(bStartsWithUnderscore&&!aStartsWithUnderscore)
return-1;return String.naturalOrderComparator(a,b);}};ObjectUI.JavaScriptAutocomplete.CompletionGroup;ObjectUI.javaScriptAutocomplete=new ObjectUI.JavaScriptAutocomplete();;ObjectUI.RemoteObjectPreviewFormatter=class{static _objectPropertyComparator(a,b){return sortValue(a)-sortValue(b);function sortValue(property){const internalName=ObjectUI.RemoteObjectPreviewFormatter._internalName;if(property.name===internalName.PromiseStatus)
return 1;else if(property.name===internalName.PromiseValue)
return 2;else if(property.name===internalName.GeneratorStatus||internalName.PrimitiveValue)
return 3;else if(property.type!=='function')
return 4;return 5;}}
appendObjectPreview(parentElement,preview,isEntry){const description=preview.description;const subTypesWithoutValuePreview=new Set(['null','regexp','error','internal#entry']);if(preview.type!=='object'||subTypesWithoutValuePreview.has(preview.subtype)||isEntry){parentElement.appendChild(this.renderPropertyPreview(preview.type,preview.subtype,description));return;}
const isArrayOrTypedArray=preview.subtype==='array'||preview.subtype==='typedarray';if(description){let text;if(isArrayOrTypedArray){const arrayLength=SDK.RemoteObject.arrayLength(preview);const arrayLengthText=arrayLength>1?('('+arrayLength+')'):'';const arrayName=SDK.RemoteObject.arrayNameFromDescription(description);text=arrayName==='Array'?arrayLengthText:(arrayName+arrayLengthText);}else{const hideDescription=description==='Object';text=hideDescription?'':description;}
if(text.length>0)
parentElement.createChild('span','object-description').textContent=text+'\u00a0';}
const propertiesElement=parentElement.createChild('span','object-properties-preview');propertiesElement.createTextChild(isArrayOrTypedArray?'[':'{');if(preview.entries)
this._appendEntriesPreview(propertiesElement,preview);else if(isArrayOrTypedArray)
this._appendArrayPropertiesPreview(propertiesElement,preview);else
this._appendObjectPropertiesPreview(propertiesElement,preview);if(preview.overflow){const ellipsisText=propertiesElement.textContent.length>1?',\u00a0\u2026':'\u2026';propertiesElement.createChild('span').textContent=ellipsisText;}
propertiesElement.createTextChild(isArrayOrTypedArray?']':'}');}
_abbreviateFullQualifiedClassName(description){const abbreviatedDescription=description.split('.');for(let i=0;i<abbreviatedDescription.length-1;++i)
abbreviatedDescription[i]=abbreviatedDescription[i].trimMiddle(3);return abbreviatedDescription.join('.');}
_appendObjectPropertiesPreview(parentElement,preview){const internalName=ObjectUI.RemoteObjectPreviewFormatter._internalName;const properties=preview.properties.filter(p=>p.type!=='accessor').stableSort(ObjectUI.RemoteObjectPreviewFormatter._objectPropertyComparator);for(let i=0;i<properties.length;++i){if(i>0)
parentElement.createTextChild(', ');const property=properties[i];const name=property.name;if(preview.subtype==='promise'&&name===internalName.PromiseStatus){parentElement.appendChild(this._renderDisplayName('<'+property.value+'>'));const nextProperty=i+1<properties.length?properties[i+1]:null;if(nextProperty&&nextProperty.name===internalName.PromiseValue){if(property.value!=='pending'){parentElement.createTextChild(': ');parentElement.appendChild(this._renderPropertyPreviewOrAccessor([nextProperty]));}
i++;}}else if(preview.subtype==='generator'&&name===internalName.GeneratorStatus){parentElement.appendChild(this._renderDisplayName('<'+property.value+'>'));}else if(name===internalName.PrimitiveValue){parentElement.appendChild(this._renderPropertyPreviewOrAccessor([property]));}else{parentElement.appendChild(this._renderDisplayName(name));parentElement.createTextChild(': ');parentElement.appendChild(this._renderPropertyPreviewOrAccessor([property]));}}}
_appendArrayPropertiesPreview(parentElement,preview){const arrayLength=SDK.RemoteObject.arrayLength(preview);const indexProperties=preview.properties.filter(p=>toArrayIndex(p.name)!==-1).stableSort(arrayEntryComparator);const otherProperties=preview.properties.filter(p=>toArrayIndex(p.name)===-1).stableSort(ObjectUI.RemoteObjectPreviewFormatter._objectPropertyComparator);function arrayEntryComparator(a,b){return toArrayIndex(a.name)-toArrayIndex(b.name);}
function toArrayIndex(name){const index=name>>>0;if(String(index)===name&&index<arrayLength)
return index;return-1;}
const canShowGaps=!preview.overflow;let lastNonEmptyArrayIndex=-1;let elementsAdded=false;for(let i=0;i<indexProperties.length;++i){if(elementsAdded)
parentElement.createTextChild(', ');const property=indexProperties[i];const index=toArrayIndex(property.name);if(canShowGaps&&index-lastNonEmptyArrayIndex>1){appendUndefined(index);parentElement.createTextChild(', ');}
if(!canShowGaps&&i!==index){parentElement.appendChild(this._renderDisplayName(property.name));parentElement.createTextChild(': ');}
parentElement.appendChild(this._renderPropertyPreviewOrAccessor([property]));lastNonEmptyArrayIndex=index;elementsAdded=true;}
if(canShowGaps&&arrayLength-lastNonEmptyArrayIndex>1){if(elementsAdded)
parentElement.createTextChild(', ');appendUndefined(arrayLength);}
for(let i=0;i<otherProperties.length;++i){if(elementsAdded)
parentElement.createTextChild(', ');const property=otherProperties[i];parentElement.appendChild(this._renderDisplayName(property.name));parentElement.createTextChild(': ');parentElement.appendChild(this._renderPropertyPreviewOrAccessor([property]));elementsAdded=true;}
function appendUndefined(index){const span=parentElement.createChild('span','object-value-undefined');const count=index-lastNonEmptyArrayIndex-1;span.textContent=count!==1?Common.UIString('empty × %d',count):Common.UIString('empty');elementsAdded=true;}}
_appendEntriesPreview(parentElement,preview){for(let i=0;i<preview.entries.length;++i){if(i>0)
parentElement.createTextChild(', ');const entry=preview.entries[i];if(entry.key){this.appendObjectPreview(parentElement,entry.key,true);parentElement.createTextChild(' => ');}
this.appendObjectPreview(parentElement,entry.value,true);}}
_renderDisplayName(name){const result=createElementWithClass('span','name');const needsQuotes=/^\s|\s$|^$|\n/.test(name);result.textContent=needsQuotes?'"'+name.replace(/\n/g,'\u21B5')+'"':name;return result;}
_renderPropertyPreviewOrAccessor(propertyPath){const property=propertyPath.peekLast();return this.renderPropertyPreview(property.type,(property.subtype),property.value);}
renderPropertyPreview(type,subtype,description){const span=createElementWithClass('span','object-value-'+(subtype||type));description=description||'';if(type==='accessor'){span.textContent='(...)';span.title=Common.UIString('The property is computed with a getter');return span;}
if(type==='function'){span.textContent='\u0192';return span;}
if(type==='object'&&subtype==='node'&&description){ObjectUI.RemoteObjectPreviewFormatter.createSpansForNodeTitle(span,description);return span;}
if(type==='string'){span.createTextChildren('"',description.replace(/\n/g,'\u21B5'),'"');return span;}
if(type==='object'&&!subtype){let preview=this._abbreviateFullQualifiedClassName(description);if(preview==='Object')
preview='{\u2026}';span.textContent=preview;span.title=description;return span;}
span.textContent=description;return span;}};ObjectUI.RemoteObjectPreviewFormatter._internalName={GeneratorStatus:'[[GeneratorStatus]]',PrimitiveValue:'[[PrimitiveValue]]',PromiseStatus:'[[PromiseStatus]]',PromiseValue:'[[PromiseValue]]'};ObjectUI.RemoteObjectPreviewFormatter.createSpansForNodeTitle=function(container,nodeTitle){const match=nodeTitle.match(/([^#.]+)(#[^.]+)?(\..*)?/);container.createChild('span','webkit-html-tag-name').textContent=match[1];if(match[2])
container.createChild('span','webkit-html-attribute-value').textContent=match[2];if(match[3])
container.createChild('span','webkit-html-attribute-name').textContent=match[3];};;Runtime.cachedResources["object_ui/customPreviewComponent.css"]="/*\n * Copyright (c) 2015 The Chromium Authors. All rights reserved.\n * Use of this source code is governed by a BSD-style license that can be\n * found in the LICENSE file.\n */\n\n.custom-expandable-section {\n    display: inline-flex;\n    flex-direction: column;\n}\n\n.custom-expand-icon {\n    -webkit-user-select: none;\n    opacity: 0.5;\n    margin-right: 4px;\n    margin-bottom: -2px;\n    background: black;\n}\n\n.custom-expandable-section-standard-section {\n    display: inline-flex;\n}\n/*# sourceURL=object_ui/customPreviewComponent.css */";Runtime.cachedResources["object_ui/objectPopover.css"]="/*\n * Copyright 2017 The Chromium Authors. All rights reserved.\n * Use of this source code is governed by a BSD-style license that can be\n * found in the LICENSE file.\n */\n\n.object-popover-content {\n    display: block;\n    position: relative;\n    overflow: hidden;\n    flex: 1 1 auto;\n}\n\n.object-popover-title {\n    text-overflow: ellipsis;\n    overflow: hidden;\n    white-space: nowrap;\n    font-weight: bold;\n    padding-left: 18px;\n    padding-bottom: 2px;\n}\n\n.object-popover-tree {\n    border-top: 1px solid rgb(184, 184, 184);\n    overflow: auto;\n    width: 100%;\n    height: calc(100% - 13px);\n}\n\n.object-popover-container {\n    display: inline-block;\n}\n\n.function-popover-title {\n    border-bottom: 1px solid #AAA;\n    margin-bottom: 3px;\n    padding-bottom: 2px;\n    display: flex;\n    justify-content: space-between;\n    align-items: center;\n}\n\n.function-popover-title .function-name {\n    font-weight: bold;\n}\n\n.function-title-link-container {\n    display: flex;\n    align-items: center;\n    position: relative;\n    margin-left: 10px;\n}\n\n.function-title-link-container .devtools-link {\n    white-space: nowrap;\n    overflow: hidden;\n}\n\n.function-location-step-into {\n    position: relative;\n    height: 14px;\n    transform: rotate(-90deg);\n}\n\n/*# sourceURL=object_ui/objectPopover.css */";Runtime.cachedResources["object_ui/objectPropertiesSection.css"]="/*\n * Copyright 2015 The Chromium Authors. All rights reserved.\n * Use of this source code is governed by a BSD-style license that can be\n * found in the LICENSE file.\n */\n\n.object-properties-section-separator {\n    flex-shrink: 0;\n    padding-right: 5px;\n}\n\n.object-properties-section-dimmed {\n    opacity: 0.6;\n}\n\n.object-properties-section {\n    padding: 0 0 0px 0px;\n    color: rgb(33,33,33) !important;\n    display: flex;\n    flex-direction: column;\n}\n\n.object-properties-section li {\n    -webkit-user-select: text;\n}\n\n.object-properties-section li::before {\n    top: -1px;\n}\n\n.object-properties-section li.editing-sub-part {\n    padding: 3px 12px 8px 6px;\n    margin: -1px -6px -8px -6px;\n    text-overflow: clip;\n}\n\n.object-properties-section li.editing {\n    margin-left: 10px;\n    text-overflow: clip;\n}\n\n.tree-outline ol.title-less-mode {\n    padding-left: 0px;\n}\n\n.object-properties-section .synthetic-property {\n    font-style: italic;\n}\n\n.object-properties-section-root-element {\n    display: flex;\n    flex-direction: row;\n}\n\n.object-properties-section .editable-div {\n    overflow: hidden;\n}\n\n/*# sourceURL=object_ui/objectPropertiesSection.css */";Runtime.cachedResources["object_ui/objectValue.css"]="/*\n * Copyright 2015 The Chromium Authors. All rights reserved.\n * Use of this source code is governed by a BSD-style license that can be\n * found in the LICENSE file.\n */\n\n.object-value-scientific-notation-exponent {\n    flex-shrink: 0;\n}\n\n.object-value-scientific-notation-mantissa {\n    overflow: hidden;\n    text-overflow: ellipsis;\n    flex-shrink: 1;\n    min-width: 1ex;\n}\n\n.object-value-scientific-notation-number {\n    display: flex !important;\n}\n\n.value.object-value-node:hover {\n    background-color: rgba(56, 121, 217, 0.1);\n}\n\n.object-value-function-prefix,\n.object-value-boolean {\n    color: rgb(13, 34, 170);\n}\n\n.object-value-function {\n    font-style: italic;\n}\n\n.object-value-function.linkified:hover {\n    background-color: rgba(0, 0, 0, 0.1);\n    cursor: pointer;\n}\n\n.object-value-number {\n    color: rgb(28, 0, 207);\n}\n\n.object-value-bigint {\n    color: rgb(0, 93, 0);\n}\n\n.object-value-string,\n.object-value-regexp,\n.object-value-symbol {\n    white-space: pre;\n    unicode-bidi: -webkit-isolate;\n    color: rgb(196, 26, 22);\n}\n\n.object-value-string-quote {\n    color: #222;\n}\n\n.object-value-node {\n    position: relative;\n    vertical-align: baseline;\n    color: rgb(48, 57, 66);\n    display: inline-block;\n}\n\n.object-value-null,\n.object-value-undefined {\n    color: rgb(128, 128, 128);\n}\n\n.object-value {\n    text-overflow: ellipsis;\n    overflow: hidden;\n    -webkit-user-select: text;\n}\n\n.object-value-calculate-value-button:hover {\n    text-decoration: underline;\n}\n\n.object-properties-section-custom-section {\n    display: inline-flex;\n    flex-direction: column;\n}\n\n.-theme-with-dark-background .object-value-number,\n:host-context(.-theme-with-dark-background) .object-value-number,\n.-theme-with-dark-background .object-value-boolean,\n:host-context(.-theme-with-dark-background) .object-value-boolean {\n    color: hsl(252, 100%, 75%);\n}\n\n.object-properties-section .object-description {\n    color: gray;\n}\n\n.value .object-properties-preview {\n    white-space: nowrap;\n}\n\n.name {\n    color: rgb(136, 19, 145);\n    flex-shrink: 0;\n}\n\n.object-properties-preview .name {\n    color: #565656;\n}\n\n/*# sourceURL=object_ui/objectValue.css */";