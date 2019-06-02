/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _codings;

}

@property (nonatomic,copy,readonly) NSArray * codings;              //@synthesize codings=_codings - In the implementation block
+(id)collectionWithCodings:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCodings:(id)arg1 ;
-(NSArray *)codings;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

