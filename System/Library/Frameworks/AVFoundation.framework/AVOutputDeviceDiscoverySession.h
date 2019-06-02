/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceDiscoverySessionInternal, AVAudioSession, NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface AVOutputDeviceDiscoverySession : NSObject {

	AVOutputDeviceDiscoverySessionInternal* _outputDeviceDiscoverySession;

}

@property (readonly) OpaqueFigRouteDiscovererRef routeDiscoverer; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
+(id)outputDeviceDiscoverySessionFactory;
+(void)initialize;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1 ;
-(id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1 ;
-(NSArray *)availableOutputDevices;
-(void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2 ;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(id)impl;
-(id)init;
-(void)dealloc;
-(void)setDiscoveryMode:(long long)arg1 ;
@end
