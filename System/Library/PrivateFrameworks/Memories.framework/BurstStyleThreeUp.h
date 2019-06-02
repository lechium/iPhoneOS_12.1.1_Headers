/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/BurstClipStylePhoto.h>

@class UIColor;

@interface BurstStyleThreeUp : BurstClipStylePhoto {

	UIColor* _gapColor;
	UIColor* _popBackgroundColor;

}

@property (nonatomic,retain) UIColor * gapColor;                        //@synthesize gapColor=_gapColor - In the implementation block
@property (nonatomic,retain) UIColor * popBackgroundColor;              //@synthesize popBackgroundColor=_popBackgroundColor - In the implementation block
@property (assign,nonatomic) int transitionFrameDuration; 
-(BOOL)isSupported;
-(id)transitionName;
-(double)idealDuration;
-(void)setGapColor:(UIColor *)arg1 ;
-(UIColor *)gapColor;
-(unsigned long long)numberOfAvailableClips;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(double)idealContainedClipDuration;
-(double)maximumContainedClipDuration;
-(unsigned long long)numberOfPossibleClips;
-(UIColor *)popBackgroundColor;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(double)minimumContainedClipDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)setPopBackgroundColor:(UIColor *)arg1 ;
-(double)maximumDuration;
@end
