/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBSoundDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isRingerMuted,nonatomic) BOOL ringerMuted; 
@property (nonatomic,retain) NSString * calendarAlarmPath; 
@property (nonatomic,readonly) BOOL vibrateWhenRinging; 
@property (nonatomic,readonly) BOOL vibrateWhenSilent; 
@property (nonatomic,readonly) BOOL playSoundOnBasebandReset; 
@property (nonatomic,readonly) BOOL playSoundOnDeviceWake; 
-(void)setVibrateWhenRinging:(BOOL)arg1 ;
-(BOOL)vibrateWhenRinging;
-(void)setRingerMuted:(BOOL)arg1 ;
-(BOOL)isRingerMuted;
-(void)setVibrateWhenSilent:(BOOL)arg1 ;
-(BOOL)vibrateWhenSilent;
-(void)setCalendarAlarmPath:(NSString *)arg1 ;
-(NSString *)calendarAlarmPath;
-(void)setPlaySoundOnDeviceWake:(BOOL)arg1 ;
-(BOOL)playSoundOnDeviceWake;
-(void)setPlaySoundOnBasebandReset:(BOOL)arg1 ;
-(BOOL)playSoundOnBasebandReset;
-(void)_bindAndRegisterDefaults;
@end
