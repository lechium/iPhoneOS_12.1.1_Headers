/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, NSLayoutConstraint;

@interface SVMoreFromButton : UIControl {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelBottomConstraint;
	NSLayoutConstraint* _imageViewHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * titleLabelBottomConstraint;              //@synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewHeightConstraint;               //@synthesize imageViewHeightConstraint=_imageViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)updateFonts;
-(void)preferredContentSizeCategoryDidChange;
-(void)setImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageViewHeightConstraint;
-(void)setTitleLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelBottomConstraint;
-(void)determineNumberOfLines;
-(void)updateImageViewHeight;
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

