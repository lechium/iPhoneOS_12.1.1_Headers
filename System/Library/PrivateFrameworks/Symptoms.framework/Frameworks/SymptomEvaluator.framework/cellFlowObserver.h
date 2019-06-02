/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/flowDispositionObserver.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface cellFlowObserver : NSObject <flowDispositionObserver> {

	unsigned _classCounter[32];
	unsigned _classFlags;
	unsigned _intialClassFlags;
	unsigned _everSetClassFlags;
	unsigned _everReportedClassFlags;
	unsigned _lastReportedClassFlags;
	unsigned _dampeningMsecs;
	NSDate* _lastReportTimestamp;
	BOOL _dampening;
	unsigned _seqno;
	NSMutableDictionary* _foregroundAppObservelist;
	NSMutableDictionary* _perAppMaxRRCTimeSecs;
	BOOL _flowSnapshotActive;
	NSMutableSet* _flowSnapshotApps;
	unsigned _flowSnapshotFlags;
	double _flowSnapshotAccumulatedTCEnabledTime;
	NSDate* _flowSnapshotTCEnabledStartTime;
	BOOL _enabled;
	BOOL _foreground;

}

@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL foreground;                       //@synthesize foreground=_foreground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginTrafficClassFlowSnapshot;
-(void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
-(BOOL)performDisposition:(unsigned)arg1 present:(BOOL)arg2 ;
-(void)noteNewUsage:(unsigned)arg1 ;
-(void)resetTrafficClassFlowSnapshot:(BOOL)arg1 ;
-(unsigned)noteFlow:(id)arg1 withDisposition:(unsigned)arg2 present:(BOOL)arg3 trackedBy:(id)arg4 ;
-(void)configurePolicies:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(BOOL)foreground;
-(void)setForeground:(BOOL)arg1 ;
@end
