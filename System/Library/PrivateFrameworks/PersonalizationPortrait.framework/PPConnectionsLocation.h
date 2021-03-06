/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSURL, NSDictionary, NSDate;

@interface PPConnectionsLocation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _copiedToPasteboard;
	BOOL _shouldAggregate;
	NSString* _name;
	NSString* _originatingBundleID;
	NSString* _fullFormattedAddress;
	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _postalCode;
	NSString* _country;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSURL* _originatingWebsiteURL;
	NSURL* _mapItemURL;
	NSString* _label;
	NSString* _value;
	NSString* _shortValue;
	NSString* _documentID;
	NSDictionary* _addressComponents;
	NSString* _source;
	NSString* _trigger;
	NSDate* _createdAt;
	NSNumber* _lifetime;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,copy) NSString * fullFormattedAddress;               //@synthesize fullFormattedAddress=_fullFormattedAddress - In the implementation block
@property (nonatomic,copy) NSString * thoroughfare;                       //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,copy) NSString * subThoroughfare;                    //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,copy) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSURL * originatingWebsiteURL;                 //@synthesize originatingWebsiteURL=_originatingWebsiteURL - In the implementation block
@property (nonatomic,copy) NSURL * mapItemURL;                            //@synthesize mapItemURL=_mapItemURL - In the implementation block
@property (assign,nonatomic) BOOL copiedToPasteboard;                     //@synthesize copiedToPasteboard=_copiedToPasteboard - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * shortValue;                         //@synthesize shortValue=_shortValue - In the implementation block
@property (assign,nonatomic) BOOL shouldAggregate;                        //@synthesize shouldAggregate=_shouldAggregate - In the implementation block
@property (nonatomic,copy) NSString * documentID;                         //@synthesize documentID=_documentID - In the implementation block
@property (nonatomic,copy) NSDictionary * addressComponents;              //@synthesize addressComponents=_addressComponents - In the implementation block
@property (nonatomic,copy) NSString * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * trigger;                            //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,copy) NSDate * createdAt;                            //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSNumber * lifetime;                           //@synthesize lifetime=_lifetime - In the implementation block
+(unsigned long long)round:(double)arg1 toNearest:(double)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSDictionary *)addressComponents;
-(void)setTrigger:(NSString *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(id)addressDictionary;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
-(id)quickTypeItem;
-(NSURL *)originatingWebsiteURL;
-(void)setOriginatingWebsiteURL:(NSURL *)arg1 ;
-(NSString *)shortValue;
-(unsigned char)_pexItemSource;
-(unsigned long long)_roundedPredictionAge;
-(BOOL)isEqualToConnectionsLocation:(id)arg1 ;
-(void)setMapItemURL:(NSURL *)arg1 ;
-(BOOL)copiedToPasteboard;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(BOOL)shouldAggregate;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSDate *)createdAt;
-(void)setLifetime:(NSNumber *)arg1 ;
-(NSNumber *)lifetime;
-(NSString *)documentID;
-(void)setShortValue:(NSString *)arg1 ;
-(NSString *)originatingBundleID;
-(NSString *)fullFormattedAddress;
-(NSURL *)mapItemURL;
-(void)setAddressComponents:(NSDictionary *)arg1 ;
-(void)setShouldAggregate:(BOOL)arg1 ;
-(void)setCopiedToPasteboard:(BOOL)arg1 ;
-(void)setFullFormattedAddress:(NSString *)arg1 ;
-(void)setDocumentID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)label;
-(NSString *)trigger;
-(void)setLabel:(NSString *)arg1 ;
@end

