/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegionMapEntry.h>

@class UIFocusContainerGuide;

@interface _UIFocusContainerGuideMapEntry : _UIFocusRegionMapEntry {

	UIFocusContainerGuide* _focusContainerGuide;
	double _axisAlignedDistanceFromFocusedRect;
	CGRect _focusContainmentFrame;

}

@property (assign,nonatomic,__weak) UIFocusContainerGuide * focusContainerGuide;              //@synthesize focusContainerGuide=_focusContainerGuide - In the implementation block
@property (assign,nonatomic) CGRect focusContainmentFrame;                                    //@synthesize focusContainmentFrame=_focusContainmentFrame - In the implementation block
@property (assign,nonatomic) double axisAlignedDistanceFromFocusedRect;                       //@synthesize axisAlignedDistanceFromFocusedRect=_axisAlignedDistanceFromFocusedRect - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFocusContainerGuide *)focusContainerGuide;
-(void)setFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(void)setFocusContainmentFrame:(CGRect)arg1 ;
-(CGRect)focusContainmentFrame;
-(void)setAxisAlignedDistanceFromFocusedRect:(double)arg1 ;
-(double)axisAlignedDistanceFromFocusedRect;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 ;
-(id)visualRepresentationColor;
@end

