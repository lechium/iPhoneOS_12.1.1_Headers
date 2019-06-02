/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVOutputDeviceAuthorizationRequestImpl.h>

@class NSString, AVOutputDevice, AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl> {

	AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl* _parentSession;
	NSString* _uniqueID;
	AVOutputDevice* _outputDevice;
	NSString* _tokenType;
	/*^block*/id _completionHandler;

}

@property (__weak) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl * parentAuthorizationSessionImpl;              //@synthesize parentSession=_parentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * ID;                                                                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) AVOutputDevice * outputDevice;                                                              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) NSString * authorizationTokenType;                                                          //@synthesize tokenType=_tokenType - In the implementation block
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithID:(id)arg1 outputDevice:(id)arg2 authorizationTokenType:(id)arg3 ;
-(void)setParentAuthorizationSessionImpl:(AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *)arg1 ;
-(void)enterTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *)parentAuthorizationSessionImpl;
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(void)dealloc;
-(void)cancel;
@end

