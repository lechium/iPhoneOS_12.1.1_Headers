/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject {

	double _sum;
	double _estimateDimension;
	NSMutableDictionary* _dimensions;

}

@property (assign,nonatomic) double sum;                                      //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) double estimateDimension;                      //@synthesize estimateDimension=_estimateDimension - In the implementation block
-(double)sum;
-(void)setSum:(double)arg1 ;
-(double)dimensionForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(double)estimateDimension;
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)dimensions;
@end

