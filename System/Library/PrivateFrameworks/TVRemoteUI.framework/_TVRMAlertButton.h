/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class UIView;

@interface _TVRMAlertButton : UIButton {

	BOOL _showingBackgroundEffect;
	UIView* _burnView;
	UIView* _plusDView;

}

@property (assign,nonatomic) BOOL showingBackgroundEffect;              //@synthesize showingBackgroundEffect=_showingBackgroundEffect - In the implementation block
@property (nonatomic,retain) UIView * burnView;                         //@synthesize burnView=_burnView - In the implementation block
@property (nonatomic,retain) UIView * plusDView;                        //@synthesize plusDView=_plusDView - In the implementation block
-(void)setPlusDView:(UIView *)arg1 ;
-(UIView *)plusDView;
-(void)setBurnView:(UIView *)arg1 ;
-(void)setShowingBackgroundEffect:(BOOL)arg1 ;
-(BOOL)showingBackgroundEffect;
-(UIView *)burnView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

