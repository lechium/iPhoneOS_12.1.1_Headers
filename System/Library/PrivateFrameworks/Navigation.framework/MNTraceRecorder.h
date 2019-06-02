/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNLocationRecorder.h>

@protocol MNTraceRecorderBackgroundGuard;
@class MNTrace, NSString, NSDate, NSMapTable, GEOComposedRouteLeg;

@interface MNTraceRecorder : NSObject <MNLocationRecorder> {

	MNTrace* _trace;
	NSString* _tracePath;
	NSDate* _recordingStartTime;
	BOOL _corrupted;
	BOOL _closed;
	BOOL _created;
	sqlite3_stmtRef _updateStart;
	sqlite3_stmtRef _updateEnd;
	sqlite3_stmtRef _updateDirectionsFeedback;
	sqlite3_stmtRef _updateActiveTransportType;
	sqlite3_stmtRef _environmentInfoInsert;
	sqlite3_stmtRef _debugSettingInsert;
	sqlite3_stmtRef _audioSettingInsert;
	sqlite3_stmtRef _stylesheetInsert;
	sqlite3_stmtRef _locationInsert;
	sqlite3_stmtRef _locationErrorInsert;
	sqlite3_stmtRef _matchInfoInsert;
	sqlite3_stmtRef _routeRequestInsert;
	sqlite3_stmtRef _routeResponseUpdate;
	sqlite3_stmtRef _routeResponseErrorInsert;
	sqlite3_stmtRef _routeSelectionInsert;
	sqlite3_stmtRef _routeSelectionUpdate;
	sqlite3_stmtRef _likelyRouteInsert;
	sqlite3_stmtRef _etaTrafficUpdateRequestInsert;
	sqlite3_stmtRef _etaTrafficUpdateResponseInsert;
	sqlite3_stmtRef _etaTrafficUpdateResponseErrorInsert;
	sqlite3_stmtRef _vehicleSpeedInsert;
	sqlite3_stmtRef _vehicleHeadingInsert;
	sqlite3_stmtRef _motionDataInsert;
	sqlite3_stmtRef _compassHeadingInsert;
	sqlite3_stmtRef _routeLegGuidanceInsert;
	sqlite3_stmtRef _routeLegEndGuidanceUpdate;
	sqlite3_stmtRef _traceEventInsert;
	sqlite3_stmtRef _significantEventInsert;
	sqlite3_stmtRef _scheduleProjectionInsert;
	sqlite3_stmtRef _scheduleProjectionUpdate;
	sqlite3_stmtRef _commuteDestinationsInsert;
	sqlite3_stmtRef _commuteDirectionsRequestInsert;
	sqlite3_stmtRef _commuteDirectionsResponseUpdate;
	NSMapTable* _routeRequests;
	unsigned long long _routeRequestCount;
	unsigned long long _routeSelectionCount;
	unsigned long long _etaTrafficUpdateCount;
	NSMapTable* _commuteDirectionsRequests;
	GEOComposedRouteLeg* _currentLeg;
	/*^block*/id _timeSinceRecordingBeganHandler;
	/*^block*/id _errorHandler;
	BOOL _lastPauseSpokenAudio;
	long long _lastVolumeSetting;
	id<MNTraceRecorderBackgroundGuard> _backgroundGuardDelegate;

}

