/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNTransportButton, UIImageView, UIColor, UIView;

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {

	CNTransportButton* _transportIcon1;
	CNTransportButton* _transportIcon2;
	CNTransportButton* _transportIcon3;
	UIImageView* _starView;
	BOOL _allowsActions;
	BOOL _shouldShowBadge;
	BOOL _shouldShowTransportButtons;
	UIImageView* _standardStarView;
	UIColor* _actionsColor;
	UIView* _badgeView;

}

@property (nonatomic,retain) UIView * badgeView;                                       //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                       //@synthesize allowsActions=_allowsActions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowStar; 
@property (assign,nonatomic) BOOL shouldShowBadge;                                     //@synthesize shouldShowBadge=_shouldShowBadge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTransportButtons;                          //@synthesize shouldShowTransportButtons=_shouldShowTransportButtons - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon1; 
@property (nonatomic,readonly) CNTransportButton * transportIcon2; 
@property (nonatomic,readonly) CNTransportButton * transportIcon3; 
@property (nonatomic,readonly) CNTransportButton * standardTransportIcon; 
@property (nonatomic,readonly) UIImageView * standardStarView;                         //@synthesize standardStarView=_standardStarView - In the implementation block
@property (nonatomic,readonly) UIView * standardBadgeView; 
@property (nonatomic,retain) UIColor * actionsColor;                                   //@synthesize actionsColor=_actionsColor - In the implementation block
+(void)_updateStarImageForView:(id)arg1 ;
+(id)standardStarView;
-(id)variableConstraints;
-(id)rightMostView;
-(void)setCardGroupItem:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)setActionsColor:(UIColor *)arg1 ;
-(void)setShouldShowBadge:(BOOL)arg1 ;
-(BOOL)allowsActions;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setShouldShowTransportButtons:(BOOL)arg1 ;
-(void)transportButtonClicked:(id)arg1 ;
-(CNTransportButton *)transportIcon1;
-(CNTransportButton *)transportIcon2;
-(CNTransportButton *)transportIcon3;
-(BOOL)shouldShowTransportButtons;
-(void)updateTransportButtons;
-(BOOL)shouldShowStar;
-(void)updateStarIcon;
-(UIView *)standardBadgeView;
-(void)updateLabelNeedingHuggingContent;
-(CNTransportButton *)standardTransportIcon;
-(UIImageView *)standardStarView;
-(UIColor *)actionsColor;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)badgeView;
-(BOOL)shouldShowBadge;
-(void)setBadgeView:(UIView *)arg1 ;
@end

