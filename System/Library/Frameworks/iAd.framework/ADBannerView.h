/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ADAdRecipient.h>
#import <libobjc.A.dylib/ADDimmerViewDelegate.h>

@protocol ADBannerViewDelegate, ADBannerViewInternalDelegate;
@class ADLayoutOptions, UIView, UIViewController, NSString, UILabel, NSTimer, ADPrivacyButton, NSURL, ADAdSpace, ADDimmerView, NSDate;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate> {

	id<ADBannerViewDelegate> _weakDelegate;
	id<ADBannerViewInternalDelegate> _weakInternalDelegate;
	BOOL _displayed;
	BOOL _reUsed;
	BOOL _bannerLoaded;
	BOOL _bannerViewActionInProgress;
	BOOL _createdForIBInternal;
	BOOL _dimmed;
	BOOL _determiningConstraintBasedWidth;
	BOOL _inSecondConstraintsPass;
	BOOL _scrolling;
	BOOL _imageUpdateEnabled;
	BOOL _debugHighlightEnabled;
	BOOL _internalAdTypeCanChange;
	BOOL _requestCalledbackError;
	int _screenfuls;
	int _slotPosition;
	int _internalAdType;
	NSString* _adResponseId;
	long long _lastErrorCode;
	long long _options;
	ADLayoutOptions* _layoutOptions;
	long long _adType;
	NSString* _advertisingSection;
	UIView* _highlightClippedView;
	UIView* _highlightHittableView;
	UILabel* _idLbl;
	NSTimer* _highlightUpdateTimer;
	ADPrivacyButton* _privacyButton;
	NSString* _authenticationUserName;
	NSURL* _serverURL;
	ADAdSpace* _adSpace;
	ADDimmerView* _dimmerView;
	double _constraintBasedWidth;
	NSString* _originID;
	NSDate* _adDisplayDate;
	NSDate* _loadStartTime;
	NSDate* _webLoadStartTime;
	NSDate* _loadEndTime;
	double _adDataLoadTime;
	double _bannerLoadTime;
	CGSize _portraitSize;
	CGSize _landscapeSize;

}

