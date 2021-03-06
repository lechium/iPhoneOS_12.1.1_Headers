/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class UIView, SKUIRedeemTextField, _UIBackdropView, UIImage, NSString;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {

	id<SKUIRedeemCameraViewDelegate> _delegate;
	UIView* _overlay;
	UIView* _redeemerView;
	SKUIRedeemTextField* _textField;
	_UIBackdropView* _textFieldSafeAreaBackdrop;
	CGRect _keyboardRect;
	BOOL _enabled;

}

@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClientContext:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 ;
-(void)_tapGestureAction:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)_pauseRedeemer;
-(void)_hideKeyboard;
-(void)_resumeRedeemer;
-(void)keyboardWillHide:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUIRedeemCameraViewDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(id<SKUIRedeemCameraViewDelegate>)delegate;
-(void)start;
-(BOOL)enabled;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)showKeyboard;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

