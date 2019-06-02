/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISplittableInputView.h>
#import <UIKitCore/_UIRemoteKeyboardInputViewPlaceholder.h>

@class UIView, NSString;

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {

	UIView* _mirroredView;
	CGSize _fixedSize;
	/*^block*/id _sizeBlock;
	UIView* _fallbackView;
	UIView* _associatedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView;                 //@synthesize fallbackView=_fallbackView - In the implementation block
@property (nonatomic,retain) UIView * associatedView;               //@synthesize associatedView=_associatedView - In the implementation block
+(id)placeholderForView:(id)arg1 ;
+(id)placeholderWithSizer:(/*^block*/id)arg1 ;
+(id)placeholderWithWidth:(double)arg1 height:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(CGSize)intrinsicContentSize;
-(id)initWithSize:(CGSize)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)didEndSplitTransition;
-(CGRect)_compatibleBounds;
-(void)layoutMergedSubviews;
-(void)updateMergedSubviewConstraints;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)willBeginSplitTransition;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(BOOL)refreshPlaceholder;
-(UIView *)placeheldView;
-(UIView *)fallbackView;
-(void)setFallbackView:(UIView *)arg1 ;
-(UIView *)associatedView;
-(void)setAssociatedView:(UIView *)arg1 ;
@end
