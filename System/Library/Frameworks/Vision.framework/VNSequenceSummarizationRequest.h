/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSNumber, VNSequenceSummarizationObservation;

@interface VNSequenceSummarizationRequest : VNImageBasedRequest

@property (nonatomic,retain) NSNumber * frameRate; 
@property (nonatomic,retain) NSNumber * frameTimeStamp; 
@property (nonatomic,retain) VNSequenceSummarizationObservation * inputObservation; 
+(id)supportedFrameRates;
+(const SCD_Struct_VN17*)dependentRequestCompatability;
+(Class)configurationClass;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(VNSequenceSummarizationObservation *)inputObservation;
-(void)setInputObservation:(VNSequenceSummarizationObservation *)arg1 ;
-(void)setFrameTimeStamp:(NSNumber *)arg1 ;
-(NSNumber *)frameTimeStamp;
-(id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2 ;
-(NSNumber *)frameRate;
-(void)setFrameRate:(NSNumber *)arg1 ;
@end

