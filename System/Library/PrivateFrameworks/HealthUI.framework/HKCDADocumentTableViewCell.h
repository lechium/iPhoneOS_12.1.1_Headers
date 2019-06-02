/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HKCDADocumentTableViewCellDelegate;
@class _HKDocumentImageView, UILabel, NSArray, UIStackView, HKAdjustableTapTargetButton;

@interface HKCDADocumentTableViewCell : UITableViewCell {

	_HKDocumentImageView* _documentImageView;
	UILabel* _titleLabel;
	NSArray* _cellLabels;
	UIStackView* _imageLabelStack;
	BOOL _showsCheckbox;
	id<HKCDADocumentTableViewCellDelegate> _delegate;
	HKAdjustableTapTargetButton* _checkboxButton;

}

@property (nonatomic,retain) HKAdjustableTapTargetButton * checkboxButton;                 //@synthesize checkboxButton=_checkboxButton - In the implementation block
@property (assign,nonatomic) BOOL showsCheckbox;                                           //@synthesize showsCheckbox=_showsCheckbox - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (nonatomic,retain) id<HKCDADocumentTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setShowsCheckbox:(BOOL)arg1 ;
-(void)setCellValuesForDocumentSample:(id)arg1 ;
-(void)_setupCellStructure;
-(void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3 ;
-(void)_selectedCheckbox:(id)arg1 ;
-(id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 whiteLevel:(double)arg3 flexibleHeight:(BOOL)arg4 ;
-(BOOL)showsCheckbox;
-(HKAdjustableTapTargetButton *)checkboxButton;
-(void)setCheckboxButton:(HKAdjustableTapTargetButton *)arg1 ;
-(void)setDelegate:(id<HKCDADocumentTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<HKCDADocumentTableViewCellDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)_updateForCurrentSizeCategory;
@end

