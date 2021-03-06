/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SGUISuggestionTableViewCellDelegate;
@class UIImageView, UILabel, UIButton, NSLayoutConstraint, SGRealtimeContact;

@interface SGUIContactSuggestionTableViewCell : UITableViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _ignoreButton;
	UIButton* _addUpdateButton;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelBaselineDeltaConstraint;
	NSLayoutConstraint* _interLabelAndButtonBaselineConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;
	SGRealtimeContact* _realtimeContact;
	id<SGUISuggestionTableViewCellDelegate> _delegate;

}

@property (nonatomic,retain) SGRealtimeContact * realtimeContact;                                  //@synthesize realtimeContact=_realtimeContact - In the implementation block
@property (assign,nonatomic,__weak) id<SGUISuggestionTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
+(id)descriptionFont;
+(double)interLabelAndButtonBaselineDeltaConstant;
+(id)buttonTitleFont;
+(id)actionButtonTitleForContact:(id)arg1 ;
+(id)titleFont;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setRealtimeContact:(SGRealtimeContact *)arg1 ;
-(void)_ignoreButtonTapped:(id)arg1 ;
-(void)_addUpdateButtonTapped:(id)arg1 ;
-(void)_setLabelAndButtonFonts;
-(SGRealtimeContact *)realtimeContact;
-(void)dealloc;
-(void)setDelegate:(id<SGUISuggestionTableViewCellDelegate>)arg1 ;
-(id<SGUISuggestionTableViewCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