@property (nonatomic,readonly) MNTrace * trace;                                                              //@synthesize trace=_trace - In the implementation block
@property (nonatomic,readonly) NSDate * recordingStartTime;                                                  //@synthesize recordingStartTime=_recordingStartTime - In the implementation block
@property (nonatomic,copy) id timeSinceRecordingBeganHandler;                                                //@synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler - In the implementation block
@property (assign,nonatomic,__weak) id<MNTraceRecorderBackgroundGuard> backgroundGuardDelegate;              //@synthesize backgroundGuardDelegate=_backgroundGuardDelegate - In the implementation block
@property (assign,nonatomic) BOOL copyToCrashReporterDirectory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareStatements;
-(void)recordETATrafficUpdateRequest:(id)arg1 forDestination:(id)arg2 ;
-(void)recordETATrafficUpdateResponse:(id)arg1 ;
-(void)recordCommuteDirectionsRequest:(id)arg1 forDestinationID:(unsigned long long)arg2 ;
-(void)recordCommuteDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3 ;
-(MNTrace *)trace;
-(void)_createTrace;
-(void)_initializeTraceDB;
-(void)_openExistingTrace;
-(id<MNTraceRecorderBackgroundGuard>)backgroundGuardDelegate;
-(void)_logError:(id)arg1 resultCode:(int)arg2 ;
-(void)_logSqliteErrorWithResult:(int)arg1 file:(const char*)arg2 line:(int)arg3 ;
-(void)_serializationError:(id)arg1 ;
-(void)_dispatchWrite:(/*^block*/id)arg1 ;
-(void)startWritingTraceToFileAtPath:(id)arg1 shouldPrepareStatements:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)startWritingTraceToFileAtPath:(id)arg1 ;
-(void)_closeTraceDB;
-(void)saveTrace;
-(double)timeSinceRecordingBegan;
-(void)_recordLocationMatchInfoOnWriteQueue:(id)arg1 forLocationID:(int)arg2 ;
-(void)_recordLocationEvent:(long long)arg1 coordinate:(CLLocationCoordinate2D)arg2 rawCoordinate:(CLLocationCoordinate2D)arg3 timestamp:(double)arg4 horizontalAccuracy:(double)arg5 verticalAccuracy:(double)arg6 altitude:(double)arg7 speed:(double)arg8 speedAccuracy:(double)arg9 course:(double)arg10 rawCourse:(double)arg11 type:(int)arg12 courseAccuracy:(double)arg13 correctedCoordinate:(CLLocationCoordinate2D)arg14 correctedCourse:(double)arg15 matchType:(int)arg16 activeTransportType:(int)arg17 matchInfo:(id)arg18 correctedLocation:(id)arg19 ;
-(void)_recordLocationEvent:(long long)arg1 location:(id)arg2 correctedLocation:(id)arg3 ;
-(void)recordGuidanceWasStartedForRouteLeg:(id)arg1 timestamp:(double)arg2 ;
-(void)recordGuidanceWasEndedAtTime:(double)arg1 ;
-(void)recordTraceEventAtTime:(double)arg1 eventType:(long long)arg2 stage:(long long)arg3 description:(id)arg4 ;
-(void)recordRouteError:(id)arg1 forRouteRequest:(id)arg2 ;
-(id)initWithPath:(id)arg1 clMapMatching:(BOOL)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)copyToCrashReporterDirectory;
-(void)setCopyToCrashReporterDirectory:(BOOL)arg1 ;
-(void)setOriginSearchResultData:(id)arg1 ;
-(void)setDestinationSearchResultData:(id)arg1 ;
-(void)startWritingTraceToFileIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)startWritingTraceToFileWithCompletion:(/*^block*/id)arg1 ;
-(void)startWritingTraceToFile;
-(void)cancelTrace;
-(void)saveTraceSynchronously;
-(void)saveTraceWithHandler:(/*^block*/id)arg1 ;
-(void)recordEnvironmentInfo:(id)arg1 value:(id)arg2 ;
-(void)recordDebugSetting:(id)arg1 settingValue:(id)arg2 ;
-(void)recordAudioSetting:(BOOL)arg1 volume:(long long)arg2 ;
-(void)recordStylesheet:(id)arg1 data:(id)arg2 ;
-(void)recordSimulatedCoordinate:(CLLocationCoordinate2D)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6 ;
-(void)setRouteGenius:(BOOL)arg1 ;
-(void)resetLocationsForSimulation;
-(void)recordActiveTransportType:(int)arg1 timestamp:(double)arg2 ;
-(void)recordGuidanceWasStartedForRouteLeg:(id)arg1 ;
-(void)recordGuidanceWasEnded;
-(void)recordTraceEvent:(id)arg1 ;
-(void)recordTraceEventForEventType:(long long)arg1 stage:(long long)arg2 description:(id)arg3 ;
-(void)resetRouteSelections;
-(void)recordRouteRequest:(id)arg1 waypoints:(id)arg2 ;
-(void)recordRouteResponse:(id)arg1 forRouteRequest:(id)arg2 ;
-(void)recordRouteError:(id)arg1 ;
-(void)recordRouteSelected:(id)arg1 routeIndex:(unsigned long long)arg2 ;
-(void)recordRouteDeselected;
-(void)recordLikelyRouteRequest:(id)arg1 response:(id)arg2 waypoints:(id)arg3 ;
-(void)recordETATrafficUpdateRequest:(id)arg1 ;
-(void)recordETATrafficUpdateError:(id)arg1 ;
-(void)recordMotionUpdate:(unsigned long long)arg1 exitType:(unsigned long long)arg2 confidence:(unsigned long long)arg3 ;
-(void)recordProjectedArrivalTime:(double)arg1 actualArrivalTime:(double)arg2 arrivalTimeDelta:(double)arg3 matchType:(long long)arg4 vehicleType:(long long)arg5 lastKnownLocation:(id)arg6 forStepIndex:(unsigned long long)arg7 withDuration:(double)arg8 andManeuverType:(int)arg9 ;
-(void)updateActualArrivalTime:(double)arg1 arrivalTimeDelta:(double)arg2 forStepIndex:(unsigned long long)arg3 ;
-(void)recordSignificantEvent:(long long)arg1 withData:(id)arg2 ;
-(void)recordCommuteDestinationWithID:(unsigned long long)arg1 name:(id)arg2 waypoint:(id)arg3 ;
-(void)recordDirectionsFeedback:(id)arg1 ;
-(NSDate *)recordingStartTime;
-(id)timeSinceRecordingBeganHandler;
-(void)setTimeSinceRecordingBeganHandler:(id)arg1 ;
-(void)setBackgroundGuardDelegate:(id<MNTraceRecorderBackgroundGuard>)arg1 ;
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2 ;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2 ;
-(void)recordLocationUpdateResume;
-(void)recordLocationUpdatePause;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4 ;
-(void)recordError:(id)arg1 ;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2 ;
-(void)recordInitialCourse:(double)arg1 ;
-(void)endTransaction;
-(void)beginTransaction;
-(void)dealloc;
@end

