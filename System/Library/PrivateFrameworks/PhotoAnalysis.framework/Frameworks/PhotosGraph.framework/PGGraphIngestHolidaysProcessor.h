/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphIngestProcessor.h>

@interface PGGraphIngestHolidaysProcessor : PGGraphIngestProcessor
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)insertHolidaysWithMomentNodes:(id)arg1 locale:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 locale:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
@end

