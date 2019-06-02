/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSPort : NSObject <NSCopying, NSCoding>

@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) unsigned long long reservedSpaceLength; 
+(id)portWithMachPort:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)port;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(unsigned)machPort;
-(unsigned long long)reservedSpaceLength;
-(Class)classForPortCoder;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(void)invalidate;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(Class)classForCoder;
-(BOOL)isValid;
-(id)initWithMachPort:(unsigned)arg1 ;
@end

