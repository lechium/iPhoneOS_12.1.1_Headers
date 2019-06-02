/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RMSSessionManagerDelegate;
@class NSMutableDictionary, NSObject;

@interface RMSSessionManager : NSObject {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _sessionManagerQueue;
	id<RMSSessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)sessionWithIdentifier:(int)arg1 ;
-(id)persistedSessionIdentifiers;
-(void)refreshSessionWithIdentifier:(int)arg1 ;
-(void)beginSession:(id)arg1 timeout:(int)arg2 shouldTakePowerAssertion:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)endSessionWithIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)identifierForSession:(id)arg1 ;
-(int)_uniqueSessionIdentifier;
-(void)_updatePersistedSessionIdentifiers;
-(void)_scheduleSessionExpirationWithIdentifier:(int)arg1 timeout:(int)arg2 ;
-(id)init;
-(void)setDelegate:(id<RMSSessionManagerDelegate>)arg1 ;
-(id<RMSSessionManagerDelegate>)delegate;
@end

