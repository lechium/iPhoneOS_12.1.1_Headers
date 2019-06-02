/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APRIntentStreamUpdateInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, _CDLocalContext;
@class _ATXAppLaunchHistogramManager, _APRParzenModel, _ATXDuetHelper, _ATXAppInfoManager, _ATXAppLaunchSequenceManager, _ATXDataStore, NSObject, NSMutableSet, NSXPCListener, _PASLock, PETScalarEventTracker, PETDistributionEventTracker, ATXInternalAppRegistrationNotification, NSString;

@interface APRAppIntentMonitor : NSObject <APRIntentStreamUpdateInterface, NSXPCListenerDelegate> {

	_ATXAppLaunchHistogramManager* _appLaunchHistogramManager;
	_APRParzenModel* _siriKitParzenModel;
	_APRParzenModel* _nonSiriKitParzenModel;
	_ATXDuetHelper* _duetHelper;
	_ATXAppInfoManager* _appInfoManager;
	_ATXAppLaunchSequenceManager* _appActionLaunchSequenceManager;
	_ATXDataStore* _dataStore;
	NSObject*<OS_dispatch_queue> _appIntentHistoryQueue;
	id<_CDLocalContext> _context;
	NSMutableSet* _registrations;
	NSXPCListener* _listener;
	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _donationQueue;
	unsigned long long deletionHandlerToken;
	PETScalarEventTracker* _donatedActionsTracker;
	PETDistributionEventTracker* _donatedActionInCacheTracker;
	ATXInternalAppRegistrationNotification* _appRegistrationListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLaunchHistoryFromDuet;
-(void)_syncForTests;
-(void)notifyAboutIntentStreamChangeWithReply:(/*^block*/id)arg1 ;
-(id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 appInfoManager:(id)arg4 appActionLaunchSequenceManager:(id)arg5 dataStore:(id)arg6 ;
-(id)initWithAppLaunchHistogramManager:(id)arg1 siriKitParzenModel:(id)arg2 nonSiriKitParzenModel:(id)arg3 appInfoManager:(id)arg4 appActionLaunchSequenceManager:(id)arg5 duetHelper:(id)arg6 dataStore:(id)arg7 ;
-(void)listenToActivityStream;
-(void)listenToIntentStream;
-(void)displayDonationOnLockscreenWithAction:(id)arg1 ;
-(void)setCurrentAppSessionBundleId:(id)arg1 ;
-(id)currentAppSessionBundleId;
-(void)setInCallServiceStartDate:(id)arg1 ;
-(id)inCallServiceStartDate;
-(void)startAppSession:(id)arg1 ;
-(void)endAppSession:(id)arg1 ;
-(void)listenToAppSessionStarts;
-(void)listenToAppSessionEnds;
-(id)adjustedStartDateForFiveSecondFlooringWithAppSessionStartDate:(id)arg1 ;
-(id)adjustedEndDateForFiveSecondFlooringWithAppSessionEndDate:(id)arg1 ;
-(id)adjustedStartDateForIntentsWithAppSessionStartDate:(id)arg1 bundleId:(id)arg2 ;
-(void)updateActionPredictionPipelineForAppSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)setPendingNonSirikitIntentStatus:(BOOL)arg1 ;
-(void)setPendingNSUAStatus:(BOOL)arg1 ;
-(BOOL)shouldAcceptMessageDonation:(id)arg1 ;
-(void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4 ;
-(void)updateActionPredictionHistogramsForIntentEvent:(id)arg1 weight:(float)arg2 ;
-(void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg1 ;
-(void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg1 weight:(float)arg2 prevLocationUUID:(id)arg3 locationUUID:(id)arg4 currentMotionType:(long long)arg5 appSessionStartDate:(id)arg6 appSessionEndDate:(id)arg7 ;
-(void)logSirikitIntentWithDKUUIDKey:(id)arg1 bundleId:(id)arg2 ;
-(void)logIntentPredictionsForIntentEvent:(id)arg1 ;
-(void)updateLaunchHistoryFromDuet:(double)arg1 intentSource:(long long)arg2 ;
-(id)appActionLaunchSequenceManager;
-(void)updateLaunchHistoryFromDuetForInterval:(double)arg1 ;
-(void)updateLaunchHistoryFromDuetForSource:(long long)arg1 ;
-(void)recordIntentDonationWithType:(id)arg1 intentSource:(long long)arg2 bundleId:(id)arg3 startDate:(id)arg4 ;
-(void)handleSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 ;
-(void)handleNonSiriKitIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 ;
-(void)handleIntentDonationWithType:(id)arg1 bundleId:(id)arg2 startDate:(id)arg3 intentSource:(long long)arg4 ;
-(void)retrainParzenModelForIntentSource:(long long)arg1 ;
-(void)handleIntentOrActivityDeletion;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

