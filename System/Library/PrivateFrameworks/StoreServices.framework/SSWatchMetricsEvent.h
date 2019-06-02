/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface SSWatchMetricsEvent : NSObject <NSCopying> {

	NSString* _appExtensionVersion;
	NSString* _bundleIdentifier;
	NSString* _downloadVarietyID;
	unsigned long long _eventType;
	unsigned long long _installType;
	NSString* _model;
	NSString* _osVersion;
	NSString* _versionString;
	NSString* _watchGuid;
	NSString* _watchSerial;
	NSString* _watchSize;
	NSDate* _timestamp;
	NSNumber* _adamId;
	NSString* _cohortID;
	NSNumber* _pid;
	NSNumber* _appExternalVersionID;
	NSNumber* _purchaserDsid;
	NSNumber* _userDsid;

}

@property (nonatomic,copy) NSDate * timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSNumber * adamId;                             //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,copy) NSString * cohortID;                           //@synthesize cohortID=_cohortID - In the implementation block
@property (nonatomic,copy) NSNumber * pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSNumber * appExternalVersionID;               //@synthesize appExternalVersionID=_appExternalVersionID - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDsid;                      //@synthesize purchaserDsid=_purchaserDsid - In the implementation block
@property (nonatomic,copy) NSNumber * userDsid;                           //@synthesize userDsid=_userDsid - In the implementation block
@property (nonatomic,copy) NSString * appExtensionVersion;                //@synthesize appExtensionVersion=_appExtensionVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * downloadVarietyID;                  //@synthesize downloadVarietyID=_downloadVarietyID - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long installType;              //@synthesize installType=_installType - In the implementation block
@property (nonatomic,copy) NSString * model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * versionString;                      //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,copy) NSString * watchGuid;                          //@synthesize watchGuid=_watchGuid - In the implementation block
@property (nonatomic,copy) NSString * watchSerial;                        //@synthesize watchSerial=_watchSerial - In the implementation block
@property (nonatomic,copy) NSString * watchSize;                          //@synthesize watchSize=_watchSize - In the implementation block
-(void)setPid:(NSNumber *)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setAppExternalVersionID:(NSNumber *)arg1 ;
-(void)setAppExtensionVersion:(NSString *)arg1 ;
-(void)setCohortID:(NSString *)arg1 ;
-(void)setDownloadVarietyID:(NSString *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(void)setPurchaserDsid:(NSNumber *)arg1 ;
-(void)setUserDsid:(NSNumber *)arg1 ;
-(void)setWatchGuid:(NSString *)arg1 ;
-(void)setWatchSerial:(NSString *)arg1 ;
-(NSString *)appExtensionVersion;
-(NSNumber *)appExternalVersionID;
-(NSString *)cohortID;
-(NSString *)downloadVarietyID;
-(unsigned long long)installType;
-(NSNumber *)purchaserDsid;
-(NSNumber *)userDsid;
-(NSString *)watchGuid;
-(NSString *)watchSerial;
-(id)_appCohortID:(id)arg1 ;
-(id)financeDictionaryRepresentation;
-(NSString *)watchSize;
-(void)setModel:(NSString *)arg1 ;
-(void)setAdamId:(NSNumber *)arg1 ;
-(void)setVersionString:(NSString *)arg1 ;
-(void)setWatchSize:(NSString *)arg1 ;
-(NSNumber *)pid;
-(NSString *)versionString;
-(NSNumber *)adamId;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)eventType;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)model;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

