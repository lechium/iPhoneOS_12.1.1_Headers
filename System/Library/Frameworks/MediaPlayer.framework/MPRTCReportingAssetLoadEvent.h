/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

@interface MPRTCReportingAssetLoadEvent : MPRTCReportingEvent {

	double _duration;
	NSError* _error;
	NSString* _siriSessionIdentifier;

}

@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * siriSessionIdentifier;              //@synthesize siriSessionIdentifier=_siriSessionIdentifier - In the implementation block
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
-(id)newRTCReportingPayloadDictionary;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

