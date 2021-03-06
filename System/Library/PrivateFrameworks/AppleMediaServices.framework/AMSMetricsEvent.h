/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ACAccount, NSNumber, NSDictionary, NSString;

@interface AMSMetricsEvent : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _underlyingDictionary;
	ACAccount* _account;
	NSNumber* _databasePID;

}

@property (nonatomic,readonly) NSDictionary * databaseEventBody; 
@property (nonatomic,retain) NSNumber * databasePID;                                    //@synthesize databasePID=_databasePID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSString * canaryIdentifier; 
@property (nonatomic,retain) NSNumber * eventTime; 
@property (nonatomic,retain) NSString * eventType; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (nonatomic,retain) NSNumber * timezoneOffset; 
@property (nonatomic,retain) NSString * topic; 
+(id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1 ;
+(id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2 ;
+(id)_topicFromAuthenticationContext:(id)arg1 ;
+(id)_buyParamsStringFromAuthenticationContext:(id)arg1 ;
+(id)_buyParamsFromString:(id)arg1 ;
+(BOOL)_isValidJSONProperty:(id)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setEventTime:(NSNumber *)arg1 ;
-(NSNumber *)eventTime;
-(void)setEventVersion:(NSNumber *)arg1 ;
-(NSMutableDictionary *)underlyingDictionary;
-(NSNumber *)eventVersion;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(NSNumber *)timezoneOffset;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setBaseVersion:(NSNumber *)arg1 ;
-(NSNumber *)baseVersion;
-(void)setTopic:(NSString *)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)topic;
-(id)initWithTopic:(id)arg1 ;
-(id)initWithDatabaseEventBody:(id)arg1 ;
-(NSDictionary *)databaseEventBody;
-(id)reportingURLFromBaseURL:(id)arg1 ;
-(void)setTimezoneOffset:(NSNumber *)arg1 ;
-(void)removePropertiesForKeys:(id)arg1 ;
-(NSNumber *)databasePID;
-(void)setDatabasePID:(NSNumber *)arg1 ;
-(NSString *)eventType;
@end

