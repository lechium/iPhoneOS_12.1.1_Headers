/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISVitalityFilter.h>

@interface ISVitalityAutoplayFilter : ISVitalityFilter {

	long long __state;

}

@property (assign,setter=_setState:,nonatomic) long long _state;              //@synthesize _state=__state - In the implementation block
-(void)inputDidChange;
-(void)_startAutoplay;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
@end

