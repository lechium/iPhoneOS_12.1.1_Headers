/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CarPlay-Structs.h>
#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPMapButtonDelegate.h>
#import <libobjc.A.dylib/CPMapClientTemplateDelegate.h>
#import <libobjc.A.dylib/CPBannerDelegate.h>
#import <libobjc.A.dylib/CPNavigationAlertUpdating.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>

@protocol CPMapTemplateDelegate, CPBannerProviding;
@class UIColor, CPNavigationAlert, NSMutableDictionary, NSMutableArray, NSArray, NSString;

@interface CPMapTemplate : CPTemplate <CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding> {

	BOOL _automaticallyHidesNavigationBar;
	BOOL _hidesButtonsWithNavigationBar;
	UIColor* _guidanceBackgroundColor;
	unsigned long long _tripEstimateStyle;
	id<CPMapTemplateDelegate> _mapDelegate;
	CPNavigationAlert* _currentNavigationAlert;
	NSMutableDictionary* _postedBannerObjects;
	id<CPBannerProviding> _bannerProvider;
	NSMutableArray* _internalMapButtons;
	NSArray* _tripPreviews;

}

@property (nonatomic,retain) NSMutableDictionary * postedBannerObjects;                                    //@synthesize postedBannerObjects=_postedBannerObjects - In the implementation block
@property (nonatomic,retain) id<CPMapTemplateProviding> templateProvider; 
@property (nonatomic,retain) id<CPBannerProviding> bannerProvider;                                         //@synthesize bannerProvider=_bannerProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalMapButtons;                                          //@synthesize internalMapButtons=_internalMapButtons - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tripPreviews;                                                //@synthesize tripPreviews=_tripPreviews - In the implementation block
@property (nonatomic,retain) UIColor * guidanceBackgroundColor;                                            //@synthesize guidanceBackgroundColor=_guidanceBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long tripEstimateStyle;                                         //@synthesize tripEstimateStyle=_tripEstimateStyle - In the implementation block
@property (nonatomic,retain) NSArray * mapButtons; 
@property (assign,nonatomic) BOOL automaticallyHidesNavigationBar;                                         //@synthesize automaticallyHidesNavigationBar=_automaticallyHidesNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL hidesButtonsWithNavigationBar;                                           //@synthesize hidesButtonsWithNavigationBar=_hidesButtonsWithNavigationBar - In the implementation block
@property (assign,nonatomic,__weak) id<CPMapTemplateDelegate> mapDelegate;                                 //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (getter=isPanningInterfaceVisible,nonatomic,readonly) BOOL panningInterfaceVisible; 
@property (nonatomic,readonly) CPNavigationAlert * currentNavigationAlert;                                 //@synthesize currentNavigationAlert=_currentNavigationAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
+(BOOL)supportsSecureCoding;
-(id<CPMapTemplateDelegate>)mapDelegate;
-(void)setMapDelegate:(id<CPMapTemplateDelegate>)arg1 ;
-(BOOL)mapButton:(id)arg1 setHidden:(BOOL)arg2 ;
-(BOOL)mapButton:(id)arg1 setImage:(id)arg2 ;
-(BOOL)mapButton:(id)arg1 setFocusedImage:(id)arg2 ;
-(long long)_displayStyleForManeuver:(id)arg1 ;
-(void)_postBannerIfNecessaryForManeuver:(id)arg1 ;
-(void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2 ;
-(void)setBannerProvider:(id<CPBannerProviding>)arg1 ;
-(void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 withTimeRemainingColor:(unsigned long long)arg3 ;
-(void)_postBannerIfNecessaryForNavigationAlert:(id)arg1 ;
-(CPNavigationAlert *)currentNavigationAlert;
-(NSMutableArray *)internalMapButtons;
-(void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)postedBannerObjects;
-(id<CPBannerProviding>)bannerProvider;
-(void)_updateNavigationAlert:(id)arg1 ;
-(void)setAutomaticallyHidesNavigationBar:(BOOL)arg1 ;
-(void)showTripPreviews:(id)arg1 textConfiguration:(id)arg2 ;
-(void)showRouteChoicesPreviewForTrip:(id)arg1 textConfiguration:(id)arg2 ;
-(void)hideTripPreviews;
-(void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 ;
-(id)startNavigationSessionForTrip:(id)arg1 ;
-(void)presentNavigationAlert:(id)arg1 animated:(BOOL)arg2 ;
-(void)showPanningInterfaceAnimated:(BOOL)arg1 ;
-(void)dismissPanningInterfaceAnimated:(BOOL)arg1 ;
-(BOOL)isPanningInterfaceVisible;
-(void)setPostedBannerObjects:(NSMutableDictionary *)arg1 ;
-(void)setInternalMapButtons:(NSMutableArray *)arg1 ;
-(void)bannerDidAppearWithIdentifier:(id)arg1 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg1 ;
-(void)bannerTappedWithIdentifier:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(unsigned long long)tripEstimateStyle;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(BOOL)automaticallyHidesNavigationBar;
-(BOOL)hidesButtonsWithNavigationBar;
-(UIColor *)guidanceBackgroundColor;
-(void)setGuidanceBackgroundColor:(UIColor *)arg1 ;
-(NSArray *)mapButtons;
-(void)setMapButtons:(NSArray *)arg1 ;
-(NSArray *)tripPreviews;
-(void)clientNavigationAlertWillAppear:(id)arg1 ;
-(void)clientNavigationAlertDidAppear:(id)arg1 ;
-(void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2 ;
-(void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2 ;
-(void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2 ;
-(void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2 ;
-(void)clientTripAlreadyStartedException;
-(void)clientPanGestureBegan;
-(void)clientPanGestureWithDeltaPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)clientPanGestureEndedWithVelocity:(CGPoint)arg1 ;
-(void)clientPanViewDidAppear;
-(void)clientPanViewWillDisappear;
-(void)clientPanViewDidDisappear;
-(void)clientPanWithDirection:(long long)arg1 ;
-(void)clientPanBeganWithDirection:(long long)arg1 ;
-(void)clientPanEndedWithDirection:(long long)arg1 ;
-(void)clientTripCanceledByExternalNavigation;
-(void)dismissNavigationAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHidesButtonsWithNavigationBar:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

