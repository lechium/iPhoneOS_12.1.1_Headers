/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTSyncService, NAScheduler;
@class NSMutableArray, MTMetrics, NSString;

@interface MTSyncMonitor : NSObject <MTAgentNotificationListener, MTAgentDiagnosticDelegate> {

	BOOL _ready;
	id<MTSyncService> _service;
	NSMutableArray* _providers;
	id<NAScheduler> _serializer;
	MTMetrics* _syncMetrics;

}

@property (nonatomic,retain) id<MTSyncService> service;               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL ready;                              //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) NSMutableArray * providers;              //@synthesize providers=_providers - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;              //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTMetrics * syncMetrics;                 //@synthesize syncMetrics=_syncMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)syncingSupported;
+(BOOL)isSyncingEnabledInternally;
-(id<MTSyncService>)service;
-(void)setService:(id<MTSyncService>)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)setProviders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)providers;
-(BOOL)handlesNotification:(id)arg1 ;
-(void)printDiagnostics;
-(void)syncConfigurationChanged:(id)arg1 ;
-(BOOL)startSyncServiceIfSyncingEnabled;
-(BOOL)syncingEnabled;
-(MTMetrics *)syncMetrics;
-(id)initWithSyncService:(id)arg1 syncMetrics:(id)arg2 ;
-(void)registerSyncStatusProvider:(id)arg1 ;
-(void)setSyncMetrics:(MTMetrics *)arg1 ;
-(void)startMonitoring;
-(void)setReady:(BOOL)arg1 ;
-(BOOL)ready;
-(void)handleNotification:(id)arg1 ;
@end

