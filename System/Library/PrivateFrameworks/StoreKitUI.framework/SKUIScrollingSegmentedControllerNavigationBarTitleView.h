/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIInteractiveSegmentedControl;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView {

	long long _layoutStyle;
	SKUIInteractiveSegmentedControl* _segmentedControl;
	double _segmentedControlMinimumHeight;

}

@property (assign,nonatomic) long long layoutStyle;                                           //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) SKUIInteractiveSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) double segmentedControlMinimumHeight;                            //@synthesize segmentedControlMinimumHeight=_segmentedControlMinimumHeight - In the implementation block
+(UIEdgeInsets)defaultLayoutMargins;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(double)segmentedControlMinimumHeight;
-(void)setSegmentedControlMinimumHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIInteractiveSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(SKUIInteractiveSegmentedControl *)arg1 ;
@end

