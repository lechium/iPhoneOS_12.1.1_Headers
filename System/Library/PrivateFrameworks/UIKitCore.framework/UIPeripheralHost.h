/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>
#import <UIKit/UIKeyboardKeyplaneTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPeripheralHostView, UIKeyboardAutomatic, UIPanGestureRecognizer, CADisplayLink, NSMutableArray, NSDate, UIInputViewSet, UIResponder, NSMutableSet, UIInputViewPostPinningReloadState, UIKeyboardRotationState, UIInputViewTransition, UIScrollView, NSMutableDictionary, UITextEffectsWindow, UITextInputMode, UIView, UIKeyboard, UIPeripheralHostState, NSString;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate> {

	UIPeripheralHostView* _hostView;
	UIKeyboardAutomatic* _automaticKeyboard;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _automaticKeyboardAnimatingIn;
	BOOL _automaticKeyboardAnimatingOut;
	int _ignoringReloadInputViews;
	int _ignoredReloads;
	BOOL _suppresingNotifications;
	BOOL _useHideNotificationsWhenNotVisible;
	BOOL _reloadInputViewsForcedIsAllowed;
	int _nextAutomaticOrderInDirection;
	long long _targetRotatedOrientation;
	BOOL _isTranslating;
	BOOL _isSplitting;
	BOOL _isUndocked;
	BOOL _splitLockState;
	UIPanGestureRecognizer* _translateRecognizer;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	CGAffineTransform _targetTransform;
	CGAffineTransform _initialTransform;
	CGPoint _velocity;
	NSMutableArray* _dropShadowViews;
	NSDate* __transitionStartTime;
	int _shadowStyle;
	BOOL _wasBackgroundSplit;
	CGRect _previousShadowFrameLeft;
	CGRect _previousShadowFrameRight;
	/*^block*/id _bounceCompletionBlock;
	double m_keyboardAttachedViewHeight;
	CGRect _lastKnownIVFrame;
	CGRect _lastKnownIAVFrame;
	NSMutableArray* _animationStyleStack;
	BOOL _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	double _lastAutomaticKeyboardDuration;
	long long _disableAnimationsCount;
	NSMutableArray* _targetStateStack;
	UIInputViewSet* _inputViewSet;
	UIResponder* _responder;
	NSMutableSet* _pinningResponders;
	BOOL _ignoresPinning;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	BOOL _animationFencingEnabled;
	BOOL _interfaceAutorotationDisabled;
	UIKeyboardRotationState* _rotationState;
	UIInputViewTransition* _currentTransition;
	UIScrollView* _scrollViewForTransition;
	BOOL _scrollViewShowsHorizontalScrollIndicator;
	UIInputViewTransition* _scrollViewTransition;
	BOOL _scrollViewTransitionFinishing;
	CGPoint _scrollViewTransitionPreviousPoint;
	CGPoint _scrollViewTransitionVelocity;
	UIResponder* _selfHostingTrigger;
	NSMutableDictionary* _preservedViewSets;
	NSMutableDictionary* _persistentInputAccessoryResponders;
	NSMutableArray* _persistentInputAccessoryResponderOrder;
	BOOL _didFadeInputViews;
	BOOL _blockedReloadInputViewsForDictation;
	BOOL _allowNilResponderReload;
	BOOL _animateCornerRefresh;
	BOOL _showCorners;
	NSMutableArray* _extraViews;
	int _clippingKeyboardMode;
	CGRect _clippingKeyboardAdjustmentStart;
	CGRect _clippingKeyboardAdjustmentEnd;
	double _ambiguousControlCenterActivationMargin;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	UITextEffectsWindow* _containerWindow;
	int _hostedAnimationToggleCount;
	int _deactivationCount;
	BOOL _dontNeedAssistantBar;
	/*^block*/id _deferredTransitionTask;
	double _lastKeyplaneResize;
	int _currentState;
	UIInputViewSet* _transientInputViewSet;
	UITextInputMode* _documentInputMode;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) NSMutableArray * dropShadowViews; 
