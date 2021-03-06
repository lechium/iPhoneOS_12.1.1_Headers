/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVButton.h>

@class NSString, SVAutoLayoutLabel, NSLayoutConstraint;

@interface SVAccessoryItemButton : SVButton {

	NSString* _title;
	NSString* _subtitle;
	SVAutoLayoutLabel* _titleLabel;
	SVAutoLayoutLabel* _subtitleLabel;
	NSLayoutConstraint* _titleLabelTopConstraint;
	NSLayoutConstraint* _subtitleLabelBottomConstraint;

}

@property (nonatomic,readonly) SVAutoLayoutLabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) SVAutoLayoutLabel * subtitleLabel;                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;                    //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleLabelBottomConstraint;              //@synthesize subtitleLabelBottomConstraint=_subtitleLabelBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(SVAutoLayoutLabel *)subtitleLabel;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateFonts;
-(void)preferredContentSizeCategoryDidChange;
-(void)determineNumberOfLines;
-(void)setSubtitleLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)subtitleLabelBottomConstraint;
-(id)accessibilityLabel;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(SVAutoLayoutLabel *)titleLabel;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
@end

