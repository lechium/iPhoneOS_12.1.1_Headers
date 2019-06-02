/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTVisitMonitorDelegate.h>

@class RTVisitMonitor, RTInvocationDispatcher, RTPersistenceManager, RTDefaultsManager, RTPlatform, RTLocationManager, RTHintManager, RTMetricManager, RTLocationAwarenessManager, NSManagedObjectContext, NSMutableArray, RTLearnedLocationManager, NSString;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate> {

	BOOL _spoofMode;
	RTVisitMonitor* _visitMonitor;
	RTInvocationDispatcher* _dispatcher;
	RTPersistenceManager* _persistenceManager;
	RTDefaultsManager* _defaultsManager;
	RTPlatform* _platform;
	RTLocationManager* _locationManager;
	RTHintManager* _hintManager;
	RTMetricManager* _metricManager;
	RTLocationAwarenessManager* _locationAwarenessManager;
	NSManagedObjectContext* _managedObjectContext;
	NSMutableArray* _spoofVisitIncidentTokens;
	RTLearnedLocationManager* _learnedLocationManager;

}

@property (nonatomic,retain) RTVisitMonitor * visitMonitor;                                      //@synthesize visitMonitor=_visitMonitor - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                          //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                        //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                    //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTLocationAwarenessManager * locationAwarenessManager;              //@synthesize locationAwarenessManager=_locationAwarenessManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                      //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic) BOOL spoofMode;                                                     //@synthesize spoofMode=_spoofMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * spoofVisitIncidentTokens;                          //@synthesize spoofVisitIncidentTokens=_spoofVisitIncidentTokens - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                  //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_setup;
-(RTLocationManager *)locationManager;
-(RTPlatform *)platform;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(RTInvocationDispatcher *)dispatcher;
-(void)fetchLastLowConfidenceVisitIncidentWithHandler:(/*^block*/id)arg1 ;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(id)initWithQueue:(id)arg1 persistenceManager:(id)arg2 defaultsManager:(id)arg3 platform:(id)arg4 locationManager:(id)arg5 learnedLocationManager:(id)arg6 hintManager:(id)arg7 metricManager:(id)arg8 locationAwarenessManager:(id)arg9 ;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTHintManager *)hintManager;
-(RTLocationAwarenessManager *)locationAwarenessManager;
-(void)onVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)onLeechedVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)onVisitMonitorStateChanged:(id)arg1 ;
-(void)onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)fetchLastVisitIncidentWithHandler:(/*^block*/id)arg1 ;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)setLocationAwarenessManager:(RTLocationAwarenessManager *)arg1 ;
-(void)simulateVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_setupVisitMonitor;
-(void)setSpoofVisitIncidentTokens:(NSMutableArray *)arg1 ;
-(void)setSpoofMode:(BOOL)arg1 ;
-(void)_saveManagedObjectContext;
-(void)_saveVisitMonitorState:(id)arg1 ;
-(void)setVisitMonitor:(RTVisitMonitor *)arg1 ;
-(RTVisitMonitor *)visitMonitor;
-(void)_updateStateForVisitIncidents;
-(void)_updateStateForLeechedVisitIncidents;
-(void)_updateStateForLowConfidenceVisitIncidents;
-(void)_fetchVisitsFromVisitMonitor:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 limit:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)_fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)spoofMode;
-(void)_onVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_onLeechedVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_onVisitMonitorStateChanged:(id)arg1 ;
-(NSMutableArray *)spoofVisitIncidentTokens;
-(id)registerForSpoofVisitIncidentOfCategory:(id)arg1 ;
-(void)unregisterForSpoofVisitIncidentWithToken:(int)arg1 ;
-(void)_simulateVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(NSManagedObjectContext *)managedObjectContext;
@end

