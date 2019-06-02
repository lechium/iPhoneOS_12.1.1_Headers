/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISplittableInputView.h>

@class UIKBRenderConfig, _UIInputViewContent, UIImage, NSMutableDictionary, NSArray, CALayer, UIView, NSString;

@interface UIInputView : UIView <UISplittableInputView> {

	long long _style;
	UIKBRenderConfig* _renderConfig;
	BOOL _suppressBackgroundStyling;
	BOOL _disableSplitSupport;
	_UIInputViewContent* _leftContentView;
	_UIInputViewContent* _rightContentView;
	double _contentRatio;
	CGSize _leftContentSize;
	CGSize _rightContentSize;
	double _gapWidth;
	double _leftOffset;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	double _transitionRatio;
	UIImage* _mergedImage;
	UIImage* _splitImage;
	NSMutableDictionary* _mergedSliceMap;
	NSMutableDictionary* _splitSliceMap;
	NSArray* _visibleLayers;
	CALayer* _transitionLayer;
	BOOL _allowsSelfSizing;
	BOOL _assertSizingWithPredictionBar;
	UIEdgeInsets _backgroundEdgeInsets;

}

@property (nonatomic,retain) UIImage * _mergedImage;                             //@synthesize mergedImage=_mergedImage - In the implementation block
@property (nonatomic,retain) UIImage * _splitImage;                              //@synthesize splitImage=_splitImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mergedSliceMap;              //@synthesize mergedSliceMap=_mergedSliceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _splitSliceMap;               //@synthesize splitSliceMap=_splitSliceMap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundEdgeInsets;                  //@synthesize backgroundEdgeInsets=_backgroundEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL assertSizingWithPredictionBar;                 //@synthesize assertSizingWithPredictionBar=_assertSizingWithPredictionBar - In the implementation block
@property (nonatomic,readonly) UIView * leftContentView;                         //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,readonly) UIView * rightContentView;                        //@synthesize rightContentView=_rightContentView - In the implementation block
@property (assign,nonatomic) double contentRatio;                                //@synthesize contentRatio=_contentRatio - In the implementation block
@property (assign,nonatomic) CGSize leftContentViewSize;                         //@synthesize leftContentSize=_leftContentSize - In the implementation block
@property (assign,nonatomic) CGSize rightContentViewSize;                        //@synthesize rightContentSize=_rightContentSize - In the implementation block
@property (nonatomic,readonly) long long inputViewStyle;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL allowsSelfSizing;                              //@synthesize allowsSelfSizing=_allowsSelfSizing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupAppearanceIfNecessary;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)tintColor;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isTransitioning;
-(void)setContentRatio:(double)arg1 ;
-(UIView *)leftContentView;
-(UIView *)rightContentView;
-(void)_setRenderConfig:(id)arg1 ;
-(void)_setSuppressBackgroundStyling:(BOOL)arg1 ;
-(CGSize)_defaultSize;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)_updateClipCorners;
-(double)_additionalClipHeight;
-(void)didEndSplitTransition;
-(void)setInputViewStyle:(long long)arg1 ;
-(void)_setNeedsContentSizeUpdate;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 ;
-(void)layoutMergedSubviews;
-(void)updateMergedSubviewConstraints;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)willBeginSplitTransition;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(double)contentRatio;
-(void)_updateWithSize:(CGSize)arg1 ;
-(id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1 ;
-(id)_toolbarBorderedBackground;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
-(void)setAssertSizingWithPredictionBar:(BOOL)arg1 ;
-(BOOL)_suppressBackgroundStyling;
-(BOOL)_disableSplitSupport;
-(void)_setDisableSplitSupport:(BOOL)arg1 ;
-(BOOL)_isToolbars;
-(BOOL)_isSplit;
-(BOOL)_supportsSplit;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(long long)inputViewStyle;
-(BOOL)allowsSelfSizing;
-(BOOL)assertSizingWithPredictionBar;
-(void)setLeftContentViewSize:(CGSize)arg1 ;
-(void)setRightContentViewSize:(CGSize)arg1 ;
-(UIImage *)_mergedImage;
-(void)set_mergedImage:(UIImage *)arg1 ;
-(UIImage *)_splitImage;
-(void)set_splitImage:(UIImage *)arg1 ;
-(NSMutableDictionary *)_mergedSliceMap;
-(void)set_mergedSliceMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_splitSliceMap;
-(void)set_splitSliceMap:(NSMutableDictionary *)arg1 ;
-(UIEdgeInsets)backgroundEdgeInsets;
-(void)setBackgroundEdgeInsets:(UIEdgeInsets)arg1 ;
@end
