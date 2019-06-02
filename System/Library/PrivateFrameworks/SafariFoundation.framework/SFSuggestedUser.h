/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSuggestedUser : NSObject <NSCopying, NSSecureCoding> {

	NSString* _value;
	long long _type;
	long long _usageFrequency;

}

@property (assign,nonatomic) long long usageFrequency;              //@synthesize usageFrequency=_usageFrequency - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
+(id)suggestedUserWithValue:(id)arg1 type:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(long long)usageFrequency;
-(void)setUsageFrequency:(long long)arg1 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)value;
-(long long)compare:(id)arg1 ;
@end

