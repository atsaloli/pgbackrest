/***********************************************************************************************************************************
Command and Option Definition

Automatically generated by Build.pm -- do not modify directly.
***********************************************************************************************************************************/
#ifndef CONFIG_DEFINE_AUTO_H
#define CONFIG_DEFINE_AUTO_H

/***********************************************************************************************************************************
Command define enum
***********************************************************************************************************************************/
typedef enum
{
    cfgDefCmdArchiveGet,
    cfgDefCmdArchivePush,
    cfgDefCmdBackup,
    cfgDefCmdCheck,
    cfgDefCmdExpire,
    cfgDefCmdHelp,
    cfgDefCmdInfo,
    cfgDefCmdRepoCreate,
    cfgDefCmdRepoGet,
    cfgDefCmdRepoLs,
    cfgDefCmdRepoPut,
    cfgDefCmdRepoRm,
    cfgDefCmdRestore,
    cfgDefCmdStanzaCreate,
    cfgDefCmdStanzaDelete,
    cfgDefCmdStanzaUpgrade,
    cfgDefCmdStart,
    cfgDefCmdStop,
    cfgDefCmdVersion,
} ConfigDefineCommand;

/***********************************************************************************************************************************
Option type define enum
***********************************************************************************************************************************/
typedef enum
{
    cfgDefOptTypeBoolean,
    cfgDefOptTypeFloat,
    cfgDefOptTypeHash,
    cfgDefOptTypeInteger,
    cfgDefOptTypeList,
    cfgDefOptTypePath,
    cfgDefOptTypeSize,
    cfgDefOptTypeString,
} ConfigDefineOptionType;

/***********************************************************************************************************************************
Option define enum
***********************************************************************************************************************************/
typedef enum
{
    cfgDefOptArchiveAsync,
    cfgDefOptArchiveCheck,
    cfgDefOptArchiveCopy,
    cfgDefOptArchiveGetQueueMax,
    cfgDefOptArchivePushQueueMax,
    cfgDefOptArchiveTimeout,
    cfgDefOptBackupStandby,
    cfgDefOptBufferSize,
    cfgDefOptChecksumPage,
    cfgDefOptCipherPass,
    cfgDefOptCmdSsh,
    cfgDefOptCompress,
    cfgDefOptCompressLevel,
    cfgDefOptCompressLevelNetwork,
    cfgDefOptCompressType,
    cfgDefOptConfig,
    cfgDefOptConfigIncludePath,
    cfgDefOptConfigPath,
    cfgDefOptDbInclude,
    cfgDefOptDbTimeout,
    cfgDefOptDelta,
    cfgDefOptDryRun,
    cfgDefOptExclude,
    cfgDefOptFilter,
    cfgDefOptForce,
    cfgDefOptHostId,
    cfgDefOptIgnoreMissing,
    cfgDefOptIoTimeout,
    cfgDefOptLinkAll,
    cfgDefOptLinkMap,
    cfgDefOptLockPath,
    cfgDefOptLogLevelConsole,
    cfgDefOptLogLevelFile,
    cfgDefOptLogLevelStderr,
    cfgDefOptLogPath,
    cfgDefOptLogSubprocess,
    cfgDefOptLogTimestamp,
    cfgDefOptManifestSaveThreshold,
    cfgDefOptNeutralUmask,
    cfgDefOptOnline,
    cfgDefOptOutput,
    cfgDefOptPgHost,
    cfgDefOptPgHostCmd,
    cfgDefOptPgHostConfig,
    cfgDefOptPgHostConfigIncludePath,
    cfgDefOptPgHostConfigPath,
    cfgDefOptPgHostPort,
    cfgDefOptPgHostUser,
    cfgDefOptPgPath,
    cfgDefOptPgPort,
    cfgDefOptPgSocketPath,
    cfgDefOptPgUser,
    cfgDefOptProcess,
    cfgDefOptProcessMax,
    cfgDefOptProtocolTimeout,
    cfgDefOptRaw,
    cfgDefOptRecoveryOption,
    cfgDefOptRecurse,
    cfgDefOptRemoteType,
    cfgDefOptRepoCipherPass,
    cfgDefOptRepoCipherType,
    cfgDefOptRepoHardlink,
    cfgDefOptRepoHost,
    cfgDefOptRepoHostCmd,
    cfgDefOptRepoHostConfig,
    cfgDefOptRepoHostConfigIncludePath,
    cfgDefOptRepoHostConfigPath,
    cfgDefOptRepoHostPort,
    cfgDefOptRepoHostUser,
    cfgDefOptRepoPath,
    cfgDefOptRepoRetentionArchive,
    cfgDefOptRepoRetentionArchiveType,
    cfgDefOptRepoRetentionDiff,
    cfgDefOptRepoRetentionFull,
    cfgDefOptRepoS3Bucket,
    cfgDefOptRepoS3CaFile,
    cfgDefOptRepoS3CaPath,
    cfgDefOptRepoS3Endpoint,
    cfgDefOptRepoS3Host,
    cfgDefOptRepoS3Key,
    cfgDefOptRepoS3KeySecret,
    cfgDefOptRepoS3Port,
    cfgDefOptRepoS3Region,
    cfgDefOptRepoS3Token,
    cfgDefOptRepoS3UriStyle,
    cfgDefOptRepoS3VerifyTls,
    cfgDefOptRepoType,
    cfgDefOptResume,
    cfgDefOptSckBlock,
    cfgDefOptSckKeepAlive,
    cfgDefOptSet,
    cfgDefOptSort,
    cfgDefOptSpoolPath,
    cfgDefOptStanza,
    cfgDefOptStartFast,
    cfgDefOptStopAuto,
    cfgDefOptTablespaceMap,
    cfgDefOptTablespaceMapAll,
    cfgDefOptTarget,
    cfgDefOptTargetAction,
    cfgDefOptTargetExclusive,
    cfgDefOptTargetTimeline,
    cfgDefOptTcpKeepAliveCount,
    cfgDefOptTcpKeepAliveIdle,
    cfgDefOptTcpKeepAliveInterval,
    cfgDefOptType,
} ConfigDefineOption;

#endif
