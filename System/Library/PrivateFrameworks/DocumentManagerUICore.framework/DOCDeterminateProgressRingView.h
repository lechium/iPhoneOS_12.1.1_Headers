/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface DOCDeterminateProgressRingView : UIView {

	CALayer* _squareLayer;
	BOOL _canShowStopButton;
	double _progress;

}

@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL canShowStopButton;              //@synthesize canShowStopButton=_canShowStopButton - In the implementation block
+(Class)layerClass;
-(void)_updateShapePath;
-(void)setCanShowStopButton:(BOOL)arg1 ;
-(BOOL)canShowStopButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)progress;
@end
