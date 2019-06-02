/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlInteractionCoordinatorDelegate.h>

@class HUQuickControlInteractionCoordinator, NAValueThrottler, HUQuickControlViewProfile, _HUQuickControlSingleControlHostView, HFControlItem, NSString;

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <HUQuickControlInteractionCoordinatorDelegate> {

	BOOL _writesInProgressOrPossible;
	BOOL _hasWrittenAnyNewValues;
	HUQuickControlInteractionCoordinator* _interactionCoordinator;
	id _modelValue;
	NAValueThrottler* _valueWriteThrottler;
	unsigned long long _inFlightWriteCount;
	HUQuickControlViewProfile* _viewProfile;
	double _verticalDirectionalControlStretchFactor;
	double _horizontalControlCompressionFactor;

}

@property (nonatomic,readonly) NAValueThrottler * valueWriteThrottler;                                          //@synthesize valueWriteThrottler=_valueWriteThrottler - In the implementation block
@property (assign,nonatomic) unsigned long long inFlightWriteCount;                                             //@synthesize inFlightWriteCount=_inFlightWriteCount - In the implementation block
@property (assign,getter=areWritesInProgressOrPossible,nonatomic) BOOL writesInProgressOrPossible;              //@synthesize writesInProgressOrPossible=_writesInProgressOrPossible - In the implementation block
@property (assign,nonatomic) BOOL hasWrittenAnyNewValues;                                                       //@synthesize hasWrittenAnyNewValues=_hasWrittenAnyNewValues - In the implementation block
@property (nonatomic,retain) HUQuickControlViewProfile * viewProfile;                                           //@synthesize viewProfile=_viewProfile - In the implementation block
@property (assign,nonatomic) double verticalDirectionalControlStretchFactor;                                    //@synthesize verticalDirectionalControlStretchFactor=_verticalDirectionalControlStretchFactor - In the implementation block
@property (assign,nonatomic) double horizontalControlCompressionFactor;                                         //@synthesize horizontalControlCompressionFactor=_horizontalControlCompressionFactor - In the implementation block
@property (nonatomic,retain) _HUQuickControlSingleControlHostView * view; 
@property (nonatomic,readonly) HFControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlInteractionCoordinator * interactionCoordinator;                   //@synthesize interactionCoordinator=_interactionCoordinator - In the implementation block
@property (nonatomic,readonly) id modelValue;                                                                   //@synthesize modelValue=_modelValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(void)_updateTitle;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(void)setPreferredFrameLayoutGuide:(id)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)overrideValueForCharacteristic:(id)arg1 ;
-(void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(id)overrideStatusText;
-(id)overrideSecondaryStatusText;
-(HFControlItem *)controlItem;
-(HUQuickControlViewProfile *)viewProfile;
-(HUQuickControlInteractionCoordinator *)interactionCoordinator;
-(void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2 ;
-(void)interactionCoordinator:(id)arg1 interactionStateDidChange:(BOOL)arg2 ;
-(BOOL)hasModelValueChangedForInteractionCoordinator:(id)arg1 ;
-(void)interactionCoordinatorWantsDismissal:(id)arg1 ;
-(void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2 ;
-(void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1 ;
-(void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2 ;
-(void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2 ;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(id)modelValue;
-(id)initWithControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(NAValueThrottler *)valueWriteThrottler;
-(void)_writeModelControlValue:(id)arg1 ;
-(void)_updateValueFromControlItem;
-(BOOL)areWritesInProgressOrPossible;
-(void)invalidateViewProfile;
-(void)_updateViewProfileForCurrentItemState;
-(void)modelValueDidChange;
-(void)_setModelValue:(id)arg1 writeValue:(BOOL)arg2 ;
-(unsigned long long)inFlightWriteCount;
-(void)setInFlightWriteCount:(unsigned long long)arg1 ;
-(void)setHasWrittenAnyNewValues:(BOOL)arg1 ;
-(void)_updateWriteState;
-(void)setWritesInProgressOrPossible:(BOOL)arg1 ;
-(void)setViewProfile:(HUQuickControlViewProfile *)arg1 ;
-(double)horizontalControlCompressionFactor;
-(double)verticalDirectionalControlStretchFactor;
-(void)_updateControlTransform;
-(BOOL)hasWrittenAnyNewValues;
-(void)setHorizontalControlCompressionFactor:(double)arg1 ;
-(void)setVerticalDirectionalControlStretchFactor:(double)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setControlSize:(unsigned long long)arg1 ;
@end

