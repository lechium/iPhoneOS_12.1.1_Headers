/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCDerivedPersonalizationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPersonalizationProfile, NSDictionary, NSString;

@interface FCDerivedPersonalizationData : NSObject <FCDerivedPersonalizationData, NSSecureCoding, NSCopying> {

	NTPBPersonalizationProfile* _profile;
	NSDictionary* _aggregatesByFeatureKey;

}

@property (nonatomic,copy) NTPBPersonalizationProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSDictionary * aggregatesByFeatureKey;              //@synthesize aggregatesByFeatureKey=_aggregatesByFeatureKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)aggregatesByFeatureKey;
-(id)aggregatesForFeatureKeys:(id)arg1 ;
-(id)initWithPersonalizationProfile:(id)arg1 ;
-(id)aggregateForFeatureKey:(id)arg1 ;
-(void)setAggregatesByFeatureKey:(NSDictionary *)arg1 ;
-(NTPBPersonalizationProfile *)profile;
-(void)setProfile:(NTPBPersonalizationProfile *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

