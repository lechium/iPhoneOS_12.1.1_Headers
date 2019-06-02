/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsExpress;
	NSString* _type;
	long long _technologyType;
	NSSet* _TCIs;

}

@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long technologyType;              //@synthesize technologyType=_technologyType - In the implementation block
@property (nonatomic,copy) NSSet * TCIs;                            //@synthesize TCIs=_TCIs - In the implementation block
@property (assign,nonatomic) BOOL supportsExpress;                  //@synthesize supportsExpress=_supportsExpress - In the implementation block
+(id)criterionForExpressMode:(id)arg1 ;
+(id)expressModeForCriterion:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setTechnologyType:(long long)arg1 ;
-(NSSet *)TCIs;
-(void)setTCIs:(NSSet *)arg1 ;
-(void)setSupportsExpress:(BOOL)arg1 ;
-(BOOL)supportsExpress;
-(long long)technologyType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

