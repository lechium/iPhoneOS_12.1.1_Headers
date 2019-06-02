/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARTechnique.h>
#import <ARKit/ARTechniqueDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, ARTechniqueParallelGatherContext, NSArray, NSString;

@interface ARParentTechnique : ARTechnique <ARTechniqueDelegate> {

	BOOL _parallelExecution;
	NSObject*<OS_dispatch_queue> _queue;
	ARTechniqueParallelGatherContext* _previousContext;
	NSArray* __internalTechniques;

}

@property (copy) NSArray * techniques; 
@property (copy) NSArray * _internalTechniques;                     //@synthesize _internalTechniques=__internalTechniques - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)techniquesByReplacingOriginalTechniques:(id)arg1 withReplacementTechniques:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)techinqueInArray:(id)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)techniquesByForceReplacingTechniques:(id)arg1 withMatchingClassTechniques:(id)arg2 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(double)requiredTimeInterval;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(NSArray *)techniques;
-(id)initWithParallelTechniques:(id)arg1 ;
-(id)resultDataClasses;
-(void)setTechniques:(NSArray *)arg1 ;
-(id)techniqueOfClass:(Class)arg1 ;
-(id)initWithTechniques:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)setBonusLatency:(double)arg1 ;
-(id)initWithTechniques:(id)arg1 delegate:(id)arg2 ;
-(void)_submitResultsForTimestamp:(double)arg1 context:(id)arg2 ;
-(void)set_internalTechniques:(NSArray *)arg1 ;
-(NSArray *)_internalTechniques;
-(void)reuseTechniques:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)prepare;
@end
