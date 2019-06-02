/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBorderLineView.h>

@class UIStackView, NSMutableArray, UIView, NSLayoutConstraint, NSArray, UIColor;

@interface HKLegendView : HKBorderLineView {

	UIStackView* _mainStack;
	NSMutableArray* _leftEntryViews;
	NSMutableArray* _rightEntryViews;
	UIView* _topDividerView;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSArray* _leftEntries;
	NSArray* _rightEntries;
	UIColor* _topBorderColor;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) NSArray * leftEntries;               //@synthesize leftEntries=_leftEntries - In the implementation block
@property (nonatomic,readonly) NSArray * rightEntries;              //@synthesize rightEntries=_rightEntries - In the implementation block
@property (nonatomic,retain) UIColor * topBorderColor;              //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(UIColor *)topBorderColor;
-(void)setLeftEntries:(id)arg1 rightEntries:(id)arg2 ;
-(id)initWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_rebuildStackStructure;
-(void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2 ;
-(NSArray *)leftEntries;
-(NSArray *)rightEntries;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
@end
