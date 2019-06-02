/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding> {

	NSString* _brandName;
	NSString* _genericName;
	long long _foodType;
	NSDictionary* _nutritionFacts;
	double _recommendedNumServings;

}

@property (nonatomic,copy) NSString * brandName;                         //@synthesize brandName=_brandName - In the implementation block
@property (nonatomic,copy) NSString * genericName;                       //@synthesize genericName=_genericName - In the implementation block
@property (assign,nonatomic) long long foodType;                         //@synthesize foodType=_foodType - In the implementation block
@property (nonatomic,copy) NSDictionary * nutritionFacts;                //@synthesize nutritionFacts=_nutritionFacts - In the implementation block
@property (assign,nonatomic) double recommendedNumServings;              //@synthesize recommendedNumServings=_recommendedNumServings - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)brandName;
-(NSString *)genericName;
-(long long)foodType;
-(NSDictionary *)nutritionFacts;
-(double)recommendedNumServings;
-(BOOL)isEqualToHDDemoDataFoodObject:(id)arg1 ;
-(id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(long long)arg3 nutritionFacts:(id)arg4 ;
-(void)setBrandName:(NSString *)arg1 ;
-(void)setGenericName:(NSString *)arg1 ;
-(void)setFoodType:(long long)arg1 ;
-(void)setNutritionFacts:(NSDictionary *)arg1 ;
-(void)setRecommendedNumServings:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

