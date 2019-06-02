/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/IPFeatureScanner.h>

@class NSArray, NSMutableArray;

@interface IPFeatureTextMessageScanner : IPFeatureScanner {

	BOOL _followProposal;
	NSArray* _contextMessageUnits;
	NSMutableArray* _detectedEventsInContext;
	NSMutableArray* _dataFeaturesExtractedInContextAndMain;

}

@property (retain) NSMutableArray * detectedEventsInContext;                                      //@synthesize detectedEventsInContext=_detectedEventsInContext - In the implementation block
@property (assign) BOOL followProposal;                                                           //@synthesize followProposal=_followProposal - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataFeaturesExtractedInContextAndMain;              //@synthesize dataFeaturesExtractedInContextAndMain=_dataFeaturesExtractedInContextAndMain - In the implementation block
@property (retain) NSArray * contextMessageUnits;                                                 //@synthesize contextMessageUnits=_contextMessageUnits - In the implementation block
-(double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2 ;
-(void)resetScanState;
-(void)confidenceForEvents:(id)arg1 ;
-(void)doSynchronousScanWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)scanEventsInMessageUnits:(id)arg1 contextMessageUnits:(id)arg2 synchronously:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setContextMessageUnits:(NSArray *)arg1 ;
-(NSArray *)contextMessageUnits;
-(id)processScanOfMainMessageUnit:(id)arg1 contextMessageUnits:(id)arg2 ;
-(NSMutableArray *)detectedEventsInContext;
-(NSMutableArray *)dataFeaturesExtractedInContextAndMain;
-(void)experimentalConfidenceForEvents:(id)arg1 ;
-(unsigned long long)mainSentencePolarityFromMessageUnit:(id)arg1 index:(unsigned long long)arg2 ;
-(id)keywordFeaturesForMessageUnit:(id)arg1 ;
-(id)dataDetectorsFeaturesForMessageUnit:(id)arg1 context:(id)arg2 ;
-(id)sentenceFeaturesForMessageUnit:(id)arg1 ;
-(unsigned long long)mainSentencePolarityFrom:(id)arg1 ;
-(void)setDetectedEventsInContext:(NSMutableArray *)arg1 ;
-(void)setDataFeaturesExtractedInContextAndMain:(NSMutableArray *)arg1 ;
-(void)setFollowProposal:(BOOL)arg1 ;
-(id)commonComponentsForConfidence;
-(double)experimentalConfidenceForEvent:(id)arg1 experimentalBaseConfidence:(double)arg2 ;
-(id)eventSpecificComponentsForConfidence:(id)arg1 ;
-(BOOL)followProposal;
-(void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

