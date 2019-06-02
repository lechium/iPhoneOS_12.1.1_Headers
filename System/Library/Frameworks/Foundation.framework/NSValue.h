/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (readonly) const char* objCType; 
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
-(BOOL)isNSValue__;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(id)weakObjectValue;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
-(NSEdgeInsets)edgeInsetsValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)pointValue;
-(CGRect)rectValue;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(const char*)objCType;
-(void*)pointerValue;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(NSRange)rangeValue;
-(CGSize)sizeValue;
-(id)nonretainedObjectValue;
@end

