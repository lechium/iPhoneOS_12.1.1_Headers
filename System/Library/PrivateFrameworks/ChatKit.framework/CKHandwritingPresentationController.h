/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKHandwritingPresentationControllerDelegate, CKHandwritingBrowserViewControllerProtocol, CKHandwritingViewControllerSendDelegate;
@class NSObject, CKDeviceOrientationManager, CKHandwritingWindow, UIViewController, CKScheduledUpdater, CKBrowserItemPayload, NSString;

@interface CKHandwritingPresentationController : NSObject {

	BOOL _requestedVisibility;
	BOOL _actualVisibility;
	BOOL _requestedVisibilityShouldBeAnimated;
	BOOL _suppressAppearanceCallbacksBecauseOfFirstInitialization;
	BOOL _foregrounded;
	NSObject*<CKHandwritingPresentationControllerDelegate> _delegate;
	CKDeviceOrientationManager* _deviceOrientationManager;
	long long _initialInterfaceOrientation;
	CKHandwritingWindow* _handwritingWindow;
	UIViewController*<CKHandwritingBrowserViewControllerProtocol> _browserViewController;
	CKScheduledUpdater* _animationScheduledUpdater;
	NSObject*<CKHandwritingViewControllerSendDelegate> _cachedSendDelegate;
	CKBrowserItemPayload* _cachedPluginPayload;

}

@property (nonatomic,retain) CKHandwritingWindow * handwritingWindow;                                                          //@synthesize handwritingWindow=_handwritingWindow - In the implementation block
@property (nonatomic,retain) UIViewController*<CKHandwritingBrowserViewControllerProtocol> browserViewController;              //@synthesize browserViewController=_browserViewController - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * animationScheduledUpdater;                                                   //@synthesize animationScheduledUpdater=_animationScheduledUpdater - In the implementation block
@property (assign,nonatomic) BOOL requestedVisibility;                                                                         //@synthesize requestedVisibility=_requestedVisibility - In the implementation block
@property (assign,nonatomic) BOOL actualVisibility;                                                                            //@synthesize actualVisibility=_actualVisibility - In the implementation block
@property (assign,nonatomic) BOOL requestedVisibilityShouldBeAnimated;                                                         //@synthesize requestedVisibilityShouldBeAnimated=_requestedVisibilityShouldBeAnimated - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKHandwritingViewControllerSendDelegate> cachedSendDelegate;                     //@synthesize cachedSendDelegate=_cachedSendDelegate - In the implementation block
@property (nonatomic,retain) CKBrowserItemPayload * cachedPluginPayload;                                                       //@synthesize cachedPluginPayload=_cachedPluginPayload - In the implementation block
@property (assign,nonatomic) BOOL suppressAppearanceCallbacksBecauseOfFirstInitialization;                                     //@synthesize suppressAppearanceCallbacksBecauseOfFirstInitialization=_suppressAppearanceCallbacksBecauseOfFirstInitialization - In the implementation block
@property (assign,nonatomic) BOOL foregrounded;                                                                                //@synthesize foregrounded=_foregrounded - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKHandwritingViewControllerSendDelegate> sendDelegate; 
@property (assign,nonatomic,__weak) NSObject*<CKHandwritingPresentationControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKDeviceOrientationManager * deviceOrientationManager;                                            //@synthesize deviceOrientationManager=_deviceOrientationManager - In the implementation block
@property (nonatomic,retain) CKBrowserItemPayload * pluginPayload; 
@property (assign,nonatomic) long long initialInterfaceOrientation;                                                            //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL visible; 
@property (readonly) NSString * pluginBundleID; 
-(NSString *)pluginBundleID;
-(CKBrowserItemPayload *)pluginPayload;
-(NSObject*<CKHandwritingViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(NSObject*<CKHandwritingViewControllerSendDelegate>)arg1 ;
-(void)_updateVisibilityState;
-(void)setDeviceOrientationManager:(CKDeviceOrientationManager *)arg1 ;
-(void)setPluginPayload:(CKBrowserItemPayload *)arg1 ;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(void)setAnimationScheduledUpdater:(CKScheduledUpdater *)arg1 ;
-(CKScheduledUpdater *)animationScheduledUpdater;
-(void)setForegrounded:(BOOL)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)setCachedSendDelegate:(NSObject*<CKHandwritingViewControllerSendDelegate>)arg1 ;
-(UIViewController*<CKHandwritingBrowserViewControllerProtocol>)browserViewController;
-(NSObject*<CKHandwritingViewControllerSendDelegate>)cachedSendDelegate;
-(void)setCachedPluginPayload:(CKBrowserItemPayload *)arg1 ;
-(void)_loadCachedPayloadIntoBrowser;
-(CKBrowserItemPayload *)cachedPluginPayload;
-(BOOL)actualVisibility;
-(BOOL)requestedVisibility;
-(void)setRequestedVisibility:(BOOL)arg1 ;
-(void)setRequestedVisibilityShouldBeAnimated:(BOOL)arg1 ;
-(void)_flushHandwritingWindowCacheIfNeeded;
-(BOOL)requestedVisibilityShouldBeAnimated;
-(CKDeviceOrientationManager *)deviceOrientationManager;
-(void)_doInitialization;
-(CKHandwritingWindow *)handwritingWindow;
-(BOOL)suppressAppearanceCallbacksBecauseOfFirstInitialization;
-(long long)initialInterfaceOrientation;
-(void)setActualVisibility:(BOOL)arg1 ;
-(void)setSuppressAppearanceCallbacksBecauseOfFirstInitialization:(BOOL)arg1 ;
-(BOOL)foregrounded;
-(void)setBrowserViewController:(UIViewController*<CKHandwritingBrowserViewControllerProtocol>)arg1 ;
-(void)setHandwritingWindow:(CKHandwritingWindow *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(NSObject*<CKHandwritingPresentationControllerDelegate>)arg1 ;
-(NSObject*<CKHandwritingPresentationControllerDelegate>)delegate;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
