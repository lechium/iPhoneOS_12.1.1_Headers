/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewSubviewMonitoring.h>

@class NSMutableArray, _UIVisualEffectSubview, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectBackdropView, _UIVisualEffectNode, NSArray, NSString;

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {

	NSMutableArray* _views;
	BOOL _autosetSubviewLabelTintColor;
	BOOL _contentViewRequired;
	_UIVisualEffectSubview* _contentView;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	_UIVisualEffectBackdropView* _captureView;
	_UIVisualEffectNode* _currentEffectNode;
	_UIVisualEffectNode* _transitionEffectNode;

}

@property (nonatomic,readonly) _UIVisualEffectSubview * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewRequired;                                                   //@synthesize contentViewRequired=_contentViewRequired - In the implementation block
@property (nonatomic,readonly) NSArray * views;                                                          //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;              //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (assign,nonatomic,__weak) _UIVisualEffectBackdropView * captureView;                           //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectNode * currentEffectNode;                                    //@synthesize currentEffectNode=_currentEffectNode - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectNode * transitionEffectNode;                               //@synthesize transitionEffectNode=_transitionEffectNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(_UIVisualEffectSubview *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(id)_cloneFilters:(id)arg1 ;
-(void)_updateView:(id)arg1 shouldDrawWithTintColor:(BOOL)arg2 ;
-(void)_updateAdjustTintColors;
-(void)_configureEffectNode:(id)arg1 ;
-(void)_applyRequestedNodeEffect;
-(void)_applyIdentityNodeEffect;
-(id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4 ;
-(void)_evaluateInPlaceFiltering;
-(void)_view:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)_view:(id)arg1 willGainDescendent:(id)arg2 ;
-(void)_view:(id)arg1 willLoseDescendent:(id)arg2 ;
-(void)setContentViewRequired:(BOOL)arg1 ;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(void)setCurrentEffectNode:(_UIVisualEffectNode *)arg1 ;
-(void)prepareToTransitionToEffectNode:(id)arg1 ;
-(void)beginTransition;
-(void)endTransition;
-(void)_applyEffectNode:(id)arg1 ;
-(BOOL)contentViewRequired;
-(NSArray *)views;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(_UIVisualEffectBackdropView *)captureView;
-(_UIVisualEffectNode *)currentEffectNode;
-(_UIVisualEffectNode *)transitionEffectNode;
@end

