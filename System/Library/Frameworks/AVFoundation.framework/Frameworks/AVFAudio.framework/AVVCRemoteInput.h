/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioRemoteInputPluginDelegate.h>

@protocol AVAudioRemoteInputPlugin;
@class NSMutableArray;

@interface AVVCRemoteInput : NSObject <AVAudioRemoteInputPluginDelegate> {

	NSMutableArray*<AVAudioRemoteInputPlugin> plugins;
	AVVCPluginRecordingEngine* mPluginRecordingEngine;

}
-(id)allBundles:(id*)arg1 ;
-(void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2 ;
-(void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2 ;
-(id)initializePlugins;
-(void)invalidatePlugins;
-(id)findDeviceWithIdentifier:(id)arg1 ;
-(void)setPluginRecordingEngine:(AVVCPluginRecordingEngine*)arg1 ;
-(void)dealloc;
@end

