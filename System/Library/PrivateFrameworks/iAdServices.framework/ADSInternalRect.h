/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADSInternalPoint, ADSInternalSize;

@interface ADSInternalRect : NSObject <NSSecureCoding, NSCopying> {

	ADSInternalPoint* _origin;
	ADSInternalSize* _size;

}

@property (nonatomic,copy) ADSInternalPoint * origin;              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) ADSInternalSize * size;                 //@synthesize size=_size - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
-(ADSInternalSize *)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ADSInternalPoint *)origin;
-(void)setSize:(ADSInternalSize *)arg1 ;
-(void)setOrigin:(ADSInternalPoint *)arg1 ;
@end

