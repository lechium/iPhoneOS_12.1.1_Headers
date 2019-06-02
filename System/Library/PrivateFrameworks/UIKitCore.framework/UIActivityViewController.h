/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UIActionSheetPresentationControllerDelegate.h>
#import <UIKitCore/_UIActivityHelperDelegate.h>
#import <UIKitCore/_UIShareExtensionHost.h>

@protocol NSCopying, _UIShareExtensionService, UIActivityViewControllerDelegate;
@class NSArray, _UIShareExtensionRemoteViewController, NSExtension, UISUIActivityViewControllerConfiguration, _UIActivityGroupListViewController, NSMutableDictionary, _UIActivityHelper, UIAlertController, _UIAlertControllerShimPresenter, UIAlertAction, NSOperationQueue, NSString, UIActivity, UIViewController;

@interface UIActivityViewController : UIViewController <UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIViewControllerRestoration, UIActionSheetPresentationControllerDelegate, _UIActivityHelperDelegate, _UIShareExtensionHost> {

	BOOL _waitingForInitialShareServicePreferredContentSize;
	BOOL _shareServicePreferredContentSizeIsValid;
	BOOL __viewServiceBeganConnecting;
	BOOL _dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
	BOOL _willDismissActivityViewController;
	BOOL _performActivityForStateRestoration;
	BOOL _shouldMatchOnlyUserElectedExtensions;
	BOOL _hasPerformedInitialPresentation;
	BOOL _isPerformingPresentation;
	BOOL _allowsEmbedding;
	BOOL _showKeyboardAutomatically;
	BOOL _sourceIsManaged;
	/*^block*/id _completionHandler;
	/*^block*/id _completionWithItemsHandler;
	NSArray* _excludedActivityTypes;
	_UIShareExtensionRemoteViewController* _remoteContentViewController;
	NSExtension* _shareExtension;
	id<NSCopying> _extensionRequestIdentifier;
	id<_UIShareExtensionService> _shareExtensionService;
	UISUIActivityViewControllerConfiguration* _activityViewControllerConfiguration;
	_UIActivityGroupListViewController* _placeholderViewController;
	NSArray* _activityItems;
	NSArray* _applicationActivities;
	NSMutableDictionary* _activitiesByUUID;
	_UIActivityHelper* _activityHelper;
	long long _originalPopoverBackgroundStyle;
	Class _originalPopoverBackgroundViewClass;
	/*^block*/id __popoverDismissalAction;
	/*^block*/id _activityPresentationCompletionHandler;
	UIAlertController* _activityAlertController;
	_UIAlertControllerShimPresenter* _activityAlertControllerShimPresenter;
	UIAlertAction* _activityAlertCancelAction;
	NSArray* _activityItemProviderOperations;
	NSOperationQueue* _activityItemProviderOperationQueue;
	long long _totalProviderCount;
	long long _completedProviderCount;
	unsigned long long _backgroundTaskIdentifier;
	NSString* _subject;
	unsigned long long _clientAttemptedInitialPresentationOrEmbeddingTimestamp;
	unsigned long long _beginPerformingActivityTimestamp;
	unsigned long long _viewWillAppearTimestamp;
	unsigned long long _readyToInteractTimestamp;
	NSArray* _activityTypesToCreateInShareService;
	NSArray* _resolvedActivityItemsForCurrentActivity;
	/*^block*/id _shareSheetReadyToInteractHandler;
	/*^block*/id _preCompletionHandler;
	NSArray* _includedActivityTypes;
	long long _excludedActivityCategories;
	NSArray* _activityTypeOrder;
	UIActivity* _activity;
	UIViewController* _activityViewController;
	id<UIActivityViewControllerDelegate> _airDropDelegate;

}

