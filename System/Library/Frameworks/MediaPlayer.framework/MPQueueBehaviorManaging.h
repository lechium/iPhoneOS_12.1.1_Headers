/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPQueueBehaviorManaging <NSObject>
@property (nonatomic,readonly) BOOL allowsUserVisibleUpcomingItems; 
@property (nonatomic,readonly) BOOL canSeek; 
@property (nonatomic,readonly) BOOL canSkipToPreviousItem; 
@property (nonatomic,readonly) long long playbackMode; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
@required
-(long long)playbackMode;
-(BOOL)canSkipToPreviousItemForItem:(id)arg1;
-(BOOL)canSkipItem:(id)arg1;
-(BOOL)allowsUserVisibleUpcomingItems;
-(BOOL)canSkipToPreviousItem;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)canSeek;

@end
