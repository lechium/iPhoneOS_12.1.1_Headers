/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKActionResponder.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>

@class OKPresentationPage, NSArray, OKNavigatorViewController, OKPresentationViewController, NSString, NSMutableDictionary, NSMutableArray, NSRecursiveLock, OFUIView;

@interface OKPageViewController : OFUIViewController <OKSettingsSupport, OKActionResponderPrivate, OKCollectionProxyDataSource, OKPresentationReadinessPrivate, OKActionResponder, OKPresentationReadiness> {

	BOOL _motionEnabled;
	double _perspective;
	BOOL _motionTiltXEnabled;
	BOOL _motionTiltYEnabled;
	BOOL _motionTiltZEnabled;
	CGSize _motionXMinMax;
	CGSize _motionYMinMax;
	CGSize _motionZMinMax;
	double _lastMotionRotationX;
	double _lastMotionRotationY;
	double _lastMotionRotationZ;
	BOOL _needsApplySettings;
	BOOL _hasSettingsApplied;
	unsigned long long _prepareMode;
	BOOL _prepareWidgetsManually;
	OKPresentationPage* _page;
	NSArray* _layoutSteps;
	OKNavigatorViewController* _subNavigatorViewController;
	OKPresentationViewController* _presentationViewController;
	OKNavigatorViewController* _navigatorViewController;
	NSArray* _musicURLs;
	NSString* _prepareActionScript;
	NSString* _canPerformActionScript;
	NSString* _willAppearActionScript;
	NSString* _appearingActionScript;
	NSString* _didAppearActionScript;
	NSString* _willDisappearActionScript;
	NSString* _disappearingActionScript;
	NSString* _didDisappearActionScript;
	NSString* _layoutChangedActionScript;
	NSMutableDictionary* _actionBindings;
	UIEdgeInsets _eventsInset;
	BOOL _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;

}

