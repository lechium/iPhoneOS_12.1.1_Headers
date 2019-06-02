/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject {

	HUGridCameraCell* _sourceCameraCell;

}

@property (nonatomic,readonly) HUGridCameraCell * sourceCameraCell;              //@synthesize sourceCameraCell=_sourceCameraCell - In the implementation block
-(id)initWithSourceCameraCell:(id)arg1 ;
-(CGRect)_toViewFinalFrame:(id)arg1 ;
-(CGRect)_adjustPresentedViewFrame:(CGRect)arg1 forTransitionContext:(id)arg2 ;
-(HUGridCameraCell *)sourceCameraCell;
-(double)transitionDuration:(id)arg1 ;
@end

