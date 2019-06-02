/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding> {

	unsigned long long _soundType;
	NSString* _toneIdentifier;
	NSNumber* _mediaItemIdentifier;
	NSString* _vibrationIdentifier;
	NSNumber* _soundVolume;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long soundType;                //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;                   //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * mediaItemIdentifier;              //@synthesize mediaItemIdentifier=_mediaItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * vibrationIdentifier;              //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * soundVolume;                      //@synthesize soundVolume=_soundVolume - In the implementation block
+(id)toneSoundWithIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3 ;
+(id)songSoundWithIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3 ;
+(id)defaultSoundForCategory:(unsigned long long)arg1 ;
+(id)_loadDefaultAlarmSound;
+(id)_loadDefaultTimerSound;
+(void)_saveDefaultAlarmSound:(id)arg1 ;
+(void)_saveDefaultTimerSound:(id)arg1 ;
+(void)setDefaultSound:(id)arg1 forCategory:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)soundType;
-(NSNumber *)soundVolume;
-(id)initWithSound:(id)arg1 usingVolume:(id)arg2 ;
-(id)unSoundIsGoToBed:(BOOL)arg1 isEarlyWakeUp:(BOOL)arg2 isWakeUp:(BOOL)arg3 ;
-(NSNumber *)mediaItemIdentifier;
-(id)unSound;
-(id)initWithToneIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3 ;
-(id)initWithMediaItemIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3 ;
-(BOOL)isEqualToSound:(id)arg1 ;
-(BOOL)interruptAudio;
-(id)previewWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updatePreview:(id)arg1 ;
-(NSString *)toneIdentifier;
-(NSString *)vibrationIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