@property (assign,nonatomic) OKPresentationViewController * presentationViewController; 
@property (assign,nonatomic) OKNavigatorViewController * navigatorViewController;                    //@synthesize navigatorViewController=_navigatorViewController - In the implementation block
@property (nonatomic,retain) OKNavigatorViewController * subNavigatorViewController;                 //@synthesize subNavigatorViewController=_subNavigatorViewController - In the implementation block
@property (assign,nonatomic) BOOL prepareWidgetsManually;                                            //@synthesize prepareWidgetsManually=_prepareWidgetsManually - In the implementation block
@property (assign,nonatomic) BOOL hasSettingsApplied;                                                //@synthesize hasSettingsApplied=_hasSettingsApplied - In the implementation block
@property (assign,nonatomic) BOOL needsApplySettings;                                                //@synthesize needsApplySettings=_needsApplySettings - In the implementation block
@property (nonatomic,retain) NSArray * layoutSteps;                                                  //@synthesize layoutSteps=_layoutSteps - In the implementation block
@property (nonatomic,retain,readonly) NSArray * musicURLs;                                           //@synthesize musicURLs=_musicURLs - In the implementation block
@property (nonatomic,retain,readonly) OKPresentationPage * page;                                     //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) unsigned long long prepareMode;                                       //@synthesize prepareMode=_prepareMode - In the implementation block
@property (nonatomic,readonly) BOOL motionEnabled;                                                   //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets eventsInset;                                             //@synthesize eventsInset=_eventsInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OFUIView * actionView; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(Class)viewClass;
-(OKPresentationViewController *)presentationViewController;
-(void)instantPause;
-(void)setPresentationViewController:(OKPresentationViewController *)arg1 ;
-(OFUIView *)actionView;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)visibleWidgets;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forWidgetView:(id)arg4 ;
-(void)setSubNavigatorViewController:(OKNavigatorViewController *)arg1 ;
-(OKNavigatorViewController *)subNavigatorViewController;
-(void)networkStatusDidChange:(long long)arg1 ;
-(void)setNeedsApplySettings;
-(unsigned long long)prepareMode;
-(void)applySettingsIfNeeded;
-(void)resolutionDidChange;
-(void)layoutDidChange;
-(BOOL)hasSettingsApplied;
-(void)applyLayoutSettings;
-(void)removeAllActionBindings;
-(void)setNeedsApplySettings:(BOOL)arg1 ;
-(void)setHasSettingsApplied:(BOOL)arg1 ;
-(id)mediaURLs;
-(BOOL)prepareWidgetsManually;
-(void)updateMotion;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)setNeedsPrepare;
-(void)prepareForMode:(unsigned long long)arg1 ;
-(void)prepareForRefresh;
-(void)instantResume;
-(BOOL)motionEnabled;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(CGSize)layoutFactor;
-(NSArray *)layoutSteps;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)allActionBindings;
-(BOOL)hasWidgetFocused;
-(void)applySettings;
-(void)prepareWidgetsInRect:(CGRect)arg1 ;
-(void)prepareForReload;
-(void)prepareAllWidgets;
-(void)updateLayoutSteps;
-(id)currentRemoteWidgets;
-(void)cancelCouchPotatoPlayback;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(void)removeAllReadyNotifications;
-(id)displayedPageViewControllers;
-(id)deepestDisplayedPageViewController;
-(BOOL)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(BOOL)isReady:(BOOL)arg1 ;
-(double)readyProgress:(BOOL)arg1 ;
-(BOOL)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(BOOL)interactivityEnabled;
-(void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2 ;
-(void)removeActionBinding:(id)arg1 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(CGSize)parentLayoutFactor;
-(id)layoutSettingsKeys;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(void)pageWillAppear:(BOOL)arg1 ;
-(void)pageDidAppear:(BOOL)arg1 ;
-(void)pageWillDisappear:(BOOL)arg1 ;
-(void)pageDidDisappear:(BOOL)arg1 ;
-(BOOL)supportsReadiness;
-(void)readinessDidChange:(BOOL)arg1 ;
-(void)becomeReady;
-(void)resignReady;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(void)setSettingWillAppearActionScript:(id)arg1 ;
-(void)setSettingDidAppearActionScript:(id)arg1 ;
-(void)setSettingWillDisappearActionScript:(id)arg1 ;
-(void)setSettingDidDisappearActionScript:(id)arg1 ;
-(void)setPrepareWidgetsManually:(BOOL)arg1 ;
-(id)actionBindings;
-(void)setSettingActionBindings:(id)arg1 ;
-(void)setSettingPerspective:(double)arg1 ;
-(void)setSettingMotionEnabled:(BOOL)arg1 ;
-(void)setSettingMotionTiltXEnabled:(BOOL)arg1 ;
-(void)setSettingMotionTiltYEnabled:(BOOL)arg1 ;
-(void)setSettingMotionTiltZEnabled:(BOOL)arg1 ;
-(void)setSettingMotionXMinMax:(CGSize)arg1 ;
-(void)setSettingMotionYMinMax:(CGSize)arg1 ;
-(void)setSettingMotionZMinMax:(CGSize)arg1 ;
-(void)setSettingMusic:(id)arg1 ;
-(void)setSettingAppearingActionScript:(id)arg1 ;
-(void)setSettingDisappearingActionScript:(id)arg1 ;
-(void)setSettingLayoutChangedActionScript:(id)arg1 ;
-(void)setSettingLayoutSteps:(id)arg1 ;
-(UIEdgeInsets)settingEventsInset;
-(void)setSettingEventsInset:(UIEdgeInsets)arg1 ;
-(void)pageAppearingWithProgress:(float)arg1 animated:(BOOL)arg2 ;
-(void)pageDisappearingWithProgress:(float)arg1 animated:(BOOL)arg2 ;
-(NSArray *)musicURLs;
-(BOOL)needsApplySettings;
-(void)setLayoutSteps:(NSArray *)arg1 ;
-(UIEdgeInsets)eventsInset;
-(void)setNavigatorViewController:(OKNavigatorViewController *)arg1 ;
-(OKNavigatorViewController *)navigatorViewController;
-(void)dealloc;
-(id)name;
-(NSString *)description;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay;
-(OKPresentationPage *)page;
-(BOOL)canPerformAction:(id)arg1 ;
-(void)commonInit;
-(id)initWithPage:(id)arg1 ;
-(id)pageView;
@end

