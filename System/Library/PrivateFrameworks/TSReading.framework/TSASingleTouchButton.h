/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton {

	UIImage* _touchImage;
	BOOL _showsTouchOnTopWhenHighlighted;

}

@property (assign,nonatomic) BOOL showsTouchOnTopWhenHighlighted;              //@synthesize showsTouchOnTopWhenHighlighted=_showsTouchOnTopWhenHighlighted - In the implementation block
@property (nonatomic,retain) UIImage * touchImage;                             //@synthesize touchImage=_touchImage - In the implementation block
-(UIImage *)touchImage;
-(CGPoint)_pressFeedbackPosition;
-(id)_pressFeedbackImage;
-(void)setShowsTouchOnTopWhenHighlighted:(BOOL)arg1 ;
-(void)setTouchImage:(UIImage *)arg1 ;
-(BOOL)showsTouchOnTopWhenHighlighted;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end
