/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
@property (assign,nonatomic) id changeListener; 
+(void)stopAudioSession;
+(id)currentInputDevice;
+(id)currentOutputDevice;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)hasActiveAudioSession;
+(BOOL)setInputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(void)initializeAudioSessionQ;
+(void)resetAudioSessionOutputPortOverride;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)setMicrophoneMuted:(BOOL)arg1 ;
+(BOOL)isMicrophoneMuted;
+(BOOL)setOutputDevice:(id)arg1 ;
-(id)outputDevices;
-(AVAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
-(id)devices;
-(id)init;
-(void)dealloc;
-(id)inputDevices;
@end

