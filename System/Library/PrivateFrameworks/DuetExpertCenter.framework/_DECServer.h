/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/_DECServer.h>

@protocol _DECServer <_DECServerInterface>
@required
-(void)invalidate;

@end


@protocol OS_dispatch_queue, _DECFilter;
@class _DECServerResponder, _DECPredictionCache, NSObject, NSXPCConnection, NSString;

@interface _DECServer : NSObject <_DECServer> {

	_DECServerResponder* _responder;
	_DECPredictionCache* _resultCache;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _categories;
	long long _type;
	NSString* _identifier;
	NSXPCConnection* _connection;
	id<_DECFilter> _predictionFilter;

}

@property (nonatomic,readonly) unsigned long long categories;              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<_DECFilter> predictionFilter;              //@synthesize predictionFilter=_predictionFilter - In the implementation block
+(id)_defaultRestorationDirectory;
+(id)serverWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(NSString*)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(void)decDeviceIdWithReply:(/*^block*/id)arg1 ;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_restorationPath;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id<_DECFilter>)predictionFilter;
-(void)setPredictionFilter:(id<_DECFilter>)arg1 ;
-(id)initWithConnection:(id)arg1 responder:(id)arg2 ;
-(void)_filterPrediction:(id)arg1 forConsumer:(unsigned long long)arg2 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)identifier;
-(long long)type;
-(void)invalidate;
-(NSXPCConnection *)connection;
-(unsigned long long)categories;
@end

