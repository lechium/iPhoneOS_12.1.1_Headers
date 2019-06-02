/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/RMSTouchRemoteSocketDelegate.h>

@protocol RMSDAAPTouchRemoteManagerDelegate;
@class RMSDAAPRequestManager, RMSTouchRemoteSocket, NSString;

@interface RMSDAAPTouchRemoteManager : NSObject <RMSTouchRemoteSocketDelegate> {

	RMSDAAPRequestManager* _requestManager;
	RMSTouchRemoteSocket* _socket;
	long long _controlPromptRevision;
	int _encryptionKey;
	int _portSecret;
	int _port;
	float _touchDistanceMin;
	float _touchDistanceMax;
	unsigned _touchTimeMin;
	unsigned _touchTimeMax;
	BOOL _shouldWriteTimestampsForPPT;
	id<RMSDAAPTouchRemoteManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSDAAPTouchRemoteManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchRemoteSocketDidConnect:(id)arg1 ;
-(void)touchRemoteSocketDidDisconnect:(id)arg1 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(void)sendNavigationCommand:(long long)arg1 ;
-(void)initiateControlWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createSocket;
-(void)_requestPromptUpdate:(/*^block*/id)arg1 ;
-(CGPoint)_locationForDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(unsigned)_timeForDirection:(long long)arg1 repeatCount:(int)arg2 ;
-(void)_parsePortInfoItems:(id)arg1 ;
-(void)_requestPortInfo;
-(void)setDelegate:(id<RMSDAAPTouchRemoteManagerDelegate>)arg1 ;
-(id<RMSDAAPTouchRemoteManagerDelegate>)delegate;
@end

