/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSRootMeanSquaredTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {

	double* _rmstie;

}

@property (nonatomic,copy,readonly) NSArray * rmstie; 
+(id)variableName;
+(id)plotYLabel;
+(id)plotTitle;
+(id)plotSize;
-(void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5 ;
-(id)initWithTimeErrorValues:(id)arg1 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(NSArray *)rmstie;
-(id)rmstieFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(void)dealloc;
@end
