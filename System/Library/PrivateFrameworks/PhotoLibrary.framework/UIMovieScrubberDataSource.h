/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberDataSource <NSObject>
@optional
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3;

@required
-(double)movieScrubberDuration:(id)arg1;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1;

@end

