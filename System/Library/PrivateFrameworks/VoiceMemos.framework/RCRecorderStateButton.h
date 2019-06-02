/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, CALayer;

@interface RCRecorderStateButton : UIButton {

	UIColor* _outerColor;
	CALayer* _innerLayer;
	UIColor* _innerColor;
	BOOL _realEnabledState;
	BOOL _isForceDisabled;
	long long _AVCaptureState;

}

@property (assign,nonatomic) long long AVCaptureState;              //@synthesize AVCaptureState=_AVCaptureState - In the implementation block
@property (assign,nonatomic) BOOL isForceDisabled;                  //@synthesize isForceDisabled=_isForceDisabled - In the implementation block
-(BOOL)isForceDisabled;
-(double)_currentStateTopLevelDrawingAlpha;
-(void)_drawOuterCircle;
-(double)_currentStateInnerDrawingAlpha;
-(void)setAVCaptureState:(long long)arg1 ;
-(void)setIsForceDisabled:(BOOL)arg1 ;
-(long long)AVCaptureState;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

