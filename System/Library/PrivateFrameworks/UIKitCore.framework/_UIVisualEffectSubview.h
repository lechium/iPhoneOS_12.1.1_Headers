/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIVisualEffectSubviewSource.h>

@protocol _UIVisualEffectViewSubviewMonitoring;
@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, NSString;

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectSubviewSource> {

	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	id<_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;
	NSArray* _viewEffects;
	NSArray* _filters;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;              //@synthesize subviewMonitor=_subviewMonitor - In the implementation block
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,copy,readonly) NSArray * viewEffects;                                                //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(id)asView;
-(id)asLayer;
-(id)asImageView;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(NSArray *)viewEffects;
-(void)_applyFilterValues:(id)arg1 baseName:(id)arg2 toLayer:(id)arg3 ;
-(void)removeViewEffects;
-(void)addViewEffects:(id)arg1 ;
-(id)asBackdropView;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedViewEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
@end

