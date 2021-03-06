/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libBKDM1.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <libBKDM1.dylib/libBKDM1.dylib-Structs.h>
@class BiometricKitXPCServer, NSString, NSDictionary, NSFileHandle, BLTimeBox, NSDate, NSException, NSDateFormatter, NSMutableString, BLTemplateList, BiometricKitIdentity, NSObject, NSLock, NSMutableDictionary;

@interface BioLogBase : NSObject {

	BiometricKitXPCServer* _server;
	NSString* _rootPath;
	NSString* _logPath;
	NSString* _logFilePath;
	NSString* _lastLogMessage;
	NSDictionary* _fileAttributes;
	NSDictionary* _fileAttributesProtected;
	NSFileHandle* _logFile;
	BLTimeBox* _timeBox;
	NSDate* _logStartDate;
	NSDate* _lastStatusESDRecovery;
	NSException* _lastLogWriteException;
	NSDateFormatter* _timestampFormatter;
	NSDateFormatter* _fileNameFormatter;
	NSDateFormatter* _timeZoneFormatter;
	NSDateFormatter* _milisecondsFormatter;
	unsigned char _fingerStateCaptureCounter;
	unsigned char _mode;
	NSMutableString* _imageCommentString;
	BLTemplateList* _templateList;
	BiometricKitIdentity* _lastMatchedIdentity;
	BOOL _chargerConnected;
	BOOL _compactOSLogOnly;
	BOOL _compact;
	NSObject*<OS_os_log> _osLog;
	unsigned long long _loggingType;
	unsigned long long _lastLogMessageRepeated;
	NSLock* _radarPromptLock;
	NSMutableDictionary* _logDetails;
	IONotificationPortRef _notificationPort;
	unsigned _mesaScanningStateNotification;
	unsigned _powerSourceNotification;
	unsigned long long _absoluteTimeOverride;

}

