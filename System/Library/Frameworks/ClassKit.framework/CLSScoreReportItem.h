/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSScoreReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	double _value;
	double _maxValue;

}

@property (assign,nonatomic) double value;                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) double normalized; 
+(BOOL)supportsSecureCoding;
-(void)setMaxValue:(double)arg1 ;
-(double)maxValue;
-(double)normalized;
-(void)add:(id)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

