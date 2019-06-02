/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPaymentPass, UIImageView, UILabel, UIButton, UIActivityIndicatorView;

@interface PKPaymentSetupAddToWatchOfferView : UIView {

	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _watchImageView;
	UIImageView* _passImageView;
	UILabel* _instructionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _openAppButton;
	UIActivityIndicatorView* _openAppSpinner;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                  //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * watchImageView;                          //@synthesize watchImageView=_watchImageView - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * passImageView;                           //@synthesize passImageView=_passImageView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * instructionLabel;                            //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * subtitleLabel;                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain,readonly) UIButton * openAppButton;                              //@synthesize openAppButton=_openAppButton - In the implementation block
@property (nonatomic,retain,readonly) UIActivityIndicatorView * openAppSpinner;              //@synthesize openAppSpinner=_openAppSpinner - In the implementation block
-(UILabel *)subtitleLabel;
-(PKPaymentPass *)pass;
-(CGSize)_passImageSize;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 ;
-(UIButton *)openAppButton;
-(UIActivityIndicatorView *)openAppSpinner;
-(id)_watchImage;
-(double)_instructionFontSize;
-(double)_instructionYCoordinate;
-(double)_passImageYCoordinate;
-(id)_watchImageName;
-(UIImageView *)watchImageView;
-(UIImageView *)passImageView;
-(UILabel *)instructionLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(long long)context;
@end