@property (nonatomic,retain) NSDate * _transitionStartTime; 
@property (assign,nonatomic) BOOL automaticAppearanceInternalEnabled; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) BOOL ignoringReloadInputViews; 
@property (assign,nonatomic) double ambiguousControlCenterActivationMargin; 
@property (nonatomic,retain,readonly) UIResponder * responder; 
@property (assign,nonatomic) BOOL ignoresPinning; 
@property (assign,nonatomic) BOOL animationFencingEnabled; 
@property (nonatomic,readonly) UIKeyboard * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * loadAwareInputViews; 
@property (nonatomic,readonly) BOOL keyClicksEnabled; 
@property (nonatomic,retain) UIKeyboardRotationState * rotationState;                                         //@synthesize rotationState=_rotationState - In the implementation block
@property (nonatomic,retain) UIPeripheralHostState * targetState; 
@property (nonatomic,retain) UIResponder * responder;                                                         //@synthesize responder=_responder - In the implementation block
@property (nonatomic,retain) UIInputViewPostPinningReloadState * postPinningReloadState;                      //@synthesize postPinningReloadState=_postPinningReloadState - In the implementation block
@property (nonatomic,retain) UIInputViewTransition * currentTransition;                                       //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,readonly) BOOL automaticAppearanceReallyEnabled; 
@property (assign,nonatomic) BOOL animationFencingEnabled;                                                    //@synthesize animationFencingEnabled=_animationFencingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL animationsEnabled; 
@property (assign,nonatomic) double lastKeyplaneResize;                                                       //@synthesize lastKeyplaneResize=_lastKeyplaneResize - In the implementation block
@property (nonatomic,readonly) UIKeyboardAutomatic * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * _inputViews;                                                    //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSet * _transientInputViews;                                           //@synthesize transientInputViewSet=_transientInputViewSet - In the implementation block
@property (nonatomic,retain) UIResponder * selfHostingTrigger;                                                //@synthesize selfHostingTrigger=_selfHostingTrigger - In the implementation block
@property (assign,nonatomic) int currentState;                                                                //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) BOOL automaticAppearanceEnabled;                                                 //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (nonatomic,retain) UITextInputMode * documentInputMode;                                             //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(CGRect)visiblePeripheralFrame;
+(id)passthroughViews;
+(BOOL)inputViewSetContainsView:(id)arg1 ;
+(CGRect)visibleInputViewFrame;
+(void)_releaseSharedInstance;
+(Class)hostViewClass;
+(id)endPlacementForInputViewSet:(id)arg1 ;
+(CGPoint)defaultUndockedOffset;
+(double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double*)arg4 ;
+(CGRect)screenBoundsInAppOrientation;
+(BOOL)pointIsWithinKeyboardContent:(CGPoint)arg1 ;
-(id)init;
-(void)dealloc;
-(id)retain;
-(UIView *)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)contentView;
-(void)layoutIfNeeded;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(id)_inheritedRenderConfig;
-(BOOL)isRotating;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(BOOL)isOnScreen;
-(void)resetNextAutomaticOrderInDirectionAndDuration;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)prepareForAlongsideTransitionWithContext:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(double)getLastAutomaticDuration;
-(BOOL)_isTransitioning;
-(id)topAnimationStyle;
-(void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2 ;
-(void)_beginDisablingAnimations;
-(UIResponder *)responder;
-(void)_endDisablingAnimations;
-(void)_preserveInputViewsWithId:(id)arg1 ;
-(void)orderOutAutomaticExceptAccessoryView;
-(BOOL)automaticAppearanceEnabled;
-(void)forceOrderOutAutomatic;
-(int)currentState;
-(double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2 ;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg1 ;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2 ;
-(void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2 ;
-(void)setkeyboardAttachedViewHeight:(double)arg1 ;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg1 ;
-(void)_beginIgnoringReloadInputViews;
-(void)setAutomaticAppearanceInternalEnabled:(BOOL)arg1 ;
-(int)_endIgnoringReloadInputViews;
-(void)resetCurrentOrderOutAnimationDuration:(double)arg1 ;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(id)viewForTransitionScreenSnapshot;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(id)transformedContainerView;
-(void)setCurrentState:(int)arg1 ;
-(void)setResponder:(UIResponder *)arg1 ;
-(BOOL)keyClicksEnabled;
-(UIInputViewSet *)loadAwareInputViews;
-(CGRect)_inputViewRectToAvoid;
-(BOOL)minimize;
-(BOOL)maximize;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)updateInputAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(id)lastUsedInputModeForCurrentContext;
-(UIInputViewSet *)inputViews;
-(BOOL)isUndocked;
-(void)disableInterfaceAutorotation:(BOOL)arg1 ;
-(id)containerWindow;
-(void)_inputModeChangedWhileContextTracked;
-(UITextInputMode *)documentInputMode;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(void)setKeyboardOnScreenNotifyKey:(BOOL)arg1 ;
-(void)queueDelayedTask:(/*^block*/id)arg1 ;
-(BOOL)isSplitting;
-(BOOL)isTranslating;
-(void)prepareForTransition;
-(void)showDropShadows:(BOOL)arg1 ;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isCoordinatingWithSystemGestures;
-(double)ambiguousControlCenterActivationMargin;
-(void)setAutomaticAppearanceEnabled:(BOOL)arg1 ;
-(UIInputViewTransition *)currentTransition;
-(void)setAmbiguousControlCenterActivationMargin:(double)arg1 ;
-(id)nextAnimationStyle;
-(void)setCurrentTransition:(UIInputViewTransition *)arg1 ;
-(void)flushDelayedTasks;
-(NSDate *)_transitionStartTime;
-(void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(void)finishScrollViewTransition;
-(id)containerRootController;
-(void)syncToExistingAnimations;
-(UIInputViewSet *)_inputViews;
-(void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setUndockedWithOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderOutAutomaticSkippingAnimation;
-(BOOL)isOffScreen;
-(void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2 ;
-(void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2 ;
-(void)finishRotationOfKeyboard:(id)arg1 ;
-(void)prepareForRotationToOrientation:(long long)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(void)finishRotation;
-(void)forceOrderInAutomatic;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg1 ;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg1 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)manualKeyboardWillBeOrderedIn:(id)arg1 ;
-(void)manualKeyboardWasOrderedIn:(id)arg1 ;
-(void)manualKeyboardWillBeOrderedOut:(id)arg1 ;
-(void)manualKeyboardWasOrderedOut:(id)arg1 ;
-(void)moveToPersistentOffset;
-(BOOL)_hasPostPinningReloadState;
-(id)lastUsedInputModeForTextInputMode:(id)arg1 ;
-(BOOL)ignoresPinning;
-(BOOL)animationFencingEnabled;
-(void)setAnimationFencingEnabled:(BOOL)arg1 ;
-(void)setIgnoresPinning:(BOOL)arg1 ;
-(void)set_inputViews:(UIInputViewSet *)arg1 ;
-(void)peripheralHostWillResume:(id)arg1 ;
-(void)peripheralHostDidEnterBackground:(id)arg1 ;
-(void)textEffectsWindowDidRotate:(id)arg1 ;
-(void)inputModeChangedForRenderConfig:(id)arg1 ;
-(void)setListeningToSpringBoardKeyboardNotifications:(BOOL)arg1 ;
-(void)setRotationState:(UIKeyboardRotationState *)arg1 ;
-(void)set_transientInputViews:(UIInputViewSet *)arg1 ;
-(void)setSelfHostingTrigger:(UIResponder *)arg1 ;
-(void)setPostPinningReloadState:(UIInputViewPostPinningReloadState *)arg1 ;
-(void)executeTransition:(id)arg1 ;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(void)completeCurrentTransitionIfNeeded;
-(UIKeyboardRotationState *)rotationState;
-(void)translateDetected:(id)arg1 ;
-(id)_renderConfigForResponder:(id)arg1 ;
-(id)_renderConfigForCurrentResponder;
-(void)updateRenderConfigForCurrentResponder;
-(void)updateRenderConfigForResponder:(id)arg1 ;
-(CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(CGPoint)adjustedPersistentOffset;
-(void)showCorners:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)updateDropShadow;
-(void)updateBackdrop;
-(void)initializeTranslateGestureRecognizer;
-(UIPeripheralHostState *)targetState;
-(void)setTargetState:(UIPeripheralHostState *)arg1 ;
-(void)_onScreenStateDidChange;
-(void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(long long)arg1 outDirection:(int)arg2 forTransition:(int)arg3 ;
-(void)postDidShowNotification;
-(void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(void)postDidHideNotification;
-(id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2 ;
-(id)_screenForFirstResponder:(id)arg1 ;
-(void)_performRefreshCorners;
-(void)postDockingNotification;
-(void)refreshCorners;
-(void)postUndockingNotification;
-(void)fadeInInputViews:(BOOL)arg1 ;
-(void)undock;
-(void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)dock;
-(void)invalidateDisplayLink;
-(void)bounceAnimationDidFinish;
-(double)minimumOffsetForBuffer:(double)arg1 ;
-(BOOL)hasDictationKeyboard;
-(NSMutableArray *)dropShadowViews;
-(BOOL)automaticAppearanceReallyEnabled;
-(void)createAutomaticKeyboardIfNeeded;
-(void)createHostViewIfNeeded;
-(void)setPeripheralToolbarFrameForHostWidth:(double)arg1 ;
-(void)setPeripheralFrameForHostBounds:(CGRect)arg1 ;
-(CGSize)totalPeripheralSizeForOrientation:(long long)arg1 ;
-(void)layoutInputViewsForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)layoutInputViews;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(id)nextAnimationStyle:(BOOL)arg1 ;
-(BOOL)animationsEnabled;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(void)setKeyboardFencingEnabled:(BOOL)arg1 ;
-(void)fadeInputViewsIfNeeded;
-(void)showInputViewsIfNeeded;
-(void)_updateBounceAnimation:(id)arg1 ;
-(BOOL)_somePartOfKeyboardIsOnScreen:(id)arg1 ;
-(CGRect)_centerStretchRectForWidth:(double)arg1 ;
-(UIKeyboard *)automaticKeyboard;
-(void)orderOutWithAnimation:(BOOL)arg1 toDirection:(int)arg2 duration:(double)arg3 ;
-(double)lastKeyplaneResize;
-(void)setLastKeyplaneResize:(double)arg1 ;
-(UIInputViewSet *)_transientInputViews;
-(UIResponder *)selfHostingTrigger;
-(UIInputViewPostPinningReloadState *)postPinningReloadState;
-(BOOL)hasCustomInputView;
-(double)keyboardAttachedViewHeight;
-(CGRect)screenRectFromBounds:(CGRect)arg1 atCenter:(CGPoint)arg2 applyingSourceHeightDelta:(double)arg3 ;
-(id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(BOOL)arg3 forShow:(BOOL)arg4 ;
-(BOOL)userInfoContainsActualGeometryChange:(id)arg1 ;
-(BOOL)isHostingActiveImpl;
-(void)logGeometryDescriptionFromUserInfo:(id)arg1 ;
-(id)containerTextEffectsWindow;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(void)set_transitionStartTime:(NSDate *)arg1 ;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2 ;
-(void)_trackInputModeIfNecessary:(id)arg1 ;
-(BOOL)pinningPreventsInputViews:(id)arg1 ;
-(BOOL)_isIgnoringReloadInputViews;
-(void)setInputViews:(UIInputViewSet *)arg1 ;
-(void)performMultipleOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)_dismissOverlayedUI;
-(void)setDeactivatedKeyboard:(BOOL)arg1 ;
-(BOOL)_isSuppressedByManualKeyboard;
-(CGRect)calculateSnapshotRectForTransition:(id)arg1 forStart:(BOOL)arg2 ;
-(CGRect)calculateRectForTransition:(id)arg1 forStart:(BOOL)arg2 ;
-(id)containerForClippingMode:(int)arg1 onTransition:(id)arg2 ;
-(BOOL)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg1 ;
-(BOOL)maximizeWithAnimation:(BOOL)arg1 ;
-(id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3 ;
-(void)adjustHostViewForTransitionEndFrame:(id)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 forStart:(BOOL)arg2 ;
-(double)accessoryViewFadeDuration:(id)arg1 ;
-(void)adjustAccessoryViewForSubsumedTransition:(id)arg1 ;
-(void)adjustHostViewForTransitionStartFrame:(id)arg1 ;
-(void)enableKeyboardTyping;
-(void)endClippingForTransition:(id)arg1 ;
-(void)adjustHostViewForTransitionCompletion:(id)arg1 ;
-(CGRect)displayRectForViewSet:(id)arg1 orientation:(long long)arg2 position:(int)arg3 fromRotation:(BOOL)arg4 ;
-(CGRect)localDisplayRectForViewSet:(id)arg1 ;
-(CGRect)localDisplayRectForViewSet:(id)arg1 position:(int)arg2 ;
-(void)setInputViews:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(BOOL)arg3 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3 ;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)performWithAllowingNilResponderReload:(/*^block*/id)arg1 ;
-(BOOL)_isSelfHosting;
-(void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1 ;
-(void)updateScrollViewContentInsetBottom:(double)arg1 ;
-(void)scrollView:(id)arg1 didPanWithGesture:(id)arg2 ;
-(void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2 ;
-(id)containerTextEffectsWindowAboveStatusBar;
-(void)prepareForPinning;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1 ;
-(void)_updateContainerWindowLevel;
-(void)forceReloadInputViews;
-(int)_isKeyboardDeactivated;
-(void)performWithoutDeactivation:(/*^block*/id)arg1 ;
-(void)_setHosted:(BOOL)arg1 ;
-(void)_clearPinningResponders;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)_isTrackingResponder:(id)arg1 ;
-(BOOL)automaticAppearanceInternalEnabled;
-(CGRect)visiblePeripheralFrame:(BOOL)arg1 ;
-(CGPoint)offHostPointForPoint:(CGPoint)arg1 ;
-(void)prepareToAnimateClippedKeyboardWithOffsets:(CGRect)arg1 orderingIn:(BOOL)arg2 onSnapshot:(BOOL)arg3 ;
-(void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(BOOL)shouldApplySettingsForBackdropView:(id)arg1 ;
-(id)computeTransitionForInputViews:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 ;
-(BOOL)skipTransitionForInputViews:(id)arg1 ;
-(id)_currentInputView;
-(void)removePreservedInputViewSetForInputView:(id)arg1 ;
-(BOOL)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2 ;
-(void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1 ;
-(BOOL)_isAccessoryViewChangedOnly;
-(BOOL)_shouldDelayRotationForWindow:(id)arg1 ;
-(void)animateKeyboardOutWithDuration:(double)arg1 delta:(double)arg2 ;
@end

