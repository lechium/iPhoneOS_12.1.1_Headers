/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIPlaybackUtilities : NSObject
+(long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 ;
+(double)playedThresholdTimeForDuration:(double)arg1 ;
+(long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(BOOL)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(BOOL)arg5 ;
+(double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2 ;
@end

