/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>

@class NSURL, NSString, NSDate, NSData, NSNumber;

@interface FCAppConfigurationResource : NSObject <NSCopying, FCKeyValueStoreCoding> {

	NSURL* _sourceURL;
	NSString* _etag;
	NSDate* _lastFetchedDate;
	NSDate* _lastModifiedDate;
	NSString* _resourceID;
	NSData* _gzippedConfigurationData;
	NSString* _lastModifiedString;
	NSNumber* _maxAge;

}

@property (nonatomic,retain) NSData * gzippedConfigurationData;              //@synthesize gzippedConfigurationData=_gzippedConfigurationData - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                              //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchedDate;                       //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                      //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSString * lastModifiedString;                  //@synthesize lastModifiedString=_lastModifiedString - In the implementation block
@property (nonatomic,retain) NSNumber * maxAge;                              //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,retain) NSString * resourceID;                          //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) NSData * configurationData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSDate *)lastModifiedDate;
-(void)writeToKeyValuePair:(id)arg1 ;
-(NSDate *)lastFetchedDate;
-(BOOL)isExpiredWithFallbackMaxAge:(double)arg1 ;
-(NSData *)configurationData;
-(NSString *)lastModifiedString;
-(void)setLastFetchedDate:(NSDate *)arg1 ;
-(void)setGzippedConfigurationData:(NSData *)arg1 ;
-(void)setLastModifiedString:(NSString *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(NSNumber *)maxAge;
-(NSData *)gzippedConfigurationData;
-(void)setResourceID:(NSString *)arg1 ;
-(NSString *)resourceID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

