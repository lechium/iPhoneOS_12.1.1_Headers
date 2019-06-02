/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface HKSemanticDate : NSObject <NSSecureCoding, NSCopying> {

	NSString* _keyPath;
	NSDate* _date;

}

@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)semanticDateWithKeyPath:(id)arg1 date:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithKeyPath:(id)arg1 date:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSString *)keyPath;
@end

