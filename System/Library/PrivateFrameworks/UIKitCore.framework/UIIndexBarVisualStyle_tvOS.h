/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarVisualStyle_Base.h>

@class UIView, NSMutableArray;

@interface UIIndexBarVisualStyle_tvOS : UIIndexBarVisualStyle_Base {

	UIView* _indicatorView;
	double _preferredIndicatorWidth;
	NSMutableArray* _backgroundLabels;
	NSMutableArray* _foregroundLabels;
	UIView* _foregroundWrapperView;
	UIView* _foregroundMaskView;
	long long _deflectedIndex;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(id)initWithView:(id)arg1 ;
-(void)_showNormalFocusProminence;
-(void)_updateColors;
-(void)_showReducedFocusProminence;
-(void)_createLabels;
-(id)_indicatorShadowPath;
-(id)_backgroundLabelTextColor;
-(id)_foregroundFont;
-(BOOL)_shouldUseDarkAppearance;
-(BOOL)overlay;
-(void)highlightedIndexUpdated;
-(void)displayEntriesUpdated;
-(void)deflectionUpdated;
-(void)deflectionReset:(BOOL)arg1 ;
-(double)minLineHeight;
-(void)highlightStyleUpdated;
@end

