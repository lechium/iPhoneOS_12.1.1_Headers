/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NUDataSet : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_NU24 _stats;
	struct {
		unsigned sum : 1;
		unsigned min : 1;
		unsigned max : 1;
		unsigned mean : 1;
		unsigned geomean : 1;
		unsigned median : 1;
		unsigned variance : 1;
		unsigned stddev : 1;
		unsigned stderr : 1;
		unsigned ci95 : 1;
		unsigned cv : 1;
		unsigned mad : 1;
	}  _flags;
	DataSet* _data;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) double sum; 
@property (nonatomic,readonly) double min; 
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) double mean; 
@property (nonatomic,readonly) double geometricMean; 
@property (nonatomic,readonly) double median; 
@property (nonatomic,readonly) double variance; 
@property (nonatomic,readonly) double standardDeviation; 
@property (nonatomic,readonly) double standardError; 
@property (nonatomic,readonly) double confidenceInterval95; 
@property (nonatomic,readonly) double coefficientOfVariation; 
@property (nonatomic,readonly) double medianAbsoluteDeviation; 
@property (nonatomic,readonly) double estimatedStandardDeviation; 
@property (nonatomic,readonly) double estimatedStandardError; 
@property (nonatomic,readonly) double estimatedConfidenceInterval95; 
@property (nonatomic,readonly) double estimatedCoefficientOfVariation; 
-(double)standardError;
-(id)initWithValues:(const double*)arg1 count:(long long)arg2 ;
-(double)valueAtIndex:(long long)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(double)sum;
-(id)initWithDataSet:(id)arg1 ;
-(BOOL)isEqualToDataSet:(id)arg1 ;
-(double)variance;
-(double)medianAbsoluteDeviation;
-(double)estimatedStandardDeviation;
-(double)estimatedStandardError;
-(void)enumerateValues:(/*^block*/id)arg1 ;
-(const DataSet*)_const_data;
-(void)_resetStats;
-(double)geometricMean;
-(double)confidenceInterval95;
-(double)coefficientOfVariation;
-(double)estimatedConfidenceInterval95;
-(double)estimatedCoefficientOfVariation;
-(double)percentile:(double)arg1 ;
-(double)mean;
-(double)standardDeviation;
-(double)min;
-(double)max;
-(id)filter:(/*^block*/id)arg1 ;
-(double)median;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(double)arg1 ;
@end

