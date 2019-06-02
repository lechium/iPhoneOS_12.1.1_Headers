/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation, NSTimeZone, NSDate;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _city;
	NSString* _county;
	NSString* _state;
	NSString* _stateAbbreviation;
	NSString* _country;
	NSString* _countryAbbreviation;
	CLLocation* _geoLocation;
	NSString* _locationID;
	NSTimeZone* _timeZone;
	long long _archiveVersion;
	NSString* _weatherDisplayName;
	NSString* _displayName;
	NSDate* _creationDate;

}

@property (assign) long long archiveVersion;                                   //@synthesize archiveVersion=_archiveVersion - In the implementation block
@property (nonatomic,copy) NSString * city;                                    //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * county;                                  //@synthesize county=_county - In the implementation block
@property (nonatomic,copy) NSString * state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * stateAbbreviation;                       //@synthesize stateAbbreviation=_stateAbbreviation - In the implementation block
@property (nonatomic,copy) NSString * country;                                 //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * countryAbbreviation;                     //@synthesize countryAbbreviation=_countryAbbreviation - In the implementation block
@property (nonatomic,copy) NSString * weatherDisplayName;                      //@synthesize weatherDisplayName=_weatherDisplayName - In the implementation block
@property (nonatomic,copy) CLLocation * geoLocation;                           //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,copy) NSString * locationID;                              //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL shouldQueryForAirQualityData; 
+(long long)currentArchiveVersion;
+(id)knownKeys;
+(id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2 ;
+(id)locationsByConsolidatingDuplicatesInBucket:(id)arg1 ;
+(id)locationsByFilteringDuplicates:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)country;
-(NSString *)city;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)weatherDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)summary;
-(CLLocation *)geoLocation;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(NSString *)locationID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setWeatherDisplayName:(NSString *)arg1 ;
-(void)setCounty:(NSString *)arg1 ;
-(id)summaryThatIsCompact:(BOOL)arg1 ;
-(NSString *)county;
-(NSString *)stateAbbreviation;
-(long long)archiveVersion;
-(void)setStateAbbreviation:(NSString *)arg1 ;
-(void)setLocationID:(NSString *)arg1 ;
-(void)setArchiveVersion:(long long)arg1 ;
-(BOOL)isDayForDate:(id)arg1 ;
-(id)countriesSupportAQI;
-(id)initWithSearchResponse:(id)arg1 ;
-(id)localDataRepresentation;
-(id)initWithLocalDataRepresentation:(id)arg1 ;
-(id)cloudDictionaryRepresentation;
-(id)initWithCloudDictionaryRepresentation:(id)arg1 ;
-(void)setCountryAbbreviation:(NSString *)arg1 ;
-(id)sunriseForDate:(id)arg1 ;
-(id)sunsetForDate:(id)arg1 ;
-(NSString *)countryAbbreviation;
-(BOOL)isDay;
-(BOOL)shouldQueryForAirQualityData;
-(id)initWithPlacemark:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)displayName;
@end