@property (nonatomic,copy) id dismissCompletionHandler; 
@property (nonatomic,retain) _UIShareExtensionRemoteViewController * remoteContentViewController;                                                                                                                                                      //@synthesize remoteContentViewController=_remoteContentViewController - In the implementation block
@property (nonatomic,retain) NSExtension * shareExtension;                                                                                                                                                                                             //@synthesize shareExtension=_shareExtension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                                                                                                                                                                   //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) id<_UIShareExtensionService> shareExtensionService;                                                                                                                                                                       //@synthesize shareExtensionService=_shareExtensionService - In the implementation block
@property (nonatomic,retain) UISUIActivityViewControllerConfiguration * activityViewControllerConfiguration;                                                                                                                                           //@synthesize activityViewControllerConfiguration=_activityViewControllerConfiguration - In the implementation block
@property (assign,nonatomic) BOOL waitingForInitialShareServicePreferredContentSize;                                                                                                                                                                   //@synthesize waitingForInitialShareServicePreferredContentSize=_waitingForInitialShareServicePreferredContentSize - In the implementation block
@property (assign,nonatomic) BOOL shareServicePreferredContentSizeIsValid;                                                                                                                                                                             //@synthesize shareServicePreferredContentSizeIsValid=_shareServicePreferredContentSizeIsValid - In the implementation block
@property (assign,nonatomic) BOOL _viewServiceBeganConnecting;                                                                                                                                                                                         //@synthesize _viewServiceBeganConnecting=__viewServiceBeganConnecting - In the implementation block
@property (setter=_setPlaceholderViewController:,getter=_placeholderViewController,nonatomic,retain) _UIActivityGroupListViewController * placeholderViewController;                                                                                   //@synthesize placeholderViewController=_placeholderViewController - In the implementation block
@property (nonatomic,copy) NSArray * activityItems;                                                                                                                                                                                                    //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,copy) NSArray * applicationActivities;                                                                                                                                                                                            //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activitiesByUUID;                                                                                                                                                                                   //@synthesize activitiesByUUID=_activitiesByUUID - In the implementation block
@property (nonatomic,retain) _UIActivityHelper * activityHelper;                                                                                                                                                                                       //@synthesize activityHelper=_activityHelper - In the implementation block
@property (assign,nonatomic) long long originalPopoverBackgroundStyle;                                                                                                                                                                                 //@synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle - In the implementation block
@property (nonatomic,retain) Class originalPopoverBackgroundViewClass;                                                                                                                                                                                 //@synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass - In the implementation block
@property (nonatomic,copy) id _popoverDismissalAction;                                                                                                                                                                                                 //@synthesize _popoverDismissalAction=__popoverDismissalAction - In the implementation block
@property (assign,nonatomic) BOOL dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;                                                                                                                                               //@synthesize dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel=_dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel - In the implementation block
@property (assign,nonatomic) BOOL willDismissActivityViewController;                                                                                                                                                                                   //@synthesize willDismissActivityViewController=_willDismissActivityViewController - In the implementation block
@property (setter=_setActivityPresentationCompletionHandler:,getter=_activityPresentationCompletionHandler,nonatomic,copy) id activityPresentationCompletionHandler;                                                                                   //@synthesize activityPresentationCompletionHandler=_activityPresentationCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertController * activityAlertController;                                                                                                                                                                              //@synthesize activityAlertController=_activityAlertController - In the implementation block
@property (nonatomic,retain) _UIAlertControllerShimPresenter * activityAlertControllerShimPresenter;                                                                                                                                                   //@synthesize activityAlertControllerShimPresenter=_activityAlertControllerShimPresenter - In the implementation block
@property (nonatomic,retain) UIAlertAction * activityAlertCancelAction;                                                                                                                                                                                //@synthesize activityAlertCancelAction=_activityAlertCancelAction - In the implementation block
@property (nonatomic,retain) NSArray * activityItemProviderOperations;                                                                                                                                                                                 //@synthesize activityItemProviderOperations=_activityItemProviderOperations - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityItemProviderOperationQueue;                                                                                                                                                                    //@synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue - In the implementation block
@property (assign,nonatomic) long long totalProviderCount;                                                                                                                                                                                             //@synthesize totalProviderCount=_totalProviderCount - In the implementation block
@property (assign,nonatomic) long long completedProviderCount;                                                                                                                                                                                         //@synthesize completedProviderCount=_completedProviderCount - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                                                                                                                                                                              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                                                                                                                                                                         //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) BOOL performActivityForStateRestoration;                                                                                                                                                                                  //@synthesize performActivityForStateRestoration=_performActivityForStateRestoration - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;                                                                                                                                                                                //@synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions - In the implementation block
@property (assign,setter=_setHasPerformedInitialPresentation:,getter=_hasPerformedInitialPresentation,nonatomic) BOOL hasPerformedInitialPresentation;                                                                                                 //@synthesize hasPerformedInitialPresentation=_hasPerformedInitialPresentation - In the implementation block
@property (assign,setter=_setIsPerformingPresentation:,getter=_isPerformingPresentation,nonatomic) BOOL isPerformingPresentation;                                                                                                                      //@synthesize isPerformingPresentation=_isPerformingPresentation - In the implementation block
@property (assign,setter=_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:,getter=_clientAttemptedInitialPresentationOrEmbeddingTimestamp,nonatomic) unsigned long long clientAttemptedInitialPresentationOrEmbeddingTimestamp;              //@synthesize clientAttemptedInitialPresentationOrEmbeddingTimestamp=_clientAttemptedInitialPresentationOrEmbeddingTimestamp - In the implementation block
@property (assign,setter=_setBeginPerformingActivityTimestamp:,getter=_beginPerformingActivityTimestamp,nonatomic) unsigned long long beginPerformingActivityTimestamp;                                                                                //@synthesize beginPerformingActivityTimestamp=_beginPerformingActivityTimestamp - In the implementation block
@property (assign,setter=_setViewWillAppearTimestamp:,getter=_viewWillAppearTimestamp,nonatomic) unsigned long long viewWillAppearTimestamp;                                                                                                           //@synthesize viewWillAppearTimestamp=_viewWillAppearTimestamp - In the implementation block
@property (assign,setter=_setReadyToInteractTimestamp:,getter=_readyToInteractTimestamp,nonatomic) unsigned long long readyToInteractTimestamp;                                                                                                        //@synthesize readyToInteractTimestamp=_readyToInteractTimestamp - In the implementation block
@property (nonatomic,retain) NSArray * activityTypesToCreateInShareService;                                                                                                                                                                            //@synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedActivityItemsForCurrentActivity;                                                                                                                                                                      //@synthesize resolvedActivityItemsForCurrentActivity=_resolvedActivityItemsForCurrentActivity - In the implementation block
@property (setter=_setShareSheetReadyToInteractHandler:,getter=_shareSheetReadyToInteractHandler,nonatomic,copy) id shareSheetReadyToInteractHandler;                                                                                                  //@synthesize shareSheetReadyToInteractHandler=_shareSheetReadyToInteractHandler - In the implementation block
@property (nonatomic,copy) id preCompletionHandler;                                                                                                                                                                                                    //@synthesize preCompletionHandler=_preCompletionHandler - In the implementation block
@property (nonatomic,copy) NSArray * includedActivityTypes;                                                                                                                                                                                            //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (assign,nonatomic) long long excludedActivityCategories;                                                                                                                                                                                     //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (nonatomic,copy) NSArray * activityTypeOrder;                                                                                                                                                                                                //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) BOOL allowsEmbedding;                                                                                                                                                                                                     //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (assign,nonatomic) BOOL showKeyboardAutomatically;                                                                                                                                                                                           //@synthesize showKeyboardAutomatically=_showKeyboardAutomatically - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                                                                                                                                                                     //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) UIActivity * activity;                                                                                                                                                                                                    //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) UIViewController * activityViewController;                                                                                                                                                                                //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityViewControllerDelegate> airDropDelegate;                                                                                                                                                              //@synthesize airDropDelegate=_airDropDelegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                                                                                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id completionWithItemsHandler;                                                                                                                                                                                              //@synthesize completionWithItemsHandler=_completionWithItemsHandler - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                                                                                                                                                                            //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(BOOL)_usesActionSheetPresentationController;
+(double)_asyncPresentationTimeout;
+(BOOL)_popoverPresentationUsesModernPresentation;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_containedAlertController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)completionHandler;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)__viewControllerWillBePresented:(BOOL)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setCompletionWithItemsHandler:(id)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(UIViewController *)activityViewController;
-(BOOL)sourceIsManaged;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_cancel;
-(void)setShouldMatchOnlyUserElectedExtensions:(BOOL)arg1 ;
-(id)_availableActivities;
-(BOOL)shouldMatchOnlyUserElectedExtensions;
-(UIActivity *)activity;
-(NSArray *)excludedActivityTypes;
-(NSArray *)activityItems;
-(NSArray *)applicationActivities;
-(NSArray *)includedActivityTypes;
-(long long)excludedActivityCategories;
-(BOOL)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3 ;
-(NSArray *)activityTypeOrder;
-(void)setActivityTypeOrder:(NSArray *)arg1 ;
-(void)setIncludedActivityTypes:(NSArray *)arg1 ;
-(void)setExcludedActivityCategories:(long long)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(id)_activityItemValues;
-(BOOL)allowsEmbedding;
-(void)setActivitiesByUUID:(NSMutableDictionary *)arg1 ;
-(void)setActivityItems:(NSArray *)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)_setupLegacyAlertPresentationControllers;
-(void)_connectToRemoteViewServiceOnceWithPriming:(BOOL)arg1 previousAttempts:(long long)arg2 ;
-(id<_UIShareExtensionService>)shareExtensionService;
-(void)_preheatActivityViewControllerConfiguration;
-(BOOL)_viewServiceBeganConnecting;
-(void)set_viewServiceBeganConnecting:(BOOL)arg1 ;
-(void)setShareExtension:(NSExtension *)arg1 ;
-(void)setRemoteContentViewController:(_UIShareExtensionRemoteViewController *)arg1 ;
-(void)setShareExtensionService:(id<_UIShareExtensionService>)arg1 ;
-(void)_sendInitialShareServiceConfigurationAndUpdatePreferredContentSize;
-(void)_retryRemoteViewServiceConnectionIfPossibleWithPriming:(BOOL)arg1 previousAttempts:(long long)arg2 ;
-(void)_preloadInitialConfigurationLocallyIfNeeded;
-(void)setWaitingForInitialShareServicePreferredContentSize:(BOOL)arg1 ;
-(void)_loadActivityViewControllerConfiguration;
-(void)_embedRemoteContentViewControllerAndPerformAfterCompletingFencedCommit:(/*^block*/id)arg1 ;
-(BOOL)waitingForInitialShareServicePreferredContentSize;
-(BOOL)shareServicePreferredContentSizeIsValid;
-(_UIShareExtensionRemoteViewController *)remoteContentViewController;
-(void)_removePlaceholderViewControllerIfNeeded;
-(BOOL)_hasPerformedInitialPresentation;
-(void)_preheatActivitiesIfNeeded;
-(void)setWillDismissActivityViewController:(BOOL)arg1 ;
-(void)setActivityAlertCancelAction:(UIAlertAction *)arg1 ;
-(void)setActivityAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)activityAlertController;
-(void)setActivityAlertControllerShimPresenter:(_UIAlertControllerShimPresenter *)arg1 ;
-(id)_activityItemURLValuesForMatching;
-(id)_placeholderActivityItemValues;
-(void)_updateActivityViewControllerConfiguration;
-(_UIAlertControllerShimPresenter *)activityAlertControllerShimPresenter;
-(void)_installViewController:(id)arg1 ;
-(id)_placeholderViewController;
-(void)_shareSheetReadyToInteractAfterCACommit:(BOOL)arg1 ;
-(void)_setPlaceholderViewController:(id)arg1 ;
-(/*^block*/id)_shareSheetReadyToInteractHandler;
-(void)_setShareSheetReadyToInteractHandler:(/*^block*/id)arg1 ;
-(void)_setReadyToInteractTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)_clientAttemptedInitialPresentationOrEmbeddingTimestamp;
-(BOOL)_shouldIncludeTagsUIPlaceholderWithActivityItemValues:(id)arg1 ;
-(BOOL)_isAirDropExcludedWithActivityItemValues:(id)arg1 ;
-(BOOL)_isSharingRowExcluded;
-(BOOL)_isActionRowExcluded;
-(void)_setHasPerformedInitialPresentation:(BOOL)arg1 ;
-(void)_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:(unsigned long long)arg1 ;
-(void)_primeExtensionDiscovery;
-(void)_createAndInstallPlaceholderViewControllerIfNeeded;
-(BOOL)_isPerformingPresentation;
-(void)_presentationOrEmbeddingDidBegin:(BOOL)arg1 ;
-(unsigned long long)_viewWillAppearTimestamp;
-(void)_setViewWillAppearTimestamp:(unsigned long long)arg1 ;
-(void)_setIsPerformingPresentation:(BOOL)arg1 ;
-(void)_updatePlaceholderPreferredContentSize;
-(void)_shareExtensionServicePreferredContentSizeUpdated:(CGSize)arg1 ;
-(void)_changeActionSheetAvoidsKeyboardDisabledUntilNextUpdatePreferredContentSize:(BOOL)arg1 ;
-(void)_updateSourceIsManagedForURLs;
-(BOOL)willDismissActivityViewController;
-(NSMutableDictionary *)activitiesByUUID;
-(void)setActivity:(UIActivity *)arg1 ;
-(void)_endDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
-(void)_endInProgressActivityExecutionForcedStrongReference;
-(void)setPreCompletionHandler:(id)arg1 ;
-(void)_performDismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_emitInteractionTelemetry:(BOOL)arg1 error:(id)arg2 ;
-(void)_clearActivity;
-(void)setActivityItemProviderOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setShareServicePreferredContentSizeIsValid:(BOOL)arg1 ;
-(void)_cleanupActivityWithSuccess:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(BOOL)performActivityForStateRestoration;
-(void)_cleanupActivityWithSuccess:(BOOL)arg1 ;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
-(void)setPerformActivityForStateRestoration:(BOOL)arg1 ;
-(unsigned long long)_beginPerformingActivityTimestamp;
-(/*^block*/id)_activityPresentationCompletionHandler;
-(void)_setActivityPresentationCompletionHandler:(/*^block*/id)arg1 ;
-(void)set_popoverDismissalAction:(id)arg1 ;
-(unsigned long long)_readyToInteractTimestamp;
-(void)_setBeginPerformingActivityTimestamp:(unsigned long long)arg1 ;
-(void)_beginInProgressActivityExecutionForcedStrongReference;
-(void)_resetAfterActivity:(BOOL)arg1 ;
-(BOOL)_queueBackgroundOperationsForActivityItems:(id)arg1 activityBeingPerformed:(id)arg2 ;
-(void)_executeActivity;
-(BOOL)_shouldExecuteItemOperation:(id)arg1 forActivity:(id)arg2 ;
-(void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1 ;
-(UIAlertAction *)activityAlertCancelAction;
-(id)_popoverDismissalAction;
-(NSOperationQueue *)activityItemProviderOperationQueue;
-(void)_removeFromActivitiesByUUID:(id)arg1 ;
-(void)_insertIntoActivitiesByUUID:(id)arg1 ;
-(_UIActivityHelper *)activityHelper;
-(id)_newActivityMatchingContext;
-(id)_newShareUIConfigurationWithMatchingResults:(id)arg1 ;
-(void)setActivityViewControllerConfiguration:(UISUIActivityViewControllerConfiguration *)arg1 ;
-(id)_activityConfigurationsForActivities:(id)arg1 ;
-(NSArray *)activityTypesToCreateInShareService;
-(void)setActivityTypesToCreateInShareService:(NSArray *)arg1 ;
-(id)_securityScopedURLsForMatching;
-(void)setAllowsEmbedding:(BOOL)arg1 ;
-(id)_configurationForActivity:(id)arg1 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)_shareServiceFinishedInitialPreferredContentSizeUpdate;
-(void)_changeActionPresentationDismissButtonTitle:(id)arg1 ;
-(void)_changeActionPresentationDismissButtonHidden:(BOOL)arg1 ;
-(NSExtension *)shareExtension;
-(id)_activityWithActivityUUID:(id)arg1 ;
-(id<UIActivityViewControllerDelegate>)airDropDelegate;
-(void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1 ;
-(void)shareExtensionServiceChangeSheetDismissButtonHidden:(BOOL)arg1 ;
-(void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
-(void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2 ;
-(void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1 ;
-(void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1 ;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
-(void)_updateActivityItems:(id)arg1 ;
-(double)_displayHeight;
-(void)_performActivityOfType:(id)arg1 executionEnvironment:(long long)arg2 ;
-(id)_newShareUIConfigurationForCurrentState;
-(id)completionWithItemsHandler;
-(UISUIActivityViewControllerConfiguration *)activityViewControllerConfiguration;
-(void)setActivityHelper:(_UIActivityHelper *)arg1 ;
-(long long)originalPopoverBackgroundStyle;
-(void)setOriginalPopoverBackgroundStyle:(long long)arg1 ;
-(Class)originalPopoverBackgroundViewClass;
-(void)setOriginalPopoverBackgroundViewClass:(Class)arg1 ;
-(BOOL)dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
-(void)setDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel:(BOOL)arg1 ;
-(NSArray *)activityItemProviderOperations;
-(void)setActivityItemProviderOperations:(NSArray *)arg1 ;
-(long long)totalProviderCount;
-(void)setTotalProviderCount:(long long)arg1 ;
-(long long)completedProviderCount;
-(void)setCompletedProviderCount:(long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(NSArray *)resolvedActivityItemsForCurrentActivity;
-(id)preCompletionHandler;
-(BOOL)showKeyboardAutomatically;
-(void)setShowKeyboardAutomatically:(BOOL)arg1 ;
-(void)setAirDropDelegate:(id<UIActivityViewControllerDelegate>)arg1 ;
@end

