/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTask.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSPort;

@interface NSConcreteTask : NSTask {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	NSPort* _tmpPort;
	long long _suspendCount;
	int _pid;
	int _platformExitInfo;
	BOOL _hasExeced;
	BOOL _isRunning;
	BOOL _hasPostedDeathNotification;
	BOOL _terminationRun;
	char _qos;

}
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(id)launchPath;
-(void)setLaunchPath:(id)arg1 ;
-(BOOL)launchWithDictionary:(id)arg1 error:(id*)arg2 ;
-(int)terminationStatus;
-(void)launch;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)interrupt;
-(long long)suspendCount;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(long long)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(BOOL)arg1 ;
-(long long)terminationReason;
-(long long)qualityOfService;
-(void)terminate;
-(id)arguments;
-(id)init;
-(void)dealloc;
-(BOOL)isRunning;
-(BOOL)resume;
-(id)environment;
-(void)setEnvironment:(id)arg1 ;
-(BOOL)suspend;
-(void)setQualityOfService:(long long)arg1 ;
-(int)processIdentifier;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)terminationHandler;
@end