@property (assign) unsigned long long absoluteTimeOverride;              //@synthesize absoluteTimeOverride=_absoluteTimeOverride - In the implementation block
+(void)updateLogger:(id*)arg1 withServerObject:(id)arg2 identities:(id)arg3 ;
+(void)enableSensorStatusMessages:(BOOL)arg1 withServerObject:(id)arg2 ;
+(int)runInShell:(id)arg1 ;
-(void)updateIdentity:(id)arg1 ;
-(void)logDisconnectingClient:(id)arg1 ;
-(void)logEnrollStartForUser:(unsigned)arg1 fromClient:(id)arg2 ;
-(void)logEnrollStartError:(int)arg1 ;
-(void)logMatchStart:(id)arg1 withOptions:(id)arg2 fromClient:(id)arg3 ;
-(void)logMatchStartError:(int)arg1 ;
-(void)logFingerDetectStartWithOptions:(id)arg1 fromClient:(id)arg2 ;
-(void)logFingerDetectStartError:(int)arg1 ;
-(void)logCancelFromClient:(id)arg1 ;
-(void)logCancelError:(int)arg1 ;
-(void)logUpdateIdentity:(id)arg1 withOptions:(id)arg2 fromClient:(id)arg3 ;
-(void)logUpdateIdentity:(id)arg1 withError:(int)arg2 ;
-(void)logRemoveIdentity:(id)arg1 withOptions:(id)arg2 fromClient:(id)arg3 withTimestamp:(unsigned long long)arg4 ;
-(void)logRemoveIdentity:(id)arg1 withError:(int)arg2 ;
-(void)logRemoveAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 fromClient:(id)arg3 ;
-(void)logGetIdentityFromUUID:(id)arg1 fromClient:(id)arg2 ;
-(void)logGetIdentities:(id)arg1 fromClient:(id)arg2 ;
-(void)logGetMaxIdentityCount:(int)arg1 fromClient:(id)arg2 ;
-(void)logCall:(SEL)arg1 withParameters:(id)arg2 fromClient:(id)arg3 ;
-(void)logHomeButtonState:(BOOL)arg1 fromKernel:(BOOL)arg2 withTimestamp:(unsigned long long)arg3 ;
-(void)logCall:(SEL)arg1 withError:(int)arg2 ;
-(void)logProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 fromClient:(id)arg3 ;
-(void)logProtectedConfigurationError:(int)arg1 ;
-(void)logStatusMessage:(int)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3 forClients:(id)arg4 ;
-(void)logDelegateRegistered:(BOOL)arg1 fromClient:(id)arg2 ;
-(id)packAllLogs;
-(id)attachmentsFromAllLogs;
-(id)packCurrentLog;
-(id)attachmentsFromCurrentLog;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(void)logEnrollResultIdentity:(id)arg1 withTimestamp:(unsigned long long)arg2 forClients:(id)arg3 ;
-(void)logMatchResultIdentity:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 forClients:(id)arg4 ;
-(void)logSensorStatus:(id)arg1 ;
-(void)logKernelMessage:(id)arg1 ;
-(void)logSensorRecoveryReason:(unsigned)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)logSKSLockState:(unsigned short)arg1 forUser:(unsigned)arg2 withTimestamp:(unsigned long long)arg3 ;
-(void)logUnlockedStateWithIdentities:(id)arg1 ;
-(void)logSaveTemplateListWithDetails:(id)arg1 ;
-(void)logSaveTemplateListError:(int)arg1 ;
-(void)logDisplayState:(BOOL)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)logWakeGestureState:(long long)arg1 ;
-(void)logThermalLevel:(unsigned char)arg1 ;
-(id)initToPath:(id)arg1 withServerObject:(id)arg2 identities:(id)arg3 mode:(unsigned char)arg4 ;
-(void)uninitializeEventSystem;
-(id)log:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 fromClient:(id)arg4 endingWithToken:(char*)arg5 osLogMsgType:(unsigned char)arg6 ;
-(void)closeLogFile;
-(id)logQueue;
-(void)compactLog;
-(id)logNameFromDate:(id)arg1 ;
-(BOOL)logLogStartSync;
-(void)logUnlockedStateSyncWithIdentities:(id)arg1 ;
-(void)logProtectedConfigurationSync:(id)arg1 forUser:(unsigned)arg2 fromClient:(id)arg3 ;
-(void)logCalibrationData:(id)arg1 ;
-(void)logTemplateLists:(id)arg1 fromIdentities:(id)arg2 ;
-(BOOL)createNewLog;
-(void)initializeEventSystem;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 andKeywordIDs:(id)arg3 ;
-(void)synchronizeLogFile;
-(id)_log:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 fromClient:(id)arg4 forClients:(id)arg5 endingWithToken:(char*)arg6 checkingLogEnd:(BOOL)arg7 osLogMsgType:(unsigned char)arg8 ;
-(void)checkLogEndWithAbsoluteTime:(unsigned long long)arg1 ;
-(void)logPowerSourceStateAsync:(BOOL)arg1 initial:(BOOL)arg2 ;
-(id)stringFromTemplateByIdentity:(id)arg1 ;
-(void)logTemplateList:(id)arg1 withIdentity:(id)arg2 listingAllIdentitiesForUser:(unsigned)arg3 imageMetadata:(SCD_Struct_Bi2*)arg4 ;
-(id)stringFromTemplateListForUser:(unsigned)arg1 ;
-(id)imageFileNameWithTimestamp:(unsigned long long)arg1 captureCounter:(unsigned)arg2 ;
-(void)logTopology:(SCD_Struct_Bi7*)arg1 ;
-(void)noteAssertionFailureWithResultCode:(int)arg1 ;
-(void)logASLDelayedWithRadarPromptOnError:(BOOL)arg1 ;
-(id)log:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 forClients:(id)arg4 endingWithToken:(char*)arg5 osLogMsgType:(unsigned char)arg6 ;
-(void)logTemplateUpdate:(id)arg1 ;
-(void)logTemplateUpdateResult:(id)arg1 ;
-(void)addImageComment:(id)arg1 ;
-(void)logTemplateGraphState:(SCD_Struct_Bi15*)arg1 ;
-(void)logError:(id)arg1 withDetails:(id)arg2 status:(int)arg3 ;
-(void)promptFileRadar:(id)arg1 withAlternateButton:(id)arg2 andAlternateAction:(/*^block*/id)arg3 withOtherButton:(id)arg4 andOtherAction:(/*^block*/id)arg5 andKeywordIDs:(id)arg6 ;
-(void)logASLWithRadarPromptOnError:(id)arg1 ;
-(void)logCapture:(id)arg1 withTimestamp:(unsigned long long)arg2 captureCounter:(unsigned)arg3 ;
-(void)logImage:(id)arg1 withWidth:(unsigned)arg2 height:(unsigned)arg3 timestamp:(unsigned long long)arg4 captureCounter:(unsigned)arg5 ;
-(void)logStackshotWithErrorCode:(long long)arg1 ;
-(void)logAsync:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 endingWithToken:(char*)arg4 ;
-(void)logTemplateListWithIdentity:(id)arg1 listingAllIdentitiesForUser:(unsigned)arg2 ;
-(void)logMobileKeyBagLockStatus:(int)arg1 ;
-(BOOL)chargerConnected:(BOOL*)arg1 ;
-(void)logPowerSource:(BOOL)arg1 withAbsoluteTime:(unsigned long long)arg2 async:(BOOL)arg3 ;
-(void)logPowerStateSync:(BOOL)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)logTailspinWithErrorCode:(long long)arg1 ;
-(void)logMatchStartFromClient:(id)arg1 ;
-(id)timeBox;
-(unsigned long long)absoluteTimeOverride;
-(void)setAbsoluteTimeOverride:(unsigned long long)arg1 ;
-(void)dealloc;
@end

