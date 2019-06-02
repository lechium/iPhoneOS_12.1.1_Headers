/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDateInterval;


@protocol PGGraphIngestBusiness <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * businessCategories; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) double routineVisitConfidence; 
@property (nonatomic,readonly) BOOL hasRoutineVisit; 
@required
-(unsigned long long)muid;
-(long long)venueCapacity;
-(NSDateInterval *)dateInterval;
-(NSArray *)businessCategories;
-(double)routineVisitConfidence;
-(BOOL)hasRoutineVisit;
-(NSString *)name;

@end
