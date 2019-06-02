/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, UIBlurEffect, NSTimer;

@interface MUPDFPageLabelView : UIView {

	UILabel* _label;
	UIVisualEffectView* _blurView;
	UIBlurEffect* _blurEffect;
	NSTimer* _timer;
	unsigned long long currentPageIndex;

}

@property (getter=isTimerInstalled,nonatomic,readonly) BOOL timerInstalled; 
@property (assign,nonatomic) unsigned long long currentPageIndex; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)clearTimer;
-(double)_fadeOutDuration;
-(void)fadeOut;
-(BOOL)isTimerInstalled;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(double)_fadeOutDelay;
@end
