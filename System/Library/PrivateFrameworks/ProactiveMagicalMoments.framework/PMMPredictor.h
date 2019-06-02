/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMMDataProtectionMonitorDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class CXCallObserver, RTRoutineManager, PMMAudioDisconnectListener, PMMAppsSettingsMonitor, PMMMusicStateProcessor, NSObject, PMMTelephonyConnection, PMMDataProtectionMonitor, RTPredictedApplication, NSString, NSDate, PETScalarEventTracker;

@interface PMMPredictor : NSObject <PMMDataProtectionMonitorDelegate, CXCallObserverDelegate> {

	BOOL _callInProgress;
	CXCallObserver* _callObserver;
	BOOL _unlockedSinceBoot;
	RTRoutineManager* _routineManager;
	PMMAudioDisconnectListener* _disconnectListener;
	PMMAppsSettingsMonitor* _myAppsSettingsMonitor;
	PMMMusicStateProcessor* _musicStateProcessor;
	NSObject*<OS_dispatch_queue> _nowPlayingStatusQueue;
	PMMTelephonyConnection* _ctConnection;
	PMMDataProtectionMonitor* _dataProtectionMonitor;
	RTPredictedApplication* _mostRecentPrediction;
	RTPredictedApplication* _mostRecentNowPlayingPrediction;
	NSString* _mostRecentNowPlayingApp;
	NSDate* _dateOfLastNowPlayingEvent;
	long long _encryptedDataAvailability;
	long long _dataProtectionStatus;
	PETScalarEventTracker* _mmAppSuggestion;
	PETScalarEventTracker* _heroAppSuggestion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;                                    //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) PMMAudioDisconnectListener * disconnectListener;                      //@synthesize disconnectListener=_disconnectListener - In the implementation block
@property (nonatomic,retain) PMMAppsSettingsMonitor * myAppsSettingsMonitor;                       //@synthesize myAppsSettingsMonitor=_myAppsSettingsMonitor - In the implementation block
@property (nonatomic,retain) PMMMusicStateProcessor * musicStateProcessor;                         //@synthesize musicStateProcessor=_musicStateProcessor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nowPlayingStatusQueue;                   //@synthesize nowPlayingStatusQueue=_nowPlayingStatusQueue - In the implementation block
@property (nonatomic,retain) PMMTelephonyConnection * ctConnection;                                //@synthesize ctConnection=_ctConnection - In the implementation block
@property (nonatomic,retain) PMMDataProtectionMonitor * dataProtectionMonitor;                     //@synthesize dataProtectionMonitor=_dataProtectionMonitor - In the implementation block
@property (nonatomic,retain) RTPredictedApplication * mostRecentPrediction;                        //@synthesize mostRecentPrediction=_mostRecentPrediction - In the implementation block
@property (nonatomic,retain) RTPredictedApplication * mostRecentNowPlayingPrediction;              //@synthesize mostRecentNowPlayingPrediction=_mostRecentNowPlayingPrediction - In the implementation block
@property (nonatomic,retain) NSString * mostRecentNowPlayingApp;                                   //@synthesize mostRecentNowPlayingApp=_mostRecentNowPlayingApp - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastNowPlayingEvent;                                   //@synthesize dateOfLastNowPlayingEvent=_dateOfLastNowPlayingEvent - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                                  //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                                               //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (assign,nonatomic) long long dataProtectionStatus;                                       //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * mmAppSuggestion;                              //@synthesize mmAppSuggestion=_mmAppSuggestion - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * heroAppSuggestion;                            //@synthesize heroAppSuggestion=_heroAppSuggestion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getHighestConfidencePredictionForNowPlayingConsumerFromPredictions:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(BOOL)_predictionPopulatesNowPlaying:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(BOOL)_predictionPopulatesStark:(id)arg1 ;
+(BOOL)_predictionPopulatesSpringboard:(id)arg1 ;
+(BOOL)_predictionPopulatesContinuity:(id)arg1 ;
+(BOOL)_predictionIsAudio:(id)arg1 ;
+(BOOL)bundleSupportsINPlayMediaIntentForBundleId:(id)arg1 fromUnitTest:(BOOL)arg2 ;
+(id)sharedInstance;
-(PMMDataProtectionMonitor *)dataProtectionMonitor;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)dataProtectionMonitor:(id)arg1 encryptedDataAvailbilityDidChange:(long long)arg2 ;
-(void)dataProtectionMonitor:(id)arg1 unlockedSinceBoot:(BOOL)arg2 ;
-(void)dataProtectionMonitor:(id)arg1 dataProtectionStatusDidChange:(long long)arg2 ;
-(long long)dataProtectionStatus;
-(void)handlePredictedApplications:(id)arg1 error:(id)arg2 ;
-(void)_notifyAppPredictionAboutMMUpdate:(id)arg1 ;
-(void)logPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6 ;
-(id)preprocessPrediction:(id)arg1 predictionSource:(unsigned long long)arg2 mmReason:(long long)arg3 decReason:(long long)arg4 reasonSingle:(long long)arg5 reasonMetadata:(id)arg6 ;
-(id)notifyNonNowPlayingConsumersOfPredictionItem:(id)arg1 withPredictedApplication:(id)arg2 ;
-(void)notifyNowPlayingConsumerOfPredictionItem:(id)arg1 withPredictedApplication:(id)arg2 ;
-(id)_publishPredictionWithPredictedApplication:(id)arg1 fromUnitTest:(BOOL)arg2 ;
-(id)metadataForPredictionApplication:(id)arg1 ;
-(void)_clearAllRecommendations;
-(id)expirationForReason:(long long)arg1 ;
-(BOOL)_recommendingAudioWhileAlreadyPlaying:(id)arg1 ;
-(long long)rtReasonToMMReason:(long long)arg1 ;
-(long long)rtReasonToDECReason:(long long)arg1 ;
-(void)_updatePredictionBasedOnPreviousDataProtectionStatus:(long long)arg1 previousEncryptedDataAvailability:(long long)arg2 ;
-(void)handleNowPlayingInfoDidChange;
-(void)_handleNowPlayingInfoDidChange;
-(void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(/*^block*/id)arg1 ;
-(void)fetchMediaRemoteNowPlayingApplicationBundleId:(/*^block*/id)arg1 ;
-(PMMAudioDisconnectListener *)disconnectListener;
-(void)setDisconnectListener:(PMMAudioDisconnectListener *)arg1 ;
-(PMMAppsSettingsMonitor *)myAppsSettingsMonitor;
-(void)setMyAppsSettingsMonitor:(PMMAppsSettingsMonitor *)arg1 ;
-(PMMMusicStateProcessor *)musicStateProcessor;
-(void)setMusicStateProcessor:(PMMMusicStateProcessor *)arg1 ;
-(NSObject*<OS_dispatch_queue>)nowPlayingStatusQueue;
-(void)setNowPlayingStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PMMTelephonyConnection *)ctConnection;
-(void)setCtConnection:(PMMTelephonyConnection *)arg1 ;
-(void)setDataProtectionMonitor:(PMMDataProtectionMonitor *)arg1 ;
-(RTPredictedApplication *)mostRecentPrediction;
-(void)setMostRecentPrediction:(RTPredictedApplication *)arg1 ;
-(RTPredictedApplication *)mostRecentNowPlayingPrediction;
-(void)setMostRecentNowPlayingPrediction:(RTPredictedApplication *)arg1 ;
-(NSString *)mostRecentNowPlayingApp;
-(void)setMostRecentNowPlayingApp:(NSString *)arg1 ;
-(NSDate *)dateOfLastNowPlayingEvent;
-(void)setDateOfLastNowPlayingEvent:(NSDate *)arg1 ;
-(PETScalarEventTracker *)mmAppSuggestion;
-(void)setMmAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)heroAppSuggestion;
-(void)setHeroAppSuggestion:(PETScalarEventTracker *)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)unlockedSinceBoot;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(long long)encryptedDataAvailability;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

