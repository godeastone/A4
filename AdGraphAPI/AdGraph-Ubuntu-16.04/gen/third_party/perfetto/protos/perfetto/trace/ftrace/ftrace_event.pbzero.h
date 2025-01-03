// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_EVENT_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/proto_field_descriptor.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class PrintFtraceEvent;
class SchedSwitchFtraceEvent;
class CpufreqInteractiveAlreadyFtraceEvent;
class CpufreqInteractiveBoostFtraceEvent;
class CpufreqInteractiveNotyetFtraceEvent;
class CpufreqInteractiveSetspeedFtraceEvent;
class CpufreqInteractiveTargetFtraceEvent;
class CpufreqInteractiveUnboostFtraceEvent;
class CpuFrequencyFtraceEvent;
class CpuFrequencyLimitsFtraceEvent;
class CpuIdleFtraceEvent;
class ClockEnableFtraceEvent;
class ClockDisableFtraceEvent;
class ClockSetRateFtraceEvent;
class SchedWakeupFtraceEvent;
class SchedBlockedReasonFtraceEvent;
class SchedCpuHotplugFtraceEvent;
class SyncWaitFtraceEvent;
class SchedWakingFtraceEvent;
class IpiEntryFtraceEvent;
class IpiExitFtraceEvent;
class IpiRaiseFtraceEvent;
class SoftirqEntryFtraceEvent;
class SoftirqExitFtraceEvent;
class SoftirqRaiseFtraceEvent;
class I2cReadFtraceEvent;
class I2cWriteFtraceEvent;
class I2cResultFtraceEvent;
class I2cReplyFtraceEvent;
class SmbusReadFtraceEvent;
class SmbusWriteFtraceEvent;
class RegulatorSetVoltageCompleteFtraceEvent;
class SmbusResultFtraceEvent;
class SmbusReplyFtraceEvent;
class CgroupAttachTaskFtraceEvent;
class LowmemoryKillFtraceEvent;
class IrqHandlerEntryFtraceEvent;
class IrqHandlerExitFtraceEvent;
class SyncPtFtraceEvent;
class SyncTimelineFtraceEvent;
class MdpCompareBwFtraceEvent;
class Ext4DaWriteBeginFtraceEvent;
class Ext4DaWriteEndFtraceEvent;
class Ext4SyncFileEnterFtraceEvent;
class Ext4SyncFileExitFtraceEvent;
class BlockRqIssueFtraceEvent;
class MmVmscanDirectReclaimBeginFtraceEvent;
class MmVmscanDirectReclaimEndFtraceEvent;
class MmVmscanKswapdWakeFtraceEvent;
class MmVmscanKswapdSleepFtraceEvent;
class BinderTransactionFtraceEvent;
class BinderTransactionReceivedFtraceEvent;
class BinderSetPriorityFtraceEvent;
class BinderLockFtraceEvent;
class BinderLockedFtraceEvent;
class BinderUnlockFtraceEvent;
class WorkqueueActivateWorkFtraceEvent;
class WorkqueueExecuteEndFtraceEvent;
class WorkqueueExecuteStartFtraceEvent;
class WorkqueueQueueWorkFtraceEvent;
class RegulatorDisableFtraceEvent;
class RegulatorDisableCompleteFtraceEvent;
class RegulatorEnableFtraceEvent;
class RegulatorEnableCompleteFtraceEvent;
class RegulatorEnableDelayFtraceEvent;
class RegulatorSetVoltageFtraceEvent;
class SchedWakeupNewFtraceEvent;
class BlockTouchBufferFtraceEvent;
class CgroupMkdirFtraceEvent;
class CgroupRemountFtraceEvent;
class CgroupRmdirFtraceEvent;
class CgroupTransferTasksFtraceEvent;
class CgroupDestroyRootFtraceEvent;
class CgroupReleaseFtraceEvent;
class CgroupRenameFtraceEvent;
class CgroupSetupRootFtraceEvent;
class MdpCmdKickoffFtraceEvent;
class MdpCommitFtraceEvent;
class MdpPerfSetOtFtraceEvent;
class MdpSsppChangeFtraceEvent;
class TracingMarkWriteFtraceEvent;
class MdpCmdPingpongDoneFtraceEvent;
class Ext4ExtMapBlocksExitFtraceEvent;
class MdpPerfSetPanicLutsFtraceEvent;
class MdpSsppSetFtraceEvent;
class MdpCmdReadptrDoneFtraceEvent;
class MdpMisrCrcFtraceEvent;
class MdpPerfSetQosLutsFtraceEvent;
class MdpTraceCounterFtraceEvent;
class MdpCmdReleaseBwFtraceEvent;
class MdpMixerUpdateFtraceEvent;
class MdpPerfSetWmLevelsFtraceEvent;
class MdpVideoUnderrunDoneFtraceEvent;
class MdpCmdWaitPingpongFtraceEvent;
class MdpPerfPrefillCalcFtraceEvent;
class MdpPerfUpdateBusFtraceEvent;
class RotatorBwAoAsContextFtraceEvent;
class MmFilemapAddToPageCacheFtraceEvent;
class MmFilemapDeleteFromPageCacheFtraceEvent;
class MmCompactionBeginFtraceEvent;
class MmCompactionDeferCompactionFtraceEvent;
class MmCompactionDeferredFtraceEvent;
class MmCompactionDeferResetFtraceEvent;
class MmCompactionEndFtraceEvent;
class MmCompactionFinishedFtraceEvent;
class MmCompactionIsolateFreepagesFtraceEvent;
class MmCompactionIsolateMigratepagesFtraceEvent;
class MmCompactionKcompactdSleepFtraceEvent;
class MmCompactionKcompactdWakeFtraceEvent;
class MmCompactionMigratepagesFtraceEvent;
class MmCompactionSuitableFtraceEvent;
class MmCompactionTryToCompactPagesFtraceEvent;
class MmCompactionWakeupKcompactdFtraceEvent;
class SuspendResumeFtraceEvent;
class Ext4MballocDiscardFtraceEvent;
class Ext4MballocFreeFtraceEvent;
class BlockBioBackmergeFtraceEvent;
class BlockBioBounceFtraceEvent;
class BlockBioCompleteFtraceEvent;
class BlockBioFrontmergeFtraceEvent;
class BlockBioQueueFtraceEvent;
class BlockBioRemapFtraceEvent;
class BlockDirtyBufferFtraceEvent;
class BlockGetrqFtraceEvent;
class BlockPlugFtraceEvent;
class BlockRqAbortFtraceEvent;
class BlockRqCompleteFtraceEvent;
class BlockRqInsertFtraceEvent;
class BlockRqRemapFtraceEvent;
class BlockRqRequeueFtraceEvent;
class BlockSleeprqFtraceEvent;
class BlockSplitFtraceEvent;
class F2fsVmPageMkwriteFtraceEvent;
class BlockUnplugFtraceEvent;
class Ext4AllocDaBlocksFtraceEvent;
class Ext4AllocateBlocksFtraceEvent;
class Ext4AllocateInodeFtraceEvent;
class Ext4BeginOrderedTruncateFtraceEvent;
class Ext4CollapseRangeFtraceEvent;
class Ext4DaReleaseSpaceFtraceEvent;
class Ext4DaReserveSpaceFtraceEvent;
class Ext4DaUpdateReserveSpaceFtraceEvent;
class F2fsTruncateNodesExitFtraceEvent;
class Ext4DaWritePagesFtraceEvent;
class Ext4DaWritePagesExtentFtraceEvent;
class Ext4DirectIOEnterFtraceEvent;
class Ext4DirectIOExitFtraceEvent;
class Ext4DiscardBlocksFtraceEvent;
class Ext4DiscardPreallocationsFtraceEvent;
class Ext4DropInodeFtraceEvent;
class Ext4EsCacheExtentFtraceEvent;
class Ext4EsFindDelayedExtentRangeEnterFtraceEvent;
class Ext4EsFindDelayedExtentRangeExitFtraceEvent;
class Ext4EsInsertExtentFtraceEvent;
class Ext4EsLookupExtentEnterFtraceEvent;
class Ext4EsLookupExtentExitFtraceEvent;
class Ext4EsRemoveExtentFtraceEvent;
class Ext4EsShrinkFtraceEvent;
class Ext4EsShrinkCountFtraceEvent;
class Ext4EsShrinkScanEnterFtraceEvent;
class Ext4EsShrinkScanExitFtraceEvent;
class Ext4EvictInodeFtraceEvent;
class Ext4ExtConvertToInitializedEnterFtraceEvent;
class Ext4ExtConvertToInitializedFastpathFtraceEvent;
class Ext4ExtHandleUnwrittenExtentsFtraceEvent;
class Ext4ExtInCacheFtraceEvent;
class Ext4ExtLoadExtentFtraceEvent;
class Ext4ExtMapBlocksEnterFtraceEvent;
class Ext4ExtPutInCacheFtraceEvent;
class Ext4ExtRemoveSpaceFtraceEvent;
class Ext4ExtRemoveSpaceDoneFtraceEvent;
class Ext4ExtRmIdxFtraceEvent;
class Ext4ExtRmLeafFtraceEvent;
class Ext4ExtShowExtentFtraceEvent;
class Ext4FallocateEnterFtraceEvent;
class Ext4FallocateExitFtraceEvent;
class Ext4FindDelallocRangeFtraceEvent;
class Ext4ForgetFtraceEvent;
class Ext4FreeBlocksFtraceEvent;
class Ext4FreeInodeFtraceEvent;
class Ext4GetImpliedClusterAllocExitFtraceEvent;
class Ext4GetReservedClusterAllocFtraceEvent;
class Ext4IndMapBlocksEnterFtraceEvent;
class Ext4IndMapBlocksExitFtraceEvent;
class Ext4InsertRangeFtraceEvent;
class Ext4InvalidatepageFtraceEvent;
class Ext4JournalStartFtraceEvent;
class Ext4JournalStartReservedFtraceEvent;
class Ext4JournalledInvalidatepageFtraceEvent;
class Ext4JournalledWriteEndFtraceEvent;
class Ext4LoadInodeFtraceEvent;
class Ext4LoadInodeBitmapFtraceEvent;
class Ext4MarkInodeDirtyFtraceEvent;
class Ext4MbBitmapLoadFtraceEvent;
class Ext4MbBuddyBitmapLoadFtraceEvent;
class Ext4MbDiscardPreallocationsFtraceEvent;
class Ext4MbNewGroupPaFtraceEvent;
class Ext4MbNewInodePaFtraceEvent;
class Ext4MbReleaseGroupPaFtraceEvent;
class Ext4MbReleaseInodePaFtraceEvent;
class Ext4MballocAllocFtraceEvent;
class Ext4MballocPreallocFtraceEvent;
class Ext4OtherInodeUpdateTimeFtraceEvent;
class Ext4PunchHoleFtraceEvent;
class Ext4ReadBlockBitmapLoadFtraceEvent;
class Ext4ReadpageFtraceEvent;
class Ext4ReleasepageFtraceEvent;
class Ext4RemoveBlocksFtraceEvent;
class Ext4RequestBlocksFtraceEvent;
class Ext4RequestInodeFtraceEvent;
class Ext4SyncFsFtraceEvent;
class Ext4TrimAllFreeFtraceEvent;
class Ext4TrimExtentFtraceEvent;
class Ext4TruncateEnterFtraceEvent;
class Ext4TruncateExitFtraceEvent;
class Ext4UnlinkEnterFtraceEvent;
class Ext4UnlinkExitFtraceEvent;
class Ext4WriteBeginFtraceEvent;
class Ext4WriteEndFtraceEvent;
class Ext4WritepageFtraceEvent;
class Ext4WritepagesFtraceEvent;
class Ext4WritepagesResultFtraceEvent;
class Ext4ZeroRangeFtraceEvent;
class TaskNewtaskFtraceEvent;
class TaskRenameFtraceEvent;
class SchedProcessExecFtraceEvent;
class SchedProcessExitFtraceEvent;
class SchedProcessForkFtraceEvent;
class SchedProcessFreeFtraceEvent;
class SchedProcessHangFtraceEvent;
class SchedProcessWaitFtraceEvent;
class F2fsDoSubmitBioFtraceEvent;
class F2fsEvictInodeFtraceEvent;
class F2fsFallocateFtraceEvent;
class F2fsGetDataBlockFtraceEvent;
class F2fsGetVictimFtraceEvent;
class F2fsIgetFtraceEvent;
class F2fsIgetExitFtraceEvent;
class F2fsNewInodeFtraceEvent;
class F2fsReadpageFtraceEvent;
class F2fsReserveNewBlockFtraceEvent;
class F2fsSetPageDirtyFtraceEvent;
class F2fsSubmitWritePageFtraceEvent;
class F2fsSyncFileEnterFtraceEvent;
class F2fsSyncFileExitFtraceEvent;
class F2fsSyncFsFtraceEvent;
class F2fsTruncateFtraceEvent;
class F2fsTruncateBlocksEnterFtraceEvent;
class F2fsTruncateBlocksExitFtraceEvent;
class F2fsTruncateDataBlocksRangeFtraceEvent;
class F2fsTruncateInodeBlocksEnterFtraceEvent;
class F2fsTruncateInodeBlocksExitFtraceEvent;
class F2fsTruncateNodeFtraceEvent;
class F2fsTruncateNodesEnterFtraceEvent;
class F2fsTruncatePartialNodesFtraceEvent;
class F2fsUnlinkEnterFtraceEvent;
class F2fsUnlinkExitFtraceEvent;
class F2fsWriteBeginFtraceEvent;
class F2fsWriteCheckpointFtraceEvent;
class F2fsWriteEndFtraceEvent;

class FtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kTimestampFieldNumber = 1,
    kPidFieldNumber = 2,
    kPrintFieldNumber = 3,
    kSchedSwitchFieldNumber = 4,
    kCpufreqInteractiveAlreadyFieldNumber = 5,
    kCpufreqInteractiveBoostFieldNumber = 6,
    kCpufreqInteractiveNotyetFieldNumber = 7,
    kCpufreqInteractiveSetspeedFieldNumber = 8,
    kCpufreqInteractiveTargetFieldNumber = 9,
    kCpufreqInteractiveUnboostFieldNumber = 10,
    kCpuFrequencyFieldNumber = 11,
    kCpuFrequencyLimitsFieldNumber = 12,
    kCpuIdleFieldNumber = 13,
    kClockEnableFieldNumber = 14,
    kClockDisableFieldNumber = 15,
    kClockSetRateFieldNumber = 16,
    kSchedWakeupFieldNumber = 17,
    kSchedBlockedReasonFieldNumber = 18,
    kSchedCpuHotplugFieldNumber = 19,
    kSchedWakingFieldNumber = 20,
    kIpiEntryFieldNumber = 21,
    kIpiExitFieldNumber = 22,
    kIpiRaiseFieldNumber = 23,
    kSoftirqEntryFieldNumber = 24,
    kSoftirqExitFieldNumber = 25,
    kSoftirqRaiseFieldNumber = 26,
    kI2cReadFieldNumber = 27,
    kI2cWriteFieldNumber = 28,
    kI2cResultFieldNumber = 29,
    kI2cReplyFieldNumber = 30,
    kSmbusReadFieldNumber = 31,
    kSmbusWriteFieldNumber = 32,
    kSmbusResultFieldNumber = 33,
    kSmbusReplyFieldNumber = 34,
    kLowmemoryKillFieldNumber = 35,
    kIrqHandlerEntryFieldNumber = 36,
    kIrqHandlerExitFieldNumber = 37,
    kSyncPtFieldNumber = 38,
    kSyncTimelineFieldNumber = 39,
    kSyncWaitFieldNumber = 40,
    kExt4DaWriteBeginFieldNumber = 41,
    kExt4DaWriteEndFieldNumber = 42,
    kExt4SyncFileEnterFieldNumber = 43,
    kExt4SyncFileExitFieldNumber = 44,
    kBlockRqIssueFieldNumber = 45,
    kMmVmscanDirectReclaimBeginFieldNumber = 46,
    kMmVmscanDirectReclaimEndFieldNumber = 47,
    kMmVmscanKswapdWakeFieldNumber = 48,
    kMmVmscanKswapdSleepFieldNumber = 49,
    kBinderTransactionFieldNumber = 50,
    kBinderTransactionReceivedFieldNumber = 51,
    kBinderSetPriorityFieldNumber = 52,
    kBinderLockFieldNumber = 53,
    kBinderLockedFieldNumber = 54,
    kBinderUnlockFieldNumber = 55,
    kWorkqueueActivateWorkFieldNumber = 56,
    kWorkqueueExecuteEndFieldNumber = 57,
    kWorkqueueExecuteStartFieldNumber = 58,
    kWorkqueueQueueWorkFieldNumber = 59,
    kRegulatorDisableFieldNumber = 60,
    kRegulatorDisableCompleteFieldNumber = 61,
    kRegulatorEnableFieldNumber = 62,
    kRegulatorEnableCompleteFieldNumber = 63,
    kRegulatorEnableDelayFieldNumber = 64,
    kRegulatorSetVoltageFieldNumber = 65,
    kRegulatorSetVoltageCompleteFieldNumber = 66,
    kCgroupAttachTaskFieldNumber = 67,
    kCgroupMkdirFieldNumber = 68,
    kCgroupRemountFieldNumber = 69,
    kCgroupRmdirFieldNumber = 70,
    kCgroupTransferTasksFieldNumber = 71,
    kCgroupDestroyRootFieldNumber = 72,
    kCgroupReleaseFieldNumber = 73,
    kCgroupRenameFieldNumber = 74,
    kCgroupSetupRootFieldNumber = 75,
    kMdpCmdKickoffFieldNumber = 76,
    kMdpCommitFieldNumber = 77,
    kMdpPerfSetOtFieldNumber = 78,
    kMdpSsppChangeFieldNumber = 79,
    kTracingMarkWriteFieldNumber = 80,
    kMdpCmdPingpongDoneFieldNumber = 81,
    kMdpCompareBwFieldNumber = 82,
    kMdpPerfSetPanicLutsFieldNumber = 83,
    kMdpSsppSetFieldNumber = 84,
    kMdpCmdReadptrDoneFieldNumber = 85,
    kMdpMisrCrcFieldNumber = 86,
    kMdpPerfSetQosLutsFieldNumber = 87,
    kMdpTraceCounterFieldNumber = 88,
    kMdpCmdReleaseBwFieldNumber = 89,
    kMdpMixerUpdateFieldNumber = 90,
    kMdpPerfSetWmLevelsFieldNumber = 91,
    kMdpVideoUnderrunDoneFieldNumber = 92,
    kMdpCmdWaitPingpongFieldNumber = 93,
    kMdpPerfPrefillCalcFieldNumber = 94,
    kMdpPerfUpdateBusFieldNumber = 95,
    kRotatorBwAoAsContextFieldNumber = 96,
    kMmFilemapAddToPageCacheFieldNumber = 97,
    kMmFilemapDeleteFromPageCacheFieldNumber = 98,
    kMmCompactionBeginFieldNumber = 99,
    kMmCompactionDeferCompactionFieldNumber = 100,
    kMmCompactionDeferredFieldNumber = 101,
    kMmCompactionDeferResetFieldNumber = 102,
    kMmCompactionEndFieldNumber = 103,
    kMmCompactionFinishedFieldNumber = 104,
    kMmCompactionIsolateFreepagesFieldNumber = 105,
    kMmCompactionIsolateMigratepagesFieldNumber = 106,
    kMmCompactionKcompactdSleepFieldNumber = 107,
    kMmCompactionKcompactdWakeFieldNumber = 108,
    kMmCompactionMigratepagesFieldNumber = 109,
    kMmCompactionSuitableFieldNumber = 110,
    kMmCompactionTryToCompactPagesFieldNumber = 111,
    kMmCompactionWakeupKcompactdFieldNumber = 112,
    kSuspendResumeFieldNumber = 113,
    kSchedWakeupNewFieldNumber = 114,
    kBlockBioBackmergeFieldNumber = 115,
    kBlockBioBounceFieldNumber = 116,
    kBlockBioCompleteFieldNumber = 117,
    kBlockBioFrontmergeFieldNumber = 118,
    kBlockBioQueueFieldNumber = 119,
    kBlockBioRemapFieldNumber = 120,
    kBlockDirtyBufferFieldNumber = 121,
    kBlockGetrqFieldNumber = 122,
    kBlockPlugFieldNumber = 123,
    kBlockRqAbortFieldNumber = 124,
    kBlockRqCompleteFieldNumber = 125,
    kBlockRqInsertFieldNumber = 126,
    kBlockRqRemapFieldNumber = 128,
    kBlockRqRequeueFieldNumber = 129,
    kBlockSleeprqFieldNumber = 130,
    kBlockSplitFieldNumber = 131,
    kBlockTouchBufferFieldNumber = 132,
    kBlockUnplugFieldNumber = 133,
    kExt4AllocDaBlocksFieldNumber = 134,
    kExt4AllocateBlocksFieldNumber = 135,
    kExt4AllocateInodeFieldNumber = 136,
    kExt4BeginOrderedTruncateFieldNumber = 137,
    kExt4CollapseRangeFieldNumber = 138,
    kExt4DaReleaseSpaceFieldNumber = 139,
    kExt4DaReserveSpaceFieldNumber = 140,
    kExt4DaUpdateReserveSpaceFieldNumber = 141,
    kExt4DaWritePagesFieldNumber = 142,
    kExt4DaWritePagesExtentFieldNumber = 143,
    kExt4DirectIOEnterFieldNumber = 144,
    kExt4DirectIOExitFieldNumber = 145,
    kExt4DiscardBlocksFieldNumber = 146,
    kExt4DiscardPreallocationsFieldNumber = 147,
    kExt4DropInodeFieldNumber = 148,
    kExt4EsCacheExtentFieldNumber = 149,
    kExt4EsFindDelayedExtentRangeEnterFieldNumber = 150,
    kExt4EsFindDelayedExtentRangeExitFieldNumber = 151,
    kExt4EsInsertExtentFieldNumber = 152,
    kExt4EsLookupExtentEnterFieldNumber = 153,
    kExt4EsLookupExtentExitFieldNumber = 154,
    kExt4EsRemoveExtentFieldNumber = 155,
    kExt4EsShrinkFieldNumber = 156,
    kExt4EsShrinkCountFieldNumber = 157,
    kExt4EsShrinkScanEnterFieldNumber = 158,
    kExt4EsShrinkScanExitFieldNumber = 159,
    kExt4EvictInodeFieldNumber = 160,
    kExt4ExtConvertToInitializedEnterFieldNumber = 161,
    kExt4ExtConvertToInitializedFastpathFieldNumber = 162,
    kExt4ExtHandleUnwrittenExtentsFieldNumber = 163,
    kExt4ExtInCacheFieldNumber = 164,
    kExt4ExtLoadExtentFieldNumber = 165,
    kExt4ExtMapBlocksEnterFieldNumber = 166,
    kExt4ExtMapBlocksExitFieldNumber = 167,
    kExt4ExtPutInCacheFieldNumber = 168,
    kExt4ExtRemoveSpaceFieldNumber = 169,
    kExt4ExtRemoveSpaceDoneFieldNumber = 170,
    kExt4ExtRmIdxFieldNumber = 171,
    kExt4ExtRmLeafFieldNumber = 172,
    kExt4ExtShowExtentFieldNumber = 173,
    kExt4FallocateEnterFieldNumber = 174,
    kExt4FallocateExitFieldNumber = 175,
    kExt4FindDelallocRangeFieldNumber = 176,
    kExt4ForgetFieldNumber = 177,
    kExt4FreeBlocksFieldNumber = 178,
    kExt4FreeInodeFieldNumber = 179,
    kExt4GetImpliedClusterAllocExitFieldNumber = 180,
    kExt4GetReservedClusterAllocFieldNumber = 181,
    kExt4IndMapBlocksEnterFieldNumber = 182,
    kExt4IndMapBlocksExitFieldNumber = 183,
    kExt4InsertRangeFieldNumber = 184,
    kExt4InvalidatepageFieldNumber = 185,
    kExt4JournalStartFieldNumber = 186,
    kExt4JournalStartReservedFieldNumber = 187,
    kExt4JournalledInvalidatepageFieldNumber = 188,
    kExt4JournalledWriteEndFieldNumber = 189,
    kExt4LoadInodeFieldNumber = 190,
    kExt4LoadInodeBitmapFieldNumber = 191,
    kExt4MarkInodeDirtyFieldNumber = 192,
    kExt4MbBitmapLoadFieldNumber = 193,
    kExt4MbBuddyBitmapLoadFieldNumber = 194,
    kExt4MbDiscardPreallocationsFieldNumber = 195,
    kExt4MbNewGroupPaFieldNumber = 196,
    kExt4MbNewInodePaFieldNumber = 197,
    kExt4MbReleaseGroupPaFieldNumber = 198,
    kExt4MbReleaseInodePaFieldNumber = 199,
    kExt4MballocAllocFieldNumber = 200,
    kExt4MballocDiscardFieldNumber = 201,
    kExt4MballocFreeFieldNumber = 202,
    kExt4MballocPreallocFieldNumber = 203,
    kExt4OtherInodeUpdateTimeFieldNumber = 204,
    kExt4PunchHoleFieldNumber = 205,
    kExt4ReadBlockBitmapLoadFieldNumber = 206,
    kExt4ReadpageFieldNumber = 207,
    kExt4ReleasepageFieldNumber = 208,
    kExt4RemoveBlocksFieldNumber = 209,
    kExt4RequestBlocksFieldNumber = 210,
    kExt4RequestInodeFieldNumber = 211,
    kExt4SyncFsFieldNumber = 212,
    kExt4TrimAllFreeFieldNumber = 213,
    kExt4TrimExtentFieldNumber = 214,
    kExt4TruncateEnterFieldNumber = 215,
    kExt4TruncateExitFieldNumber = 216,
    kExt4UnlinkEnterFieldNumber = 217,
    kExt4UnlinkExitFieldNumber = 218,
    kExt4WriteBeginFieldNumber = 219,
    kExt4WriteEndFieldNumber = 230,
    kExt4WritepageFieldNumber = 231,
    kExt4WritepagesFieldNumber = 232,
    kExt4WritepagesResultFieldNumber = 233,
    kExt4ZeroRangeFieldNumber = 234,
    kTaskNewtaskFieldNumber = 235,
    kTaskRenameFieldNumber = 236,
    kSchedProcessExecFieldNumber = 237,
    kSchedProcessExitFieldNumber = 238,
    kSchedProcessForkFieldNumber = 239,
    kSchedProcessFreeFieldNumber = 240,
    kSchedProcessHangFieldNumber = 241,
    kSchedProcessWaitFieldNumber = 242,
    kF2fsDoSubmitBioFieldNumber = 243,
    kF2fsEvictInodeFieldNumber = 244,
    kF2fsFallocateFieldNumber = 245,
    kF2fsGetDataBlockFieldNumber = 246,
    kF2fsGetVictimFieldNumber = 247,
    kF2fsIgetFieldNumber = 248,
    kF2fsIgetExitFieldNumber = 249,
    kF2fsNewInodeFieldNumber = 250,
    kF2fsReadpageFieldNumber = 251,
    kF2fsReserveNewBlockFieldNumber = 252,
    kF2fsSetPageDirtyFieldNumber = 253,
    kF2fsSubmitWritePageFieldNumber = 254,
    kF2fsSyncFileEnterFieldNumber = 255,
    kF2fsSyncFileExitFieldNumber = 256,
    kF2fsSyncFsFieldNumber = 257,
    kF2fsTruncateFieldNumber = 258,
    kF2fsTruncateBlocksEnterFieldNumber = 259,
    kF2fsTruncateBlocksExitFieldNumber = 260,
    kF2fsTruncateDataBlocksRangeFieldNumber = 261,
    kF2fsTruncateInodeBlocksEnterFieldNumber = 262,
    kF2fsTruncateInodeBlocksExitFieldNumber = 263,
    kF2fsTruncateNodeFieldNumber = 264,
    kF2fsTruncateNodesEnterFieldNumber = 265,
    kF2fsTruncateNodesExitFieldNumber = 266,
    kF2fsTruncatePartialNodesFieldNumber = 267,
    kF2fsUnlinkEnterFieldNumber = 268,
    kF2fsUnlinkExitFieldNumber = 269,
    kF2fsVmPageMkwriteFieldNumber = 270,
    kF2fsWriteBeginFieldNumber = 271,
    kF2fsWriteCheckpointFieldNumber = 272,
    kF2fsWriteEndFieldNumber = 273,
  };
  static const ::protozero::ProtoFieldDescriptor* GetFieldDescriptor(uint32_t field_id);
  void set_timestamp(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_pid(uint32_t value) {
    AppendVarInt(2, value);
  }
  PrintFtraceEvent* set_print();
  SchedSwitchFtraceEvent* set_sched_switch();
  CpufreqInteractiveAlreadyFtraceEvent* set_cpufreq_interactive_already();
  CpufreqInteractiveBoostFtraceEvent* set_cpufreq_interactive_boost();
  CpufreqInteractiveNotyetFtraceEvent* set_cpufreq_interactive_notyet();
  CpufreqInteractiveSetspeedFtraceEvent* set_cpufreq_interactive_setspeed();
  CpufreqInteractiveTargetFtraceEvent* set_cpufreq_interactive_target();
  CpufreqInteractiveUnboostFtraceEvent* set_cpufreq_interactive_unboost();
  CpuFrequencyFtraceEvent* set_cpu_frequency();
  CpuFrequencyLimitsFtraceEvent* set_cpu_frequency_limits();
  CpuIdleFtraceEvent* set_cpu_idle();
  ClockEnableFtraceEvent* set_clock_enable();
  ClockDisableFtraceEvent* set_clock_disable();
  ClockSetRateFtraceEvent* set_clock_set_rate();
  SchedWakeupFtraceEvent* set_sched_wakeup();
  SchedBlockedReasonFtraceEvent* set_sched_blocked_reason();
  SchedCpuHotplugFtraceEvent* set_sched_cpu_hotplug();
  SchedWakingFtraceEvent* set_sched_waking();
  IpiEntryFtraceEvent* set_ipi_entry();
  IpiExitFtraceEvent* set_ipi_exit();
  IpiRaiseFtraceEvent* set_ipi_raise();
  SoftirqEntryFtraceEvent* set_softirq_entry();
  SoftirqExitFtraceEvent* set_softirq_exit();
  SoftirqRaiseFtraceEvent* set_softirq_raise();
  I2cReadFtraceEvent* set_i2c_read();
  I2cWriteFtraceEvent* set_i2c_write();
  I2cResultFtraceEvent* set_i2c_result();
  I2cReplyFtraceEvent* set_i2c_reply();
  SmbusReadFtraceEvent* set_smbus_read();
  SmbusWriteFtraceEvent* set_smbus_write();
  SmbusResultFtraceEvent* set_smbus_result();
  SmbusReplyFtraceEvent* set_smbus_reply();
  LowmemoryKillFtraceEvent* set_lowmemory_kill();
  IrqHandlerEntryFtraceEvent* set_irq_handler_entry();
  IrqHandlerExitFtraceEvent* set_irq_handler_exit();
  SyncPtFtraceEvent* set_sync_pt();
  SyncTimelineFtraceEvent* set_sync_timeline();
  SyncWaitFtraceEvent* set_sync_wait();
  Ext4DaWriteBeginFtraceEvent* set_ext4_da_write_begin();
  Ext4DaWriteEndFtraceEvent* set_ext4_da_write_end();
  Ext4SyncFileEnterFtraceEvent* set_ext4_sync_file_enter();
  Ext4SyncFileExitFtraceEvent* set_ext4_sync_file_exit();
  BlockRqIssueFtraceEvent* set_block_rq_issue();
  MmVmscanDirectReclaimBeginFtraceEvent* set_mm_vmscan_direct_reclaim_begin();
  MmVmscanDirectReclaimEndFtraceEvent* set_mm_vmscan_direct_reclaim_end();
  MmVmscanKswapdWakeFtraceEvent* set_mm_vmscan_kswapd_wake();
  MmVmscanKswapdSleepFtraceEvent* set_mm_vmscan_kswapd_sleep();
  BinderTransactionFtraceEvent* set_binder_transaction();
  BinderTransactionReceivedFtraceEvent* set_binder_transaction_received();
  BinderSetPriorityFtraceEvent* set_binder_set_priority();
  BinderLockFtraceEvent* set_binder_lock();
  BinderLockedFtraceEvent* set_binder_locked();
  BinderUnlockFtraceEvent* set_binder_unlock();
  WorkqueueActivateWorkFtraceEvent* set_workqueue_activate_work();
  WorkqueueExecuteEndFtraceEvent* set_workqueue_execute_end();
  WorkqueueExecuteStartFtraceEvent* set_workqueue_execute_start();
  WorkqueueQueueWorkFtraceEvent* set_workqueue_queue_work();
  RegulatorDisableFtraceEvent* set_regulator_disable();
  RegulatorDisableCompleteFtraceEvent* set_regulator_disable_complete();
  RegulatorEnableFtraceEvent* set_regulator_enable();
  RegulatorEnableCompleteFtraceEvent* set_regulator_enable_complete();
  RegulatorEnableDelayFtraceEvent* set_regulator_enable_delay();
  RegulatorSetVoltageFtraceEvent* set_regulator_set_voltage();
  RegulatorSetVoltageCompleteFtraceEvent* set_regulator_set_voltage_complete();
  CgroupAttachTaskFtraceEvent* set_cgroup_attach_task();
  CgroupMkdirFtraceEvent* set_cgroup_mkdir();
  CgroupRemountFtraceEvent* set_cgroup_remount();
  CgroupRmdirFtraceEvent* set_cgroup_rmdir();
  CgroupTransferTasksFtraceEvent* set_cgroup_transfer_tasks();
  CgroupDestroyRootFtraceEvent* set_cgroup_destroy_root();
  CgroupReleaseFtraceEvent* set_cgroup_release();
  CgroupRenameFtraceEvent* set_cgroup_rename();
  CgroupSetupRootFtraceEvent* set_cgroup_setup_root();
  MdpCmdKickoffFtraceEvent* set_mdp_cmd_kickoff();
  MdpCommitFtraceEvent* set_mdp_commit();
  MdpPerfSetOtFtraceEvent* set_mdp_perf_set_ot();
  MdpSsppChangeFtraceEvent* set_mdp_sspp_change();
  TracingMarkWriteFtraceEvent* set_tracing_mark_write();
  MdpCmdPingpongDoneFtraceEvent* set_mdp_cmd_pingpong_done();
  MdpCompareBwFtraceEvent* set_mdp_compare_bw();
  MdpPerfSetPanicLutsFtraceEvent* set_mdp_perf_set_panic_luts();
  MdpSsppSetFtraceEvent* set_mdp_sspp_set();
  MdpCmdReadptrDoneFtraceEvent* set_mdp_cmd_readptr_done();
  MdpMisrCrcFtraceEvent* set_mdp_misr_crc();
  MdpPerfSetQosLutsFtraceEvent* set_mdp_perf_set_qos_luts();
  MdpTraceCounterFtraceEvent* set_mdp_trace_counter();
  MdpCmdReleaseBwFtraceEvent* set_mdp_cmd_release_bw();
  MdpMixerUpdateFtraceEvent* set_mdp_mixer_update();
  MdpPerfSetWmLevelsFtraceEvent* set_mdp_perf_set_wm_levels();
  MdpVideoUnderrunDoneFtraceEvent* set_mdp_video_underrun_done();
  MdpCmdWaitPingpongFtraceEvent* set_mdp_cmd_wait_pingpong();
  MdpPerfPrefillCalcFtraceEvent* set_mdp_perf_prefill_calc();
  MdpPerfUpdateBusFtraceEvent* set_mdp_perf_update_bus();
  RotatorBwAoAsContextFtraceEvent* set_rotator_bw_ao_as_context();
  MmFilemapAddToPageCacheFtraceEvent* set_mm_filemap_add_to_page_cache();
  MmFilemapDeleteFromPageCacheFtraceEvent* set_mm_filemap_delete_from_page_cache();
  MmCompactionBeginFtraceEvent* set_mm_compaction_begin();
  MmCompactionDeferCompactionFtraceEvent* set_mm_compaction_defer_compaction();
  MmCompactionDeferredFtraceEvent* set_mm_compaction_deferred();
  MmCompactionDeferResetFtraceEvent* set_mm_compaction_defer_reset();
  MmCompactionEndFtraceEvent* set_mm_compaction_end();
  MmCompactionFinishedFtraceEvent* set_mm_compaction_finished();
  MmCompactionIsolateFreepagesFtraceEvent* set_mm_compaction_isolate_freepages();
  MmCompactionIsolateMigratepagesFtraceEvent* set_mm_compaction_isolate_migratepages();
  MmCompactionKcompactdSleepFtraceEvent* set_mm_compaction_kcompactd_sleep();
  MmCompactionKcompactdWakeFtraceEvent* set_mm_compaction_kcompactd_wake();
  MmCompactionMigratepagesFtraceEvent* set_mm_compaction_migratepages();
  MmCompactionSuitableFtraceEvent* set_mm_compaction_suitable();
  MmCompactionTryToCompactPagesFtraceEvent* set_mm_compaction_try_to_compact_pages();
  MmCompactionWakeupKcompactdFtraceEvent* set_mm_compaction_wakeup_kcompactd();
  SuspendResumeFtraceEvent* set_suspend_resume();
  SchedWakeupNewFtraceEvent* set_sched_wakeup_new();
  BlockBioBackmergeFtraceEvent* set_block_bio_backmerge();
  BlockBioBounceFtraceEvent* set_block_bio_bounce();
  BlockBioCompleteFtraceEvent* set_block_bio_complete();
  BlockBioFrontmergeFtraceEvent* set_block_bio_frontmerge();
  BlockBioQueueFtraceEvent* set_block_bio_queue();
  BlockBioRemapFtraceEvent* set_block_bio_remap();
  BlockDirtyBufferFtraceEvent* set_block_dirty_buffer();
  BlockGetrqFtraceEvent* set_block_getrq();
  BlockPlugFtraceEvent* set_block_plug();
  BlockRqAbortFtraceEvent* set_block_rq_abort();
  BlockRqCompleteFtraceEvent* set_block_rq_complete();
  BlockRqInsertFtraceEvent* set_block_rq_insert();
  BlockRqRemapFtraceEvent* set_block_rq_remap();
  BlockRqRequeueFtraceEvent* set_block_rq_requeue();
  BlockSleeprqFtraceEvent* set_block_sleeprq();
  BlockSplitFtraceEvent* set_block_split();
  BlockTouchBufferFtraceEvent* set_block_touch_buffer();
  BlockUnplugFtraceEvent* set_block_unplug();
  Ext4AllocDaBlocksFtraceEvent* set_ext4_alloc_da_blocks();
  Ext4AllocateBlocksFtraceEvent* set_ext4_allocate_blocks();
  Ext4AllocateInodeFtraceEvent* set_ext4_allocate_inode();
  Ext4BeginOrderedTruncateFtraceEvent* set_ext4_begin_ordered_truncate();
  Ext4CollapseRangeFtraceEvent* set_ext4_collapse_range();
  Ext4DaReleaseSpaceFtraceEvent* set_ext4_da_release_space();
  Ext4DaReserveSpaceFtraceEvent* set_ext4_da_reserve_space();
  Ext4DaUpdateReserveSpaceFtraceEvent* set_ext4_da_update_reserve_space();
  Ext4DaWritePagesFtraceEvent* set_ext4_da_write_pages();
  Ext4DaWritePagesExtentFtraceEvent* set_ext4_da_write_pages_extent();
  Ext4DirectIOEnterFtraceEvent* set_ext4_direct_IO_enter();
  Ext4DirectIOExitFtraceEvent* set_ext4_direct_IO_exit();
  Ext4DiscardBlocksFtraceEvent* set_ext4_discard_blocks();
  Ext4DiscardPreallocationsFtraceEvent* set_ext4_discard_preallocations();
  Ext4DropInodeFtraceEvent* set_ext4_drop_inode();
  Ext4EsCacheExtentFtraceEvent* set_ext4_es_cache_extent();
  Ext4EsFindDelayedExtentRangeEnterFtraceEvent* set_ext4_es_find_delayed_extent_range_enter();
  Ext4EsFindDelayedExtentRangeExitFtraceEvent* set_ext4_es_find_delayed_extent_range_exit();
  Ext4EsInsertExtentFtraceEvent* set_ext4_es_insert_extent();
  Ext4EsLookupExtentEnterFtraceEvent* set_ext4_es_lookup_extent_enter();
  Ext4EsLookupExtentExitFtraceEvent* set_ext4_es_lookup_extent_exit();
  Ext4EsRemoveExtentFtraceEvent* set_ext4_es_remove_extent();
  Ext4EsShrinkFtraceEvent* set_ext4_es_shrink();
  Ext4EsShrinkCountFtraceEvent* set_ext4_es_shrink_count();
  Ext4EsShrinkScanEnterFtraceEvent* set_ext4_es_shrink_scan_enter();
  Ext4EsShrinkScanExitFtraceEvent* set_ext4_es_shrink_scan_exit();
  Ext4EvictInodeFtraceEvent* set_ext4_evict_inode();
  Ext4ExtConvertToInitializedEnterFtraceEvent* set_ext4_ext_convert_to_initialized_enter();
  Ext4ExtConvertToInitializedFastpathFtraceEvent* set_ext4_ext_convert_to_initialized_fastpath();
  Ext4ExtHandleUnwrittenExtentsFtraceEvent* set_ext4_ext_handle_unwritten_extents();
  Ext4ExtInCacheFtraceEvent* set_ext4_ext_in_cache();
  Ext4ExtLoadExtentFtraceEvent* set_ext4_ext_load_extent();
  Ext4ExtMapBlocksEnterFtraceEvent* set_ext4_ext_map_blocks_enter();
  Ext4ExtMapBlocksExitFtraceEvent* set_ext4_ext_map_blocks_exit();
  Ext4ExtPutInCacheFtraceEvent* set_ext4_ext_put_in_cache();
  Ext4ExtRemoveSpaceFtraceEvent* set_ext4_ext_remove_space();
  Ext4ExtRemoveSpaceDoneFtraceEvent* set_ext4_ext_remove_space_done();
  Ext4ExtRmIdxFtraceEvent* set_ext4_ext_rm_idx();
  Ext4ExtRmLeafFtraceEvent* set_ext4_ext_rm_leaf();
  Ext4ExtShowExtentFtraceEvent* set_ext4_ext_show_extent();
  Ext4FallocateEnterFtraceEvent* set_ext4_fallocate_enter();
  Ext4FallocateExitFtraceEvent* set_ext4_fallocate_exit();
  Ext4FindDelallocRangeFtraceEvent* set_ext4_find_delalloc_range();
  Ext4ForgetFtraceEvent* set_ext4_forget();
  Ext4FreeBlocksFtraceEvent* set_ext4_free_blocks();
  Ext4FreeInodeFtraceEvent* set_ext4_free_inode();
  Ext4GetImpliedClusterAllocExitFtraceEvent* set_ext4_get_implied_cluster_alloc_exit();
  Ext4GetReservedClusterAllocFtraceEvent* set_ext4_get_reserved_cluster_alloc();
  Ext4IndMapBlocksEnterFtraceEvent* set_ext4_ind_map_blocks_enter();
  Ext4IndMapBlocksExitFtraceEvent* set_ext4_ind_map_blocks_exit();
  Ext4InsertRangeFtraceEvent* set_ext4_insert_range();
  Ext4InvalidatepageFtraceEvent* set_ext4_invalidatepage();
  Ext4JournalStartFtraceEvent* set_ext4_journal_start();
  Ext4JournalStartReservedFtraceEvent* set_ext4_journal_start_reserved();
  Ext4JournalledInvalidatepageFtraceEvent* set_ext4_journalled_invalidatepage();
  Ext4JournalledWriteEndFtraceEvent* set_ext4_journalled_write_end();
  Ext4LoadInodeFtraceEvent* set_ext4_load_inode();
  Ext4LoadInodeBitmapFtraceEvent* set_ext4_load_inode_bitmap();
  Ext4MarkInodeDirtyFtraceEvent* set_ext4_mark_inode_dirty();
  Ext4MbBitmapLoadFtraceEvent* set_ext4_mb_bitmap_load();
  Ext4MbBuddyBitmapLoadFtraceEvent* set_ext4_mb_buddy_bitmap_load();
  Ext4MbDiscardPreallocationsFtraceEvent* set_ext4_mb_discard_preallocations();
  Ext4MbNewGroupPaFtraceEvent* set_ext4_mb_new_group_pa();
  Ext4MbNewInodePaFtraceEvent* set_ext4_mb_new_inode_pa();
  Ext4MbReleaseGroupPaFtraceEvent* set_ext4_mb_release_group_pa();
  Ext4MbReleaseInodePaFtraceEvent* set_ext4_mb_release_inode_pa();
  Ext4MballocAllocFtraceEvent* set_ext4_mballoc_alloc();
  Ext4MballocDiscardFtraceEvent* set_ext4_mballoc_discard();
  Ext4MballocFreeFtraceEvent* set_ext4_mballoc_free();
  Ext4MballocPreallocFtraceEvent* set_ext4_mballoc_prealloc();
  Ext4OtherInodeUpdateTimeFtraceEvent* set_ext4_other_inode_update_time();
  Ext4PunchHoleFtraceEvent* set_ext4_punch_hole();
  Ext4ReadBlockBitmapLoadFtraceEvent* set_ext4_read_block_bitmap_load();
  Ext4ReadpageFtraceEvent* set_ext4_readpage();
  Ext4ReleasepageFtraceEvent* set_ext4_releasepage();
  Ext4RemoveBlocksFtraceEvent* set_ext4_remove_blocks();
  Ext4RequestBlocksFtraceEvent* set_ext4_request_blocks();
  Ext4RequestInodeFtraceEvent* set_ext4_request_inode();
  Ext4SyncFsFtraceEvent* set_ext4_sync_fs();
  Ext4TrimAllFreeFtraceEvent* set_ext4_trim_all_free();
  Ext4TrimExtentFtraceEvent* set_ext4_trim_extent();
  Ext4TruncateEnterFtraceEvent* set_ext4_truncate_enter();
  Ext4TruncateExitFtraceEvent* set_ext4_truncate_exit();
  Ext4UnlinkEnterFtraceEvent* set_ext4_unlink_enter();
  Ext4UnlinkExitFtraceEvent* set_ext4_unlink_exit();
  Ext4WriteBeginFtraceEvent* set_ext4_write_begin();
  Ext4WriteEndFtraceEvent* set_ext4_write_end();
  Ext4WritepageFtraceEvent* set_ext4_writepage();
  Ext4WritepagesFtraceEvent* set_ext4_writepages();
  Ext4WritepagesResultFtraceEvent* set_ext4_writepages_result();
  Ext4ZeroRangeFtraceEvent* set_ext4_zero_range();
  TaskNewtaskFtraceEvent* set_task_newtask();
  TaskRenameFtraceEvent* set_task_rename();
  SchedProcessExecFtraceEvent* set_sched_process_exec();
  SchedProcessExitFtraceEvent* set_sched_process_exit();
  SchedProcessForkFtraceEvent* set_sched_process_fork();
  SchedProcessFreeFtraceEvent* set_sched_process_free();
  SchedProcessHangFtraceEvent* set_sched_process_hang();
  SchedProcessWaitFtraceEvent* set_sched_process_wait();
  F2fsDoSubmitBioFtraceEvent* set_f2fs_do_submit_bio();
  F2fsEvictInodeFtraceEvent* set_f2fs_evict_inode();
  F2fsFallocateFtraceEvent* set_f2fs_fallocate();
  F2fsGetDataBlockFtraceEvent* set_f2fs_get_data_block();
  F2fsGetVictimFtraceEvent* set_f2fs_get_victim();
  F2fsIgetFtraceEvent* set_f2fs_iget();
  F2fsIgetExitFtraceEvent* set_f2fs_iget_exit();
  F2fsNewInodeFtraceEvent* set_f2fs_new_inode();
  F2fsReadpageFtraceEvent* set_f2fs_readpage();
  F2fsReserveNewBlockFtraceEvent* set_f2fs_reserve_new_block();
  F2fsSetPageDirtyFtraceEvent* set_f2fs_set_page_dirty();
  F2fsSubmitWritePageFtraceEvent* set_f2fs_submit_write_page();
  F2fsSyncFileEnterFtraceEvent* set_f2fs_sync_file_enter();
  F2fsSyncFileExitFtraceEvent* set_f2fs_sync_file_exit();
  F2fsSyncFsFtraceEvent* set_f2fs_sync_fs();
  F2fsTruncateFtraceEvent* set_f2fs_truncate();
  F2fsTruncateBlocksEnterFtraceEvent* set_f2fs_truncate_blocks_enter();
  F2fsTruncateBlocksExitFtraceEvent* set_f2fs_truncate_blocks_exit();
  F2fsTruncateDataBlocksRangeFtraceEvent* set_f2fs_truncate_data_blocks_range();
  F2fsTruncateInodeBlocksEnterFtraceEvent* set_f2fs_truncate_inode_blocks_enter();
  F2fsTruncateInodeBlocksExitFtraceEvent* set_f2fs_truncate_inode_blocks_exit();
  F2fsTruncateNodeFtraceEvent* set_f2fs_truncate_node();
  F2fsTruncateNodesEnterFtraceEvent* set_f2fs_truncate_nodes_enter();
  F2fsTruncateNodesExitFtraceEvent* set_f2fs_truncate_nodes_exit();
  F2fsTruncatePartialNodesFtraceEvent* set_f2fs_truncate_partial_nodes();
  F2fsUnlinkEnterFtraceEvent* set_f2fs_unlink_enter();
  F2fsUnlinkExitFtraceEvent* set_f2fs_unlink_exit();
  F2fsVmPageMkwriteFtraceEvent* set_f2fs_vm_page_mkwrite();
  F2fsWriteBeginFtraceEvent* set_f2fs_write_begin();
  F2fsWriteCheckpointFtraceEvent* set_f2fs_write_checkpoint();
  F2fsWriteEndFtraceEvent* set_f2fs_write_end();
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.