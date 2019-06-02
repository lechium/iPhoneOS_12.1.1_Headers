/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UISegmentedControl, UIKBThemedView;

@interface UIKeyboardCandidateSortControl : UIView {

	int _candidatesVisualStyle;
	BOOL _legacyAlertAppearance;
	UISegmentedControl* _segmentedControl;
	UIKBThemedView* _themedView;
	UIEdgeInsets _additionalInsets;

}

@property (nonatomic,retain) UIKBThemedView * themedView;                //@synthesize themedView=_themedView - In the implementation block
@property (readonly) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (readonly) BOOL shouldShowTitles; 
@property (assign,nonatomic) UIEdgeInsets additionalInsets;              //@synthesize additionalInsets=_additionalInsets - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)layoutSubviews;
-(UISegmentedControl *)segmentedControl;
-(void)_setRenderConfig:(id)arg1 ;
-(UIKBThemedView *)themedView;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(void)selectPreviousSegment;
-(void)selectNextSegment;
-(BOOL)shouldShowTitles;
-(void)setSortControlTitles:(id)arg1 ;
-(void)updateTitleTextAttributes;
-(void)addSegmentedControlWithFrame:(CGRect)arg1 ;
-(BOOL)needsToUpdateSortControlForTitles:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(BOOL)arg3 ;
-(void)setAdditionalPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)additionalInsets;
-(void)setAdditionalInsets:(UIEdgeInsets)arg1 ;
@end
