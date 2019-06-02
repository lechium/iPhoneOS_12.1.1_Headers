/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _itemDictionary;

}

@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,copy,readonly) NSArray * artwork; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSArray * categoryNames; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreIdentifier; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) BOOL POIBased; 
@property (nonatomic,copy,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * itemDictionary;                               //@synthesize itemDictionary=_itemDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)appAdamID;
-(id)subscriptionPeriodInISO_8601;
-(BOOL)isPeriodValid:(id)arg1 ;
-(id)offerName;
-(id)externalVersionID;
-(id)introductoryOffers;
-(NSArray *)artwork;
-(NSNumber *)iTunesStoreIdentifier;
-(BOOL)isPOIBased;
-(long long)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
-(NSDictionary *)itemDictionary;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSString *)itemKind;
-(NSString *)artistName;
-(long long)numberOfUserRatings;
-(float)userRating;
-(NSURL *)productPageURL;
-(NSArray *)offers;
-(NSArray *)categoryNames;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

