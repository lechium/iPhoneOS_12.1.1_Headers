/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _donationIdentifier;
	NSString* _clusterIdentifier;
	NSDate* _donationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * donationIdentifier;                          //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clusterIdentifier;                           //@synthesize clusterIdentifier=_clusterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * donationDate;                                  //@synthesize donationDate=_donationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)originWithUpdatedDonationIdentifier:(id)arg1 fromOrigin:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSDictionary *)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(NSString *)clusterIdentifier;
-(NSDate *)donationDate;
-(id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 clusterIdentifier:(id)arg3 donationDate:(id)arg4 expirationDate:(id)arg5 ;
-(id)initWithDonationOrigin:(id)arg1 ;
-(NSString *)donationIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
@end

