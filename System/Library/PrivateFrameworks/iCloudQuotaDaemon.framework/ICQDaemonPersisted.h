/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface ICQDaemonPersisted : NSObject {

	BOOL _failedToFetchFromServer;
	NSDate* _retrievalDate;
	double _callbackInterval;
	NSString* _accountAltDSID;
	NSDictionary* _serverDictionary;
	NSDictionary* _failureDetails;

}

@property (nonatomic,readonly) NSDictionary * _persistenceDictionary; 
@property (nonatomic,retain) NSDate * retrievalDate;                                             //@synthesize retrievalDate=_retrievalDate - In the implementation block
@property (assign,nonatomic) double callbackInterval;                                            //@synthesize callbackInterval=_callbackInterval - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,retain) NSString * accountAltDSID;                                          //@synthesize accountAltDSID=_accountAltDSID - In the implementation block
@property (nonatomic,retain) NSDictionary * serverDictionary;                                    //@synthesize serverDictionary=_serverDictionary - In the implementation block
@property (assign,nonatomic) BOOL failedToFetchFromServer;                                       //@synthesize failedToFetchFromServer=_failedToFetchFromServer - In the implementation block
@property (nonatomic,retain) NSDictionary * failureDetails;                                      //@synthesize failureDetails=_failureDetails - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _mutablePersistenceDictionary; 
@property (nonatomic,readonly) NSNumber * _cachedQuotaAvailable; 
+(id)persistenceKey;
+(id)persistedObject;
+(void)clearPersistedObject;
+(id)_mutablePlaceholderPersistanceDictionary;
+(id)_placeholderPersistenceDictionary;
+(id)persistenceDomain;
+(double)defaultCallbackInterval;
+(id)_placeholderObject;
+(void)clearPersistedObjectWithCompletion:(/*^block*/id)arg1 ;
-(NSNumber *)_cachedQuotaAvailable;
-(NSDate *)retrievalDate;
-(BOOL)isValidForAccount:(id)arg1 ;
-(NSDictionary *)_persistenceDictionary;
-(NSDictionary *)serverDictionary;
-(id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2 ;
-(void)persistWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithAccount:(id)arg1 error:(id)arg2 ;
-(void)setServerDictionary:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)_mutablePersistenceDictionary;
-(double)callbackInterval;
-(NSString *)accountAltDSID;
-(void)setRetrievalDate:(NSDate *)arg1 ;
-(double)_callbackIntervalFromServerObject:(id)arg1 ;
-(void)setCallbackInterval:(double)arg1 ;
-(void)setAccountAltDSID:(NSString *)arg1 ;
-(id)_initWithAccountAltDSID:(id)arg1 error:(id)arg2 ;
-(void)setFailedToFetchFromServer:(BOOL)arg1 ;
-(void)setFailureDetails:(NSDictionary *)arg1 ;
-(void)persistObject;
-(BOOL)failedToFetchFromServer;
-(NSDictionary *)failureDetails;
-(BOOL)isExpired;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
@end

