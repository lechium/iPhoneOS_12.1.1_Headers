/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/NCMaterialsAdjusting.h>

@class NSString, UIView, UIStackView, NCNotificationListCellActionButton, _UIStatesFeedbackGenerator;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, NCMaterialsAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	BOOL _highlightDefaultActionButton;
	BOOL _didPlayHaptic;
	double _stretchedWidth;
	double _defaultWidth;
	NSString* _backgroundGroupName;
	UIView* _clippingView;
	UIStackView* _buttonsStackView;
	NCNotificationListCellActionButton* _defaultActionButton;
	long long _materialRecipe;
	unsigned long long _backgroundMaterialOptions;
	unsigned long long _overlayMaterialOptions;
	_UIStatesFeedbackGenerator* _defaultActionFeedbackGenerator;

}

@property (nonatomic,retain) UIView * clippingView;                                                    //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UIStackView * buttonsStackView;                                           //@synthesize buttonsStackView=_buttonsStackView - In the implementation block
@property (nonatomic,retain) NCNotificationListCellActionButton * defaultActionButton;                 //@synthesize defaultActionButton=_defaultActionButton - In the implementation block
@property (assign,nonatomic) long long materialRecipe;                                                 //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundMaterialOptions;                             //@synthesize backgroundMaterialOptions=_backgroundMaterialOptions - In the implementation block
@property (assign,nonatomic) unsigned long long overlayMaterialOptions;                                //@synthesize overlayMaterialOptions=_overlayMaterialOptions - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * defaultActionFeedbackGenerator;              //@synthesize defaultActionFeedbackGenerator=_defaultActionFeedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL didPlayHaptic;                                                       //@synthesize didPlayHaptic=_didPlayHaptic - In the implementation block
@property (assign,nonatomic) BOOL highlightDefaultActionButton;                                        //@synthesize highlightDefaultActionButton=_highlightDefaultActionButton - In the implementation block
@property (assign,nonatomic) double stretchedWidth;                                                    //@synthesize stretchedWidth=_stretchedWidth - In the implementation block
@property (nonatomic,readonly) double defaultWidth;                                                    //@synthesize defaultWidth=_defaultWidth - In the implementation block
@property (nonatomic,copy) NSString * backgroundGroupName;                                             //@synthesize backgroundGroupName=_backgroundGroupName - In the implementation block
@property (nonatomic,readonly) BOOL shouldPerformDefaultAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                   //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
+(id)_actionButtonDescriptionsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3 ;
+(id)_openButtonDescriptionForNotificationRequest:(id)arg1 cell:(id)arg2 ;
-(BOOL)shouldPerformDefaultAction;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)setBackgroundGroupName:(NSString *)arg1 ;
-(NSString *)backgroundGroupName;
-(void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3 ;
-(long long)materialRecipe;
-(void)setMaterialRecipe:(long long)arg1 ;
-(unsigned long long)backgroundMaterialOptions;
-(void)setBackgroundMaterialOptions:(unsigned long long)arg1 ;
-(unsigned long long)overlayMaterialOptions;
-(void)setOverlayMaterialOptions:(unsigned long long)arg1 ;
-(void)setHighlightDefaultActionButton:(BOOL)arg1 ;
-(void)configureOpenActionButtonForNotificationRequest:(id)arg1 cell:(id)arg2 ;
-(void)configureCellActionButtonsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3 ;
-(void)setStretchedWidth:(double)arg1 ;
-(void)_configureClippingViewIfNecessary;
-(void)_configureButtonsStackViewIfNecessary;
-(void)_layoutButtonsStackView;
-(void)_layoutClippingView;
-(void)_configureActionButtonsForActionButtonDescriptions:(id)arg1 cell:(id)arg2 ;
-(double)_maxAllowedButtonWidth;
-(void)setDefaultActionButton:(NCNotificationListCellActionButton *)arg1 ;
-(UIStackView *)buttonsStackView;
-(void)_configureDefaultWidth;
-(NCNotificationListCellActionButton *)defaultActionButton;
-(void)_hideNonDefaultActionButtons;
-(void)_revealNonDefaultActionButtons;
-(double)stretchedWidth;
-(void)_performNonDefaultActionButtonsHideRevealAnimation:(/*^block*/id)arg1 ;
-(void)_actuateFeedbackForDefaultActionLockedIfNecessary;
-(void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
-(_UIStatesFeedbackGenerator *)defaultActionFeedbackGenerator;
-(void)_configureDefaultActionFeedbackIfNecessary;
-(BOOL)didPlayHaptic;
-(void)setDidPlayHaptic:(BOOL)arg1 ;
-(BOOL)highlightDefaultActionButton;
-(void)setButtonsStackView:(UIStackView *)arg1 ;
-(void)setDefaultActionFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(double)defaultWidth;
@end

