/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSError, UIButton, UILabel, VSFontCenter;

@interface VSErrorViewController : UIViewController {

	BOOL _recoveryDestructive;
	NSError* _error;
	UIButton* _recoveryButton;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                             //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * recoveryButton;                                          //@synthesize recoveryButton=_recoveryButton - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                          //@synthesize fontCenter=_fontCenter - In the implementation block
@property (nonatomic,retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (assign,getter=isRecoveryDestructive,nonatomic) BOOL recoveryDestructive;              //@synthesize recoveryDestructive=_recoveryDestructive - In the implementation block
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)_updateText;
-(UIButton *)recoveryButton;
-(VSFontCenter *)fontCenter;
-(void)_recoveryButtonPressed:(id)arg1 ;
-(BOOL)isRecoveryDestructive;
-(void)setRecoveryButton:(UIButton *)arg1 ;
-(void)setRecoveryDestructive:(BOOL)arg1 ;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

