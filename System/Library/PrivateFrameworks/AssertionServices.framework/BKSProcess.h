/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSProcessClientDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BKSProcessDelegate, OS_dispatch_queue;
@class BSProcessHandle, BKSProcessExitContext, NSString, BKSProcessClient, NSObject, BKSLaunchdJobSpecification;

@interface BKSProcess : NSObject <BKSProcessClientDelegate, BSDescriptionProviding> {

	BOOL _bootstrapped;
	BOOL _workspaceLocked;
	BOOL _connectedToExternalAccessories;
	BOOL _nowPlayingWithAudio;
	BOOL _recordingAudio;
	id<BKSProcessDelegate> _delegate;
	long long _visibility;
	long long _taskState;
	BSProcessHandle* _handle;
	BKSProcessExitContext* _lastExitContext;
	NSString* _bundleID;
	NSString* _jobLabel;
	BKSProcessClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	BKSLaunchdJobSpecification* _jobSpec;
	long long _terminationReason;

}

@property (nonatomic,retain) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * jobLabel;                                    //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,retain) BKSProcessClient * client;                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,retain) BKSLaunchdJobSpecification * jobSpec;                   //@synthesize jobSpec=_jobSpec - In the implementation block
@property (assign,nonatomic) BOOL bootstrapped;                                      //@synthesize bootstrapped=_bootstrapped - In the implementation block
@property (assign,nonatomic) BOOL workspaceLocked;                                   //@synthesize workspaceLocked=_workspaceLocked - In the implementation block
@property (assign,nonatomic) long long visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL connectedToExternalAccessories;                    //@synthesize connectedToExternalAccessories=_connectedToExternalAccessories - In the implementation block
@property (assign,nonatomic) BOOL nowPlayingWithAudio;                               //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,nonatomic) BOOL recordingAudio;                                    //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,nonatomic) long long terminationReason;                            //@synthesize terminationReason=_terminationReason - In the implementation block
@property (assign,nonatomic,__weak) id<BKSProcessDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) BSProcessHandle * handle;                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) long long taskState;                                  //@synthesize taskState=_taskState - In the implementation block
@property (nonatomic,readonly) double backgroundTimeRemaining; 
@property (nonatomic,retain) BKSProcessExitContext * lastExitContext;                //@synthesize lastExitContext=_lastExitContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)busyExtensionInstances:(id)arg1 ;
+(id)currentProcess;
+(double)backgroundTimeRemaining;
-(void)setJobLabel:(NSString *)arg1 ;
-(BOOL)_bootstrapWithError:(out id*)arg1 ;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 ;
-(void)client:(id)arg1 processDidChangeTaskState:(long long)arg2 ;
-(void)client:(id)arg1 processDidChangeDebuggingState:(BOOL)arg2 ;
-(void)client:(id)arg1 processDidExitWithContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processAssertionExpirationImminentForClient:(id)arg1 ;
-(id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(BOOL)arg4 queue:(id)arg5 ;
-(void)setWorkspaceLocked:(BOOL)arg1 ;
-(void)setLastExitContext:(BKSProcessExitContext *)arg1 ;
-(BKSLaunchdJobSpecification *)jobSpec;
-(void)setJobSpec:(BKSLaunchdJobSpecification *)arg1 ;
-(BOOL)bootstrapped;
-(void)setBootstrapped:(BOOL)arg1 ;
-(BOOL)workspaceLocked;
-(BOOL)connectedToExternalAccessories;
-(BOOL)nowPlayingWithAudio;
-(BOOL)recordingAudio;
-(void)_sendMessageType:(int)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)terminationReason;
-(void)setTerminationReason:(long long)arg1 ;
-(BSProcessHandle *)handle;
-(BKSProcessExitContext *)lastExitContext;
-(NSString *)jobLabel;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(void)setConnectedToExternalAccessories:(BOOL)arg1 ;
-(BOOL)bootstrapWithSpecification:(id)arg1 error:(out id*)arg2 ;
-(BOOL)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2 ;
-(BKSProcessClient *)client;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setClient:(BKSProcessClient *)arg1 ;
-(long long)taskState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<BKSProcessDelegate>)arg1 ;
-(id<BKSProcessDelegate>)delegate;
-(void)invalidate;
-(NSString *)bundleID;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(long long)visibility;
-(void)setVisibility:(long long)arg1 ;
-(double)backgroundTimeRemaining;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

