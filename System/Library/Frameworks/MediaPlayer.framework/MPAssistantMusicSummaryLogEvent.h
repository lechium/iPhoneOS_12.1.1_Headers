/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent {

	double _blockingSecureKeyLoadDuration;
	NSNumber* _perceivedTotalStartupTime;
	double _tracklistLoadDuration;

}

@property (assign,nonatomic) double blockingSecureKeyLoadDuration;              //@synthesize blockingSecureKeyLoadDuration=_blockingSecureKeyLoadDuration - In the implementation block
@property (nonatomic,copy) NSNumber * perceivedTotalStartupTime;                //@synthesize perceivedTotalStartupTime=_perceivedTotalStartupTime - In the implementation block
@property (assign,nonatomic) double tracklistLoadDuration;                      //@synthesize tracklistLoadDuration=_tracklistLoadDuration - In the implementation block
-(long long)eventCode;
-(id)eventPayload;
-(double)blockingSecureKeyLoadDuration;
-(void)setBlockingSecureKeyLoadDuration:(double)arg1 ;
-(NSNumber *)perceivedTotalStartupTime;
-(void)setPerceivedTotalStartupTime:(NSNumber *)arg1 ;
-(double)tracklistLoadDuration;
-(void)setTracklistLoadDuration:(double)arg1 ;
@end

