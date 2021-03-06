/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSArray, NSDate;

@interface VSPreferencesInterface : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                   //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSArray * autoDownloadedVoices; 
@property (nonatomic,retain) NSDate * lastTTSRequestDate; 
+(id)defaultInstance;
-(NSArray *)autoDownloadedVoices;
-(void)setAutoDownloadedVoices:(NSArray *)arg1 ;
-(void)setLastTTSRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastTTSRequestDate;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(id)initWithSuiteName:(id)arg1 ;
@end