@property (nonatomic,retain) UIView * highlightClippedView;                                                    //@synthesize highlightClippedView=_highlightClippedView - In the implementation block
@property (nonatomic,retain) UIView * highlightHittableView;                                                   //@synthesize highlightHittableView=_highlightHittableView - In the implementation block
@property (nonatomic,retain) UILabel * idLbl;                                                                  //@synthesize idLbl=_idLbl - In the implementation block
@property (nonatomic,retain) NSTimer * highlightUpdateTimer;                                                   //@synthesize highlightUpdateTimer=_highlightUpdateTimer - In the implementation block
@property (nonatomic,retain) ADPrivacyButton * privacyButton;                                                  //@synthesize privacyButton=_privacyButton - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                  //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                  //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) BOOL createdForIBInternal;                                                      //@synthesize createdForIBInternal=_createdForIBInternal - In the implementation block
@property (assign,getter=isBannerViewActionInProgress,nonatomic) BOOL bannerViewActionInProgress;              //@synthesize bannerViewActionInProgress=_bannerViewActionInProgress - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                                              //@synthesize adSpace=_adSpace - In the implementation block
@property (nonatomic,retain) ADDimmerView * dimmerView;                                                        //@synthesize dimmerView=_dimmerView - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL determiningConstraintBasedWidth;                                             //@synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth - In the implementation block
@property (assign,nonatomic) double constraintBasedWidth;                                                      //@synthesize constraintBasedWidth=_constraintBasedWidth - In the implementation block
@property (assign,nonatomic) BOOL inSecondConstraintsPass;                                                     //@synthesize inSecondConstraintsPass=_inSecondConstraintsPass - In the implementation block
@property (assign,nonatomic) BOOL scrolling;                                                                   //@synthesize scrolling=_scrolling - In the implementation block
@property (assign,nonatomic) CGSize portraitSize;                                                              //@synthesize portraitSize=_portraitSize - In the implementation block
@property (assign,nonatomic) CGSize landscapeSize;                                                             //@synthesize landscapeSize=_landscapeSize - In the implementation block
@property (assign,nonatomic) BOOL imageUpdateEnabled;                                                          //@synthesize imageUpdateEnabled=_imageUpdateEnabled - In the implementation block
@property (assign,nonatomic) BOOL debugHighlightEnabled;                                                       //@synthesize debugHighlightEnabled=_debugHighlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL internalAdTypeCanChange;                                                     //@synthesize internalAdTypeCanChange=_internalAdTypeCanChange - In the implementation block
@property (nonatomic,copy) NSString * originID;                                                                //@synthesize originID=_originID - In the implementation block
@property (nonatomic,copy) NSDate * adDisplayDate;                                                             //@synthesize adDisplayDate=_adDisplayDate - In the implementation block
@property (assign,nonatomic) BOOL requestCalledbackError;                                                      //@synthesize requestCalledbackError=_requestCalledbackError - In the implementation block
@property (nonatomic,copy) NSDate * loadStartTime;                                                             //@synthesize loadStartTime=_loadStartTime - In the implementation block
@property (nonatomic,copy) NSDate * webLoadStartTime;                                                          //@synthesize webLoadStartTime=_webLoadStartTime - In the implementation block
@property (nonatomic,copy) NSDate * loadEndTime;                                                               //@synthesize loadEndTime=_loadEndTime - In the implementation block
@property (assign,nonatomic) double adDataLoadTime;                                                            //@synthesize adDataLoadTime=_adDataLoadTime - In the implementation block
@property (assign,nonatomic) double bannerLoadTime;                                                            //@synthesize bannerLoadTime=_bannerLoadTime - In the implementation block
@property (nonatomic,readonly) long long adType;                                                               //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic,__weak) id<ADBannerViewDelegate> delegate; 
@property (getter=isBannerLoaded,nonatomic,readonly) BOOL bannerLoaded;                                        //@synthesize bannerLoaded=_bannerLoaded - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                      //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType;                                                             //@synthesize internalAdType=_internalAdType - In the implementation block
@property (nonatomic,retain) ADLayoutOptions * layoutOptions;                                                  //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) long long options;                                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,copy) NSString * adResponseId;                                                            //@synthesize adResponseId=_adResponseId - In the implementation block
@property (assign,nonatomic) int screenfuls;                                                                   //@synthesize screenfuls=_screenfuls - In the implementation block
@property (assign,nonatomic) int slotPosition;                                                                 //@synthesize slotPosition=_slotPosition - In the implementation block
@property (assign,nonatomic) BOOL displayed;                                                                   //@synthesize displayed=_displayed - In the implementation block
@property (assign,nonatomic) BOOL reUsed;                                                                      //@synthesize reUsed=_reUsed - In the implementation block
@property (assign,nonatomic) long long lastErrorCode;                                                          //@synthesize lastErrorCode=_lastErrorCode - In the implementation block
+(CGSize)_sizeThatFitsSize:(CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3 ;
+(CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1 ;
+(CGSize)_landscapeBannerSize;
+(CGSize)_portraitBannerSize;
+(void)setServerURL:(id)arg1 ;
+(CGRect)_frameThatFits:(CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3 ;
+(CGRect)_adWindowBounds;
+(BOOL)requiresConstraintBasedLayout;
-(NSURL *)serverURL;
-(id)initFromIBWithFrame:(CGRect)arg1 ;
-(id)_accessibilityUserTestingElementAttributes;
-(id)audioURL;
-(CGSize)landscapeSize;
-(void)setLandscapeSize:(CGSize)arg1 ;
-(CGSize)portraitSize;
-(void)setPortraitSize:(CGSize)arg1 ;
-(long long)adType;
-(ADAdSpace *)adSpace;
-(id)_initWithInternalAdType:(int)arg1 options:(long long)arg2 ;
-(id)initFromIBWithFrame:(CGRect)arg1 adType:(long long)arg2 ;
-(int)internalAdType;
-(void)setDimmerView:(ADDimmerView *)arg1 ;
-(ADDimmerView *)dimmerView;
-(void)setPrivacyButton:(ADPrivacyButton *)arg1 ;
-(ADPrivacyButton *)privacyButton;
-(void)setAdDisplayDate:(NSDate *)arg1 ;
-(void)setLoadStartTime:(NSDate *)arg1 ;
-(void)setWebLoadStartTime:(NSDate *)arg1 ;
-(void)setLoadEndTime:(NSDate *)arg1 ;
-(void)setRequestCalledbackError:(BOOL)arg1 ;
-(BOOL)canReuseForContext:(id)arg1 ;
-(BOOL)hasImpressed;
-(void)_resetHighlightTimer;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(BOOL)requiresMRAID;
-(void)bannerTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2 ;
-(void)setBannerViewActionInProgress:(BOOL)arg1 ;
-(void)reportAdPrivacySheetDidRender;
-(void)reportAdPrivacySheetDidAppear;
-(void)reportAdPrivacySheetDidDisappear;
-(void)reportAdPrivacySheetDidLinkOut;
-(void)reportNativeClickEvent;
-(NSDate *)loadEndTime;
-(double)adDataLoadTime;
-(double)bannerLoadTime;
-(id)publicImpressionAttributes;
-(void)_updateHighlight:(id)arg1 ;
-(id)adPrivacyDetailsAttributes;
-(NSDate *)webLoadStartTime;
-(NSDate *)loadStartTime;
-(void)setAdDataLoadTime:(double)arg1 ;
-(void)setBannerLoadTime:(double)arg1 ;
-(BOOL)hasTransparencyDetails;
-(void)_setAdPrivacyMarkPosition;
-(void)_forwardErrorToDelegate:(id)arg1 ;
-(BOOL)requestCalledbackError;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)cancelBannerViewAction;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(void)setDeterminingConstraintBasedWidth:(BOOL)arg1 ;
-(void)setConstraintBasedWidth:(double)arg1 ;
-(BOOL)determiningConstraintBasedWidth;
-(double)constraintBasedWidth;
-(void)setInSecondConstraintsPass:(BOOL)arg1 ;
-(int)screenfuls;
-(int)slotPosition;
-(id)currentAdIdentifier;
-(void)registerVideoPlayerForAdAnalytics:(id)arg1 ;
-(void)unregisterVideoPlayerForAdAnalytics:(id)arg1 ;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(void)adlibManagedVideoAdDidImpress;
-(void)adlibManagedVideoAdDidResumePlay;
-(void)adlibManagedVideoAdDidPausePlay;
-(void)adlibManagedVideoAdDidCompletePlay:(int)arg1 ;
-(void)adlibManagedVideoAdDidTapForMoreInfo;
-(void)adlibManagedVideoAdDidTapVideo;
-(void)adlibManagedVideoAdDidToggleToMute:(BOOL)arg1 ;
-(UIView *)adSpaceView;
-(NSString *)adResponseId;
-(void)setAdResponseId:(NSString *)arg1 ;
-(BOOL)reUsed;
-(void)setReUsed:(BOOL)arg1 ;
-(void)setViewSizeInPortrait:(CGSize)arg1 inLandscape:(CGSize)arg2 ;
-(void)creativeControllerViewWasTappedAtPoint:(CGPoint)arg1 withMRAIDAction:(id)arg2 ;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(BOOL)enableDimmerView:(id)arg1 ;
-(void)cycleImpressionImmediately;
-(void)setInternalAdType:(int)arg1 ;
-(void)prerollDidStart;
-(void)prerollDidStop;
-(void)setRequiredContentSizeIdentifiers:(id)arg1 ;
-(id)requiredContentSizeIdentifiers;
-(void)setCurrentContentSizeIdentifier:(id)arg1 ;
-(id)currentContentSizeIdentifier;
-(void)suspendImpressionCycling;
-(void)resumeImpressionCycling;
-(void)playbackStartedForImpressionSource:(int)arg1 ;
-(void)playbackFinished:(id)arg1 ;
-(void)playbackFailed:(id)arg1 ;
-(void)userDidSkipPreroll;
-(void)bannerDidAppear;
-(void)bannerDidDisappear;
-(void)cancelScheduledAd;
-(void)scheduleAd;
-(BOOL)isBannerViewActionInProgress;
-(NSString *)advertisingSection;
-(UIView *)highlightClippedView;
-(void)setHighlightClippedView:(UIView *)arg1 ;
-(UIView *)highlightHittableView;
-(void)setHighlightHittableView:(UIView *)arg1 ;
-(UILabel *)idLbl;
-(void)setIdLbl:(UILabel *)arg1 ;
-(NSTimer *)highlightUpdateTimer;
-(void)setHighlightUpdateTimer:(NSTimer *)arg1 ;
-(NSString *)authenticationUserName;
-(BOOL)createdForIBInternal;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(BOOL)inSecondConstraintsPass;
-(BOOL)imageUpdateEnabled;
-(void)setImageUpdateEnabled:(BOOL)arg1 ;
-(BOOL)debugHighlightEnabled;
-(void)setDebugHighlightEnabled:(BOOL)arg1 ;
-(BOOL)internalAdTypeCanChange;
-(void)setInternalAdTypeCanChange:(BOOL)arg1 ;
-(NSString *)originID;
-(NSDate *)adDisplayDate;
-(void)videoBannerDidUnload:(id)arg1 ;
-(BOOL)dimmed;
-(ADLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(ADLayoutOptions *)arg1 ;
-(BOOL)isBannerLoaded;
-(id)initWithAdType:(long long)arg1 ;
-(void)displayBannerView;
-(void)setScreenfuls:(int)arg1 ;
-(void)displayCreativeView;
-(void)setLastErrorCode:(long long)arg1 ;
-(void)removeCreativeView;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)setScrolling:(BOOL)arg1 ;
-(BOOL)scrolling;
-(void)playbackDidStart:(id)arg1 ;
-(void)playbackDidPause:(id)arg1 ;
-(void)playbackDidResume:(id)arg1 ;
-(void)playbackFailed:(id)arg1 forURL:(id)arg2 ;
-(void)playbackDidFinish:(id)arg1 ;
-(void)beginAction;
-(void)videoBannerVisibilityDidChange:(id)arg1 ;
-(void)playbackMediaWasSkipped:(id)arg1 ;
-(void)videoBannerDidLoad:(id)arg1 ;
-(void)playbackDidEnterFullscreen:(id)arg1 ;
-(void)playbackDidExitFullscreen:(id)arg1 ;
-(void)videoBannerTouched:(id)arg1 ;
-(void)playbackAudioWasMuted:(id)arg1 ;
-(void)playbackAudioWasUnmuted:(id)arg1 ;
-(double)skipThreshold;
-(void)privacyButtonWasTapped;
-(void)nextContentVideoStartedPlaying;
-(void)playbackDidReachProgressEvent:(id)arg1 ;
-(long long)lastErrorCode;
-(void)setDimmed:(BOOL)arg1 ;
-(id)nativeMetadata;
-(id)videoAssets;
-(void)setSlotPosition:(int)arg1 ;
-(id)_initWithInternalAdType:(int)arg1 layoutOptions:(id)arg2 options:(long long)arg3 ;
-(void)setOriginID:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ADBannerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ADBannerViewDelegate>)delegate;
-(void)setContext:(id)arg1 ;
-(id)context;
-(UIViewController *)presentingViewController;
-(void)setHidden:(BOOL)arg1 ;
-(int)action;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)didMoveToWindow;
-(long long)options;
-(void)_commonInit;
-(BOOL)displayed;
-(id)uniqueIdentifier;
-(BOOL)hasAction;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegate:(id)arg1 ;
@end

