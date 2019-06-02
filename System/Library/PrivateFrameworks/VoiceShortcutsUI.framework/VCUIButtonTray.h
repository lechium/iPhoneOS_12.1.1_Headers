/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol VCUIButtonTrayDelegate;
@class VCUIRecordButton, UIButton, UILabel, _UIBackdropView, NSLayoutConstraint;

@interface VCUIButtonTray : UIView {

	BOOL _showButtonDescription;
	id<VCUIButtonTrayDelegate> _delegate;
	VCUIRecordButton* _recordButton;
	UIButton* _typeToSiriButton;
	UILabel* _buttonDescriptionLabel;
	_UIBackdropView* _trayBackdrop;
	NSLayoutConstraint* _buttonDescriptionLayoutConstraint;

}

@property (nonatomic,retain) UILabel * buttonDescriptionLabel;                                    //@synthesize buttonDescriptionLabel=_buttonDescriptionLabel - In the implementation block
@property (nonatomic,retain) _UIBackdropView * trayBackdrop;                                      //@synthesize trayBackdrop=_trayBackdrop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonDescriptionLayoutConstraint;              //@synthesize buttonDescriptionLayoutConstraint=_buttonDescriptionLayoutConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<VCUIButtonTrayDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VCUIRecordButton * recordButton;                                     //@synthesize recordButton=_recordButton - In the implementation block
@property (nonatomic,retain) UIButton * typeToSiriButton;                                         //@synthesize typeToSiriButton=_typeToSiriButton - In the implementation block
@property (assign,nonatomic) BOOL showButtonDescription;                                          //@synthesize showButtonDescription=_showButtonDescription - In the implementation block
-(VCUIRecordButton *)recordButton;
-(void)setRecordButton:(VCUIRecordButton *)arg1 ;
-(void)setDelegate:(id<VCUIButtonTrayDelegate>)arg1 ;
-(id<VCUIButtonTrayDelegate>)delegate;
-(void)setTrayBackdrop:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)trayBackdrop;
-(void)setButtonDescriptionLabel:(UILabel *)arg1 ;
-(void)setTypeToSiriButton:(UIButton *)arg1 ;
-(UILabel *)buttonDescriptionLabel;
-(void)setButtonDescriptionLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateConstraintsForButtonDescription;
-(BOOL)showButtonDescription;
-(NSLayoutConstraint *)buttonDescriptionLayoutConstraint;
-(id)initWithDelegate:(id)arg1 buttonDescription:(id)arg2 ;
-(void)updateForContentScrollingUnder:(BOOL)arg1 ;
-(void)setShowButtonDescription:(BOOL)arg1 ;
-(UIButton *)typeToSiriButton;
@end
