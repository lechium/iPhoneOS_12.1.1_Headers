/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _NSDispatchData : NSData
+(BOOL)supportsSecureCoding;
-(BOOL)_isDispatchData;
-(BOOL)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)_createDispatchData;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end

