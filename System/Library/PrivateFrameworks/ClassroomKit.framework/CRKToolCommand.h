/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>

@protocol OS_dispatch_source, CRKToolCommandDelegate;
@class NSObject, CATTaskClient, CATOperationQueue, CATOperation, NSString;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {

	NSObject*<OS_dispatch_source> mSIGINTSource;
	/*^block*/id mConnectCompletionBlock;
	CATTaskClient* mStudentClient;
	CATTaskClient* mInstructorClient;
	CATOperationQueue* mOperationQueue;
	CATOperation* mOperation;
	id<CRKToolCommandDelegate> _delegate;
	NSString* _sessionIdentifier;

}

@property (assign,nonatomic,__weak) id<CRKToolCommandDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aliases;
+(BOOL)instructorCommand;
+(void)printHelp;
+(BOOL)handlesProgress;
+(id)description;
+(id)help;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)runWithClient:(id)arg1 arguments:(id)arg2 ;
-(void)connectToTaskClientWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)operationWithClient:(id)arg1 arguments:(id)arg2 ;
-(void)executeOperation:(id)arg1 ;
-(id)requestWithArguments:(id)arg1 ;
-(void)connectOperationDidSucceed:(id)arg1 ;
-(void)connectOperationDidFail:(id)arg1 ;
-(void)_remoteTaskDidProgress:(id)arg1 ;
-(void)_remoteTaskDidFinish:(id)arg1 ;
-(void)remoteTaskDidProgress:(id)arg1 ;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(void)cleanupAndExitIfNeeded;
-(BOOL)isCommandFinished;
-(BOOL)didCommandSucceed;
-(BOOL)didOperationSucceed:(id)arg1 ;
-(void)runWithArguments:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CRKToolCommandDelegate>)arg1 ;
-(id<CRKToolCommandDelegate>)delegate;
-(NSString *)sessionIdentifier;
@end
