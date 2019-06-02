/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDActiveSiriSessionInfoDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMDSiriRemoteInputServer, HMDActiveSiriSessionInfo;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging> {

	NSString* _identifier;
	HMDSiriRemoteInputServer* _server;
	HMDActiveSiriSessionInfo* _activeSessionInfo;

}

@property (assign,nonatomic,__weak) HMDSiriRemoteInputServer * server;                  //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) HMDActiveSiriSessionInfo * activeSessionInfo;              //@synthesize activeSessionInfo=_activeSessionInfo - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)siriSessionForUI;
-(HMDSiriRemoteInputServer *)server;
-(void)_stopStream;
-(void)setServer:(HMDSiriRemoteInputServer *)arg1 ;
-(void)publish;
-(void)handleResetStream;
-(void)sendMsg:(const char*)arg1 args:(id)arg2 ;
-(void)handleStartStream;
-(void)handleStopStream;
-(void)activeSiriSessionDidStop:(id)arg1 ;
-(void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4 ;
-(void)setActiveBulkSendSession:(id)arg1 ;
-(HMDActiveSiriSessionInfo *)activeSessionInfo;
-(BOOL)_startStream;
-(id)_createArgsDictionaryWithError:(id)arg1 ;
-(void)setActiveSessionInfo:(HMDActiveSiriSessionInfo *)arg1 ;
-(id)activeSessionToken;
-(NSString *)identifier;
-(void)invalidate;
-(BOOL)activate;
-(void)deactivate;
-(id)initWithIdentifier:(id)arg1 ;
@end

