/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton {

	UIImageView* _lockedImageView;
	UIImageView* _unlockedImageView;
	BOOL _wantsEncryption;
	BOOL _canEncrypt;
	UIEdgeInsets touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets; 
@property (assign,nonatomic) BOOL wantsEncryption;                  //@synthesize wantsEncryption=_wantsEncryption - In the implementation block
@property (assign,nonatomic) BOOL canEncrypt;                       //@synthesize canEncrypt=_canEncrypt - In the implementation block
-(void)setWantsEncryption:(BOOL)arg1 canEncrypt:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateButtonAppearance;
-(void)_updateButtonAppearanceAnimated:(BOOL)arg1 ;
-(BOOL)wantsEncryption;
-(BOOL)canEncrypt;
-(void)_closeLock;
-(void)_openLock;
-(void)setWantsEncryption:(BOOL)arg1 ;
-(void)setCanEncrypt:(BOOL)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
@end

