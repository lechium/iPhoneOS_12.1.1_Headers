/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement {

	CALayer* _knobLayer;
	ICDocCamImageQuadEditOverlay* _overlayView;

}

@property (assign,nonatomic,__weak) CALayer * knobLayer;                                     //@synthesize knobLayer=_knobLayer - In the implementation block
@property (assign,nonatomic,__weak) ICDocCamImageQuadEditOverlay * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(CALayer *)knobLayer;
-(void)setKnobLayer:(CALayer *)arg1 ;
-(id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityViewIsModal;
-(void)setOverlayView:(ICDocCamImageQuadEditOverlay *)arg1 ;
-(ICDocCamImageQuadEditOverlay *)overlayView;
@end

