/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTPredictionControllerApplication, RTPredictionControllerApplicationHome, RTDefaultsManager, RTAuthorizationManager, RTPersistenceManager, RTLocationTagger, RTLocationManager, RTMetricManager, RTPredictionControllerHero, NSDictionary, RTApplicationManager, RTDataProtectionManager, RTPredictionExpertApplicationDataSource, RTPlatform, RTXPCActivityManager;

@interface RTPredictedApplicationManager : RTService {

	BOOL _training;
	RTPredictionControllerApplication* _magicalMomentsPredictionController;
	RTPredictionControllerApplicationHome* _homeMagicalMomentsPredictionController;
	/*^block*/id _dataProcessingFinalizeBlock;
	RTDefaultsManager* _defaultsManager;
	RTAuthorizationManager* _authorizationManager;
	RTPersistenceManager* _persistenceManager;
	RTLocationTagger* _locationTagger;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTPredictionControllerHero* _heroAppPredictionController;
	NSDictionary* _dataProviders;
	RTApplicationManager* _applicationManager;
	RTDataProtectionManager* _dataProtectionManager;
	RTPredictionExpertApplicationDataSource* _dataSource;
	RTPlatform* _platform;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) RTPredictionControllerApplication * magicalMomentsPredictionController;                      //@synthesize magicalMomentsPredictionController=_magicalMomentsPredictionController - In the implementation block
@property (nonatomic,retain) RTPredictionControllerApplicationHome * homeMagicalMomentsPredictionController;              //@synthesize homeMagicalMomentsPredictionController=_homeMagicalMomentsPredictionController - In the implementation block
@property (nonatomic,copy) id dataProcessingFinalizeBlock;                                                                //@synthesize dataProcessingFinalizeBlock=_dataProcessingFinalizeBlock - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                                         //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                                               //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                                                   //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTLocationTagger * locationTagger;                                                           //@synthesize locationTagger=_locationTagger - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                                         //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                                             //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPredictionControllerHero * heroAppPredictionController;                                    //@synthesize heroAppPredictionController=_heroAppPredictionController - In the implementation block
@property (nonatomic,retain) NSDictionary * dataProviders;                                                                //@synthesize dataProviders=_dataProviders - In the implementation block
@property (nonatomic,retain) RTApplicationManager * applicationManager;                                                   //@synthesize applicationManager=_applicationManager - In the implementation block
@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;                                             //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTPredictionExpertApplicationDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                                       //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;                                                   //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)shutdown;
-(RTAuthorizationManager *)authorizationManager;
-(RTLocationManager *)locationManager;
-(RTPlatform *)platform;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(NSDictionary *)dataProviders;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictedApplications:(/*^block*/id)arg1 ;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithDataProviders:(id)arg1 predictionControllerApplication:(id)arg2 predictionControllerApplicationHome:(id)arg3 predictionControllerHero:(id)arg4 metricManager:(id)arg5 applicationManager:(id)arg6 dataProtectionManager:(id)arg7 dataSource:(id)arg8 platform:(id)arg9 xpcActivityMangaer:(id)arg10 ;
-(RTDefaultsManager *)defaultsManager;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
-(RTLocationTagger *)locationTagger;
-(void)setLocationTagger:(RTLocationTagger *)arg1 ;
-(void)setDataProviders:(NSDictionary *)arg1 ;
-(void)fetchMagicalMomentsModelPropertyListRepresentation:(/*^block*/id)arg1 ;
-(void)fetchPredictedApplicationsForEvent:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)processDataForPredictionModelWithHandler:(/*^block*/id)arg1 ;
-(void)printMagicalMomentsModel:(/*^block*/id)arg1 ;
-(RTApplicationManager *)applicationManager;
-(void)setApplicationManager:(RTApplicationManager *)arg1 ;
-(void)_finalizeDataProcessingWithError:(id)arg1 ;
-(void)onProtectedDataAvailabilityUpdate:(id)arg1 ;
-(RTPredictionControllerApplication *)magicalMomentsPredictionController;
-(RTPredictionControllerApplicationHome *)homeMagicalMomentsPredictionController;
-(RTPredictionControllerHero *)heroAppPredictionController;
-(void)_stopMonitoringForPredictedApplications;
-(void)_startMonitoringForPredictedApplications;
-(void)onRealtimeEventNotification:(id)arg1 ;
-(void)onHeroAppPrediction:(id)arg1 ;
-(void)_processRealtimeEvent:(id)arg1 ;
-(void)_submitRealtimeEventMetricWithEvent:(id)arg1 ;
-(void)_onHeroAppPrediction:(id)arg1 ;
-(void)setMagicalMomentsPredictionController:(RTPredictionControllerApplication *)arg1 ;
-(void)setHomeMagicalMomentsPredictionController:(RTPredictionControllerApplicationHome *)arg1 ;
-(id)dataProcessingFinalizeBlock;
-(void)setDataProcessingFinalizeBlock:(id)arg1 ;
-(void)setHeroAppPredictionController:(RTPredictionControllerHero *)arg1 ;
-(id)init;
-(RTPredictionExpertApplicationDataSource *)dataSource;
-(void)setDataSource:(RTPredictionExpertApplicationDataSource *)arg1 ;
@end
