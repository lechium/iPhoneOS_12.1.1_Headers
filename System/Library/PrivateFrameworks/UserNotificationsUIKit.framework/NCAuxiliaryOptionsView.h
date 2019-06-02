/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCAuxiliaryOptionsSupporting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/NCMaterialsAdjusting.h>

@class NSString, NSArray, UILabel, MTMaterialView, NSStringDrawingContext, BSUIFontProvider;

@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, PLContentSizeCategoryAdjusting, NCMaterialsAdjusting> {

	UILabel* _optionsSummaryLabel;
	MTMaterialView* _overlayView;
	double _widthForCachedLayoutInfo;
	unsigned long long _cachedSummaryLabelNumberOfLines;
	double _cachedSummaryLabelHeight;
	NSStringDrawingContext* _drawingContext;
	BOOL _auxiliaryOptionsVisible;
	BOOL _adjustsFontForContentSizeCategory;
	NSArray* _optionButtons;
	BSUIFontProvider* _fontProvider;
	long long _materialRecipe;
	unsigned long long _materialOptions;

}

@property (nonatomic,retain) BSUIFontProvider * fontProvider;                       //@synthesize fontProvider=_fontProvider - In the implementation block
@property (nonatomic,readonly) long long materialRecipe;                            //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (nonatomic,readonly) unsigned long long materialOptions;                  //@synthesize materialOptions=_materialOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons;                             //@synthesize optionButtons=_optionButtons - In the implementation block
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible;                          //@synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
-(void)nc_performDeferredActionsIfNeeded;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(CGSize)arg1 ;
-(void)_configureOverlayIfNecessary;
-(void)_layoutOptionsSummaryTextLabel;
-(void)_layoutOptionsButtons;
-(void)_configureOptionsSummaryTextLabelIfNecessary;
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)_configureOptionsButtonsWithCount:(unsigned long long)arg1 ;
-(void)_updateTextAttributesForOptionsSummaryLabel;
-(void)_updateTextAttributesForOptionButton:(id)arg1 ;
-(void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3 ;
-(BSUIFontProvider *)fontProvider;
-(id)_preferredFontForOptionsSummaryTextLabel;
-(id)_preferredFontForOptionButton;
-(id)_newOptionsButton;
-(void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(CGSize)arg1 ;
-(double)_summaryLabelHeightForBoundsSize:(CGSize)arg1 ;
-(CGSize)_optionsSummaryLabelSizeThatFits:(CGSize)arg1 ;
-(void)setOptionsSummaryText:(NSString *)arg1 ;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1 ;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1 ;
-(void)setFontProvider:(BSUIFontProvider *)arg1 ;
-(long long)materialRecipe;
-(unsigned long long)materialOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
@end

