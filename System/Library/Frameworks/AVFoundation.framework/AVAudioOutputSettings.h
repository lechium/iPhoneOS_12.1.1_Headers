/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic,readonly) NSDictionary * audioSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultAudioOutputSettings;
+(id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 ;
+(id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1 ;
+(id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(NSDictionary *)audioSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

