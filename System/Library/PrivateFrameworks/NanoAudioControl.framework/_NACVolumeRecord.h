/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface _NACVolumeRecord : NSObject <NSSecureCoding> {

	NSMutableSet* _observers;
	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	float _volumeValue;
	float _EUVolumeLimit;

}

@property (assign,nonatomic) float volumeValue;                                                        //@synthesize volumeValue=_volumeValue - In the implementation block
@property (assign,getter=isVolumeControlAvailable,nonatomic) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (nonatomic,readonly) NSMutableSet * observers; 
+(BOOL)supportsSecureCoding;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(float)volumeValue;
-(BOOL)isVolumeControlAvailable;
-(float)EUVolumeLimit;
-(void)setVolumeValue:(float)arg1 ;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableSet *)observers;
@end

