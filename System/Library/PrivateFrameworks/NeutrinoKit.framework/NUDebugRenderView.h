/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <NeutrinoKit/NURenderView.h>

@class UILongPressGestureRecognizer, CMMotionManager;

@interface NUDebugRenderView : NURenderView {

	UILongPressGestureRecognizer* _doubleTap;
	BOOL _showDebug;
	CMMotionManager* _motionManager;

}
-(void)_debugToggle:(id)arg1 ;
-(void)_stopDeviceMotion;
-(void)_startDeviceMotion;
-(void)_setupDeviceMotion;
-(void)_resetOrientation:(id)arg1 ;
-(void)_orientWithX:(double)arg1 andY:(double)arg2 ;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
@end
