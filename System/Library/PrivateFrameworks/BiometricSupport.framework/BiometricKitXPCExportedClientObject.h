/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricKitXPCExportedClientObject : NSObject {

	unsigned long long _clientID;
	NSDictionary* _clientInfo;
	BiometricKitXPCExportedObject* _exportedObject;
	BOOL _delegateRegistered;
	BOOL _clientAppIsBackground;
	BOOL _clientAppIsInactive;

}

@property (nonatomic,readonly) unsigned long long clientID;                                        //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * clientInfo;                                     //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) BOOL delegateRegistered;                                            //@synthesize delegateRegistered=_delegateRegistered - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsBackground;                                         //@synthesize clientAppIsBackground=_clientAppIsBackground - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsInactive;                                           //@synthesize clientAppIsInactive=_clientAppIsInactive - In the implementation block
@property (nonatomic,__weak,readonly) BiometricKitXPCExportedObject * exportedObject; 
-(BiometricKitXPCExportedObject *)exportedObject;
-(unsigned long long)clientID;
-(NSDictionary *)clientInfo;
-(id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3 ;
-(void)setDelegateRegistered:(BOOL)arg1 ;
-(void)setClientAppIsBackground:(BOOL)arg1 ;
-(void)setClientAppIsInactive:(BOOL)arg1 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 ;
-(void)enrollResult:(id)arg1 ;
-(void)enrollUpdate:(id)arg1 ;
-(void)enrollFeedback:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)homeButtonPressed;
-(void)touchIDButtonPressed:(BOOL)arg1 ;
-(void)taskResumeStatus:(int)arg1 ;
-(BOOL)clientAppIsInactive;
-(BOOL)delegateRegistered;
-(BOOL)clientAppIsBackground;
-(void)matchResult:(id)arg1 details:(id)arg2 ;
-(void)templateUpdate:(id)arg1 details:(id)arg2 ;
-(id)description;
@end

