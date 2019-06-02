/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection, NSSet;

@interface AWDAgent : NSObject {

	id dropboxObserver;
	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _symptomsAWDConnection;
	AWDServerConnection* _libnetcoreAWDConnection;
	AWDServerConnection* _cfnetworkAWDConnection;
	NSSet* _awdSymptomsConfiguredMetricIds;
	NSSet* _awdLibnetcoreConfiguredMetricIds;
	NSSet* _awdCFNetworkConfiguredMetricIds;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (retain) AWDServerConnection * symptomsAWDConnection;                     //@synthesize symptomsAWDConnection=_symptomsAWDConnection - In the implementation block
@property (retain) AWDServerConnection * libnetcoreAWDConnection;                   //@synthesize libnetcoreAWDConnection=_libnetcoreAWDConnection - In the implementation block
@property (retain) AWDServerConnection * cfnetworkAWDConnection;                    //@synthesize cfnetworkAWDConnection=_cfnetworkAWDConnection - In the implementation block
@property (nonatomic,retain) NSSet * awdSymptomsConfiguredMetricIds;                //@synthesize awdSymptomsConfiguredMetricIds=_awdSymptomsConfiguredMetricIds - In the implementation block
@property (nonatomic,retain) NSSet * awdLibnetcoreConfiguredMetricIds;              //@synthesize awdLibnetcoreConfiguredMetricIds=_awdLibnetcoreConfiguredMetricIds - In the implementation block
@property (nonatomic,retain) NSSet * awdCFNetworkConfiguredMetricIds;               //@synthesize awdCFNetworkConfiguredMetricIds=_awdCFNetworkConfiguredMetricIds - In the implementation block
+(id)defaultInstance;
-(void)postMetricForSignificantEvent:(int)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(void)postMetricForSignificantEventWithName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)_handleQuery:(unsigned)arg1 ;
-(BOOL)shouldSendMetric:(unsigned)arg1 ;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 libnetcore:(BOOL)arg3 ;
-(void)bulkPostMetrics:(id)arg1 withIdentifier:(unsigned)arg2 libnetcore:(BOOL)arg3 ;
-(AWDServerConnection *)libnetcoreAWDConnection;
-(AWDServerConnection *)symptomsAWDConnection;
-(BOOL)overridePostMetricConfig;
-(void)_postMetricForSignificantEvent:(int)arg1 orEventName:(id)arg2 errorContext:(int)arg3 error:(id)arg4 status:(int)arg5 ;
-(void)setSymptomsAWDConnection:(AWDServerConnection *)arg1 ;
-(void)setLibnetcoreAWDConnection:(AWDServerConnection *)arg1 ;
-(AWDServerConnection *)cfnetworkAWDConnection;
-(void)setCfnetworkAWDConnection:(AWDServerConnection *)arg1 ;
-(NSSet *)awdSymptomsConfiguredMetricIds;
-(void)setAwdSymptomsConfiguredMetricIds:(NSSet *)arg1 ;
-(NSSet *)awdLibnetcoreConfiguredMetricIds;
-(void)setAwdLibnetcoreConfiguredMetricIds:(NSSet *)arg1 ;
-(NSSet *)awdCFNetworkConfiguredMetricIds;
-(void)setAwdCFNetworkConfiguredMetricIds:(NSSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

