/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * endDate; 
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToDateInterval:(id)arg1 ;
-(id)intersectionWithDateInterval:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)intersectsDateInterval:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(long long)compare:(id)arg1 ;
@end

