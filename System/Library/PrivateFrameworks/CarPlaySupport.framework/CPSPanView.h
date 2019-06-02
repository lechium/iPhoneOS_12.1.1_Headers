/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CPSPanViewDelegate;
@class CPSPanButton, NSString;

@interface CPSPanView : UIView <UIGestureRecognizerDelegate> {

	CPSPanButton* _panLeftButton;
	CPSPanButton* _panRightButton;
	CPSPanButton* _panUpButton;
	CPSPanButton* _panDownButton;
	id<CPSPanViewDelegate> _delegate;

}

@property (nonatomic,readonly) CPSPanButton * panLeftButton;                      //@synthesize panLeftButton=_panLeftButton - In the implementation block
@property (nonatomic,readonly) CPSPanButton * panRightButton;                     //@synthesize panRightButton=_panRightButton - In the implementation block
@property (nonatomic,readonly) CPSPanButton * panUpButton;                        //@synthesize panUpButton=_panUpButton - In the implementation block
@property (nonatomic,readonly) CPSPanButton * panDownButton;                      //@synthesize panDownButton=_panDownButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPanViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double sideButtonTopInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_handleButtonTapped:(id)arg1 ;
-(CPSPanButton *)panRightButton;
-(double)sideButtonTopInset;
-(CPSPanButton *)panLeftButton;
-(CPSPanButton *)panUpButton;
-(CPSPanButton *)panDownButton;
-(void)setDelegate:(id<CPSPanViewDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CPSPanViewDelegate>)delegate;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
