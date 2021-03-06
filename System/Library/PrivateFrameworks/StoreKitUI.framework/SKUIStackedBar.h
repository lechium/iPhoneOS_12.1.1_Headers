/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIStackedBarDelegate;
@class _UIBackdropView, NSArray, UIView;

@interface SKUIStackedBar : UIView {

	id<SKUIStackedBarDelegate> _delegate;
	_UIBackdropView* _backdropView;
	NSArray* _items;
	NSArray* _cells;
	BOOL _lastItemExpanded;
	BOOL _hidesStatusBar;
	BOOL _splitViewStyle;
	BOOL _alwaysShowsBackButton;
	BOOL _zeroHeightWhenFirstChildExpanded;
	double _offset;
	UIView* _wrapperView;
	UIView* _maskView;
	double _newOffset;

}

@property (__weak) id<SKUIStackedBarDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                    //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsBackButton;                         //@synthesize alwaysShowsBackButton=_alwaysShowsBackButton - In the implementation block
@property (assign,nonatomic) BOOL hidesStatusBar;                                //@synthesize hidesStatusBar=_hidesStatusBar - In the implementation block
@property (assign,nonatomic) BOOL lastItemExpanded;                              //@synthesize lastItemExpanded=_lastItemExpanded - In the implementation block
@property (assign,nonatomic) BOOL splitViewStyle;                                //@synthesize splitViewStyle=_splitViewStyle - In the implementation block
@property (assign,nonatomic) BOOL zeroHeightWhenFirstChildExpanded;              //@synthesize zeroHeightWhenFirstChildExpanded=_zeroHeightWhenFirstChildExpanded - In the implementation block
@property (assign,nonatomic) double offset;                                      //@synthesize offset=_offset - In the implementation block
-(void)_buttonAction:(id)arg1 ;
-(void)_reload;
-(BOOL)splitViewStyle;
-(void)setSplitViewStyle:(BOOL)arg1 ;
-(void)setHidesStatusBar:(BOOL)arg1 ;
-(void)setAlwaysShowsBackButton:(BOOL)arg1 ;
-(void)setLastItemExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLastItemExpanded:(BOOL)arg1 ;
-(void)setZeroHeightWhenFirstChildExpanded:(BOOL)arg1 ;
-(void)animateToFullSizeIfNecessary;
-(void)_selectItemAtIndex:(long long)arg1 ;
-(void)_backAction:(id)arg1 ;
-(void)_resetNewOffset;
-(BOOL)alwaysShowsBackButton;
-(BOOL)lastItemExpanded;
-(BOOL)hidesStatusBar;
-(BOOL)zeroHeightWhenFirstChildExpanded;
-(void)setDelegate:(id<SKUIStackedBarDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(id<SKUIStackedBarDelegate>)delegate;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(double)offset;
-(void)setOffset:(double)arg1 ;
@end

