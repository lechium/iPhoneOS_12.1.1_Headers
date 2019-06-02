/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKSeriesBuilderClientInterface.h>

@protocol OS_dispatch_queue;
@class HKTaskServerProxyProvider, NSUUID, HKSeriesBuilderConfiguration, HKHealthStore, NSObject, NSString;

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface> {

	long long _state;
	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _identifier;
	HKSeriesBuilderConfiguration* _configuration;
	HKHealthStore* _store;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                        //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HKSeriesBuilderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) HKHealthStore * store;                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceQueue;                     //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (assign,nonatomic) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(void)configureServerInterface:(id)arg1 ;
+(id)clientInterface;
+(id)serverInterface;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)freezeBuilderWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverWithCompletion:(/*^block*/id)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)discard;
-(void)_resourceQueue_discardWithHandler:(/*^block*/id)arg1 ;
-(id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 ;
-(HKHealthStore *)store;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)clientRemote_didChangeToState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(id)init;
-(NSUUID *)identifier;
-(NSString *)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(HKSeriesBuilderConfiguration *)configuration;
-(id)exportedInterface;
@end

