/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>
#import <libobjc.A.dylib/SKUIInspectableObject.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent <SKUIInspectableObject> {

	NSMutableDictionary* _templateMetrics;

}

@property (nonatomic,retain) NSString * launchCorrelationKey; 
@property (assign,nonatomic) double mainTime; 
@property (assign,nonatomic) double clientConfigurationLoadTime; 
@property (nonatomic,copy,readonly) NSDictionary * templateMetrics;              //@synthesize templateMetrics=_templateMetrics - In the implementation block
@property (assign,nonatomic) double bootstrapStartTime; 
@property (assign,nonatomic) double bootstrapEndTime; 
@property (assign,nonatomic) double jsResourcesStartTime; 
@property (assign,nonatomic) double jsResourcesEndTime; 
@property (assign,nonatomic) double initialTabRequestStartTime; 
@property (assign,nonatomic) double initialTabResponseStartTime; 
@property (assign,nonatomic) double initialTabResponseEndTime; 
@property (assign,nonatomic) double launchFailureTime; 
@property (assign,nonatomic) double launchEndTime; 
@property (assign,nonatomic) BOOL requiredBlockingBagLoad; 
@property (assign,nonatomic) BOOL usedBootstrapFallback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)withPendingLaunchEvent:(/*^block*/id)arg1 ;
+(void)createPendingLaunchEvent;
+(double)processStartTime;
+(id)consumePendingLaunchEvent;
+(void)resetPendingLaunchEventForTesting;
+(void)load;
-(void)appendPropertiesToBody:(id)arg1 ;
-(NSString *)launchCorrelationKey;
-(void)populateObjectInspector:(id)arg1 ;
-(void)setLaunchCorrelationKey:(NSString *)arg1 ;
-(void)addTemplateLoadTimingMetric:(id)arg1 forURL:(id)arg2 ;
-(void)setMainTime:(double)arg1 ;
-(void)setClientConfigurationLoadTime:(double)arg1 ;
-(void)setRequiredBlockingBagLoad:(BOOL)arg1 ;
-(void)setBootstrapEndTime:(double)arg1 ;
-(void)setLaunchFailureTime:(double)arg1 ;
-(void)setBootstrapStartTime:(double)arg1 ;
-(void)setLaunchEndTime:(double)arg1 ;
-(void)setJsResourcesStartTime:(double)arg1 ;
-(void)setJsResourcesEndTime:(double)arg1 ;
-(void)setInitialTabRequestStartTime:(double)arg1 ;
-(void)setInitialTabResponseStartTime:(double)arg1 ;
-(void)setInitialTabResponseEndTime:(double)arg1 ;
-(double)mainTime;
-(double)clientConfigurationLoadTime;
-(double)bootstrapStartTime;
-(double)bootstrapEndTime;
-(double)jsResourcesStartTime;
-(double)jsResourcesEndTime;
-(double)initialTabRequestStartTime;
-(double)initialTabResponseStartTime;
-(double)initialTabResponseEndTime;
-(double)launchFailureTime;
-(double)launchEndTime;
-(BOOL)requiredBlockingBagLoad;
-(BOOL)usedBootstrapFallback;
-(NSDictionary *)templateMetrics;
-(void)setUsedBootstrapFallback:(BOOL)arg1 ;
-(id)init;
-(NSString *)description;
@end

