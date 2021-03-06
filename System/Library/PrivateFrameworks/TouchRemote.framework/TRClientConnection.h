/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection {

	SFSession* _session;

}

@property (retain) SFSession * session;              //@synthesize session=_session - In the implementation block
-(void)setEventMessageHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)eventMessageHandler;
-(/*^block*/id)requestMessageHandler;
-(void)setRequestMessageHandler:(/*^block*/id)arg1 ;
-(void)connectToNearbyDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendRequest:(id)arg1 ;
-(void)invalidate;
-(SFSession *)session;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(/*^block*/id)interruptionHandler;
-(/*^block*/id)invalidationHandler;
-(void)sendEvent:(id)arg1 ;
-(void)setSession:(SFSession *)arg1 ;
@end

