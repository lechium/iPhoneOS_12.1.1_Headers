/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMeasurement;

@interface HDBound : NSObject <NSSecureCoding, NSCopying> {

	BOOL _open;
	NSMeasurement* _value;

}

@property (nonatomic,copy) NSMeasurement * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL open;                        //@synthesize open=_open - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithValue:(id)arg1 open:(BOOL)arg2 ;
-(BOOL)isEqualToBound:(id)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMeasurement *)value;
-(void)setValue:(NSMeasurement *)arg1 ;
-(BOOL)open;
-(id)dictionaryRepresentation;
@end

