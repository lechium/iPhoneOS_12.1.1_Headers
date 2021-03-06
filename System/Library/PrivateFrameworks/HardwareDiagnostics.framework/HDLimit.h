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

@class NSString, HDBound;

@interface HDLimit : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	HDBound* _upperBound;
	HDBound* _lowerBound;

}

@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) HDBound * upperBound;              //@synthesize upperBound=_upperBound - In the implementation block
@property (nonatomic,copy) HDBound * lowerBound;              //@synthesize lowerBound=_lowerBound - In the implementation block
+(BOOL)supportsSecureCoding;
-(HDBound *)lowerBound;
-(HDBound *)upperBound;
-(void)setLowerBound:(HDBound *)arg1 ;
-(BOOL)isEqualToLimit:(id)arg1 ;
-(BOOL)measurementWithinBounds:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithName:(id)arg1 ;
-(void)setUpperBound:(HDBound *)arg1 ;
@end

