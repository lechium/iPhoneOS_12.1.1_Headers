/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSMutableDictionary, NSString, SATimestamp, NSArray, SASharedCache, SAThread, NSMutableSet, SABinaryLoadInfo, NSDictionary;

@interface SATask : NSObject <SASerializable> {

	NSMutableArray* _taskStates;
	NSMutableDictionary* _threads;
	NSMutableDictionary* _dispatchQueues;
	NSString* _mainBinaryPath;
	NSString* _name;
	BOOL _isUnresponsive;
	BOOL _usesSuddenTermination;
	BOOL _allowsIdleExit;
	BOOL _isThirdParty;
	BOOL _isTranslocated;
	BOOL _alreadyGatheredDataFromLiveProcess;
	int _pid;
	int _ppid;
	int _rpid;
	unsigned _uid;
	unsigned long long _uniquePid;
	NSString* _bundleName;
	SATimestamp* _execTimestamp;
	SATimestamp* _exitTimestamp;
	double _timeOfLastResponse;
	NSArray* _binaryLoadInfos;
	SASharedCache* _sharedCache;
	SAThread* _mainThread;
	NSMutableSet* _rootUserFrames;
	CSArchitecture _architecture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int ppid;                                             //@synthesize ppid=_ppid - In the implementation block
@property (retain) SATimestamp * execTimestamp;                          //@synthesize execTimestamp=_execTimestamp - In the implementation block
@property (retain) SATimestamp * exitTimestamp;                          //@synthesize exitTimestamp=_exitTimestamp - In the implementation block
@property (assign) BOOL alreadyGatheredDataFromLiveProcess;              //@synthesize alreadyGatheredDataFromLiveProcess=_alreadyGatheredDataFromLiveProcess - In the implementation block
@property (retain) NSMutableSet * rootUserFrames;                        //@synthesize rootUserFrames=_rootUserFrames - In the implementation block
@property (assign) CSArchitecture architecture;                          //@synthesize architecture=_architecture - In the implementation block
@property (retain) SAThread * mainThread;                                //@synthesize mainThread=_mainThread - In the implementation block
@property (retain) SASharedCache * sharedCache;                          //@synthesize sharedCache=_sharedCache - In the implementation block
@property (readonly) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (readonly) int rpid;                                           //@synthesize rpid=_rpid - In the implementation block
@property (readonly) unsigned uid;                                       //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned long long uniquePid;                       //@synthesize uniquePid=_uniquePid - In the implementation block
@property (copy,readonly) NSString * name; 
@property (readonly) NSString * bundleName;                              //@synthesize bundleName=_bundleName - In the implementation block
@property (readonly) BOOL isUnresponsive;                                //@synthesize isUnresponsive=_isUnresponsive - In the implementation block
@property (readonly) double timeOfLastResponse;                          //@synthesize timeOfLastResponse=_timeOfLastResponse - In the implementation block
@property (readonly) BOOL usesSuddenTermination;                         //@synthesize usesSuddenTermination=_usesSuddenTermination - In the implementation block
@property (readonly) BOOL allowsIdleExit;                                //@synthesize allowsIdleExit=_allowsIdleExit - In the implementation block
@property (readonly) BOOL isThirdParty;                                  //@synthesize isThirdParty=_isThirdParty - In the implementation block
@property (readonly) BOOL isTranslocated;                                //@synthesize isTranslocated=_isTranslocated - In the implementation block
@property (readonly) NSArray * binaryLoadInfos;                          //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) SABinaryLoadInfo * mainBinaryLoadInfo; 
@property (readonly) NSArray * taskStates;                               //@synthesize taskStates=_taskStates - In the implementation block
@property (readonly) NSDictionary * threads;                             //@synthesize threads=_threads - In the implementation block
@property (readonly) NSDictionary * dispatchQueues;                      //@synthesize dispatchQueues=_dispatchQueues - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA39*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)taskWithKCDataTask:(const task_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
+(id)taskWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 pid:(int)arg4 machineArchitecture:(CSArchitecture)arg5 sharedCache:(id)arg6 ;
+(id)taskWithStackshotTaskV1:(const task_snapshot*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 machineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
+(id)taskWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 name:(id)arg3 sharedCache:(id)arg4 ;
+(id)taskWithoutReferencesFromPAStyleSerializedTask:(const SCD_Struct_SA18*)arg1 ;
-(NSString *)bundleName;
-(id)endTimestamp;
-(int)pid;
-(int)ppid;
-(NSArray *)binaryLoadInfos;
-(void)setSharedCache:(SASharedCache *)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA39*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA39*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(unsigned long long)uniquePid;
-(id)mainBinaryPath;
-(BOOL)gatherLoadInfoFromLiveProcessWithDataGatheringOptions:(unsigned long long)arg1 ;
-(void)postprocessWithDataGatheringOptions:(unsigned long long)arg1 mightBeAlive:(BOOL)arg2 ;
-(BOOL)correspondsToUniquePid:(unsigned long long)arg1 name:(const char*)arg2 loadInfos:(const dyld_uuid_info_64*)arg3 numLoadInfos:(unsigned)arg4 sharedCache:(id)arg5 ;
-(SATimestamp *)exitTimestamp;
-(void)setExitTimestamp:(SATimestamp *)arg1 ;
-(BOOL)correspondsToPid:(int)arg1 name:(const char*)arg2 loadInfos:(const dyld_uuid_info_64*)arg3 numLoadInfos:(unsigned)arg4 sharedCache:(id)arg5 ;
-(void)_gatherDataFromLiveProcessIsLate:(BOOL)arg1 ;
-(SATimestamp *)execTimestamp;
-(BOOL)isAliveAtTimestamp:(id)arg1 ;
-(NSDictionary *)threads;
-(void)addThread:(id)arg1 ;
-(void)setMainThread:(SAThread *)arg1 ;
-(NSArray *)taskStates;
-(id)addUserStack:(id)arg1 ;
-(NSDictionary *)dispatchQueues;
-(void)addDispatchQueue:(id)arg1 ;
-(void)addImageInfos:(id)arg1 ;
-(CSArchitecture)architecture;
-(void)setArchitecture:(CSArchitecture)arg1 ;
-(void)setExecTimestamp:(SATimestamp *)arg1 ;
-(void)addTaskState:(id)arg1 ;
-(void)guessArchitectureGivenMachineArchitecture:(CSArchitecture)arg1 ;
-(id)truncatedUserStackFrame;
-(void)enumerateFrameTree:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateTaskStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)fixupFrameInstructionsInFrameTree:(id)arg1 ;
-(void)removeStacksOutsideThisProcess;
-(NSMutableSet *)rootUserFrames;
-(void)setPpid:(int)arg1 ;
-(void)populateReferencesUsingPAStyleSerializedTask:(const SCD_Struct_SA18*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(void)forwardFillMonotonicallyIncreasingData;
-(unsigned long long)indexOfFirstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(SABinaryLoadInfo *)mainBinaryLoadInfo;
-(int)rpid;
-(BOOL)isTranslocated;
-(BOOL)isUnresponsive;
-(double)timeOfLastResponse;
-(void)cpuTimeNs:(unsigned long long*)arg1 cpuInstructions:(unsigned long long*)arg2 cpuCycles:(unsigned long long*)arg3 betweenStartTime:(id)arg4 endTime:(id)arg5 ;
-(id)architectureString;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(id)initWithPid:(int)arg1 andUniquePid:(unsigned long long)arg2 andName:(id)arg3 sharedCache:(id)arg4 ;
-(id)initWithKCDataTask:(const task_snapshot_v2*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 andMachineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
-(id)initWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 pid:(int)arg4 andMachineArchitecture:(CSArchitecture)arg5 sharedCache:(id)arg6 ;
-(id)initWithStackshotTaskV1:(const task_snapshot*)arg1 withLoadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 andMachineArchitecture:(CSArchitecture)arg4 sharedCache:(id)arg5 ;
-(BOOL)_matchesName:(const char*)arg1 ;
-(void)setMainBinaryPath:(id)arg1 ;
-(void)checkForBetterName;
-(BOOL)correspondsToName:(const char*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 sharedCache:(id)arg4 ;
-(id)lastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(BOOL)isThirdParty;
-(BOOL)alreadyGatheredDataFromLiveProcess;
-(void)setAlreadyGatheredDataFromLiveProcess:(BOOL)arg1 ;
-(void)setRootUserFrames:(NSMutableSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(id)startTimestamp;
-(unsigned)uid;
-(SAThread *)mainThread;
-(SASharedCache *)sharedCache;
@end

