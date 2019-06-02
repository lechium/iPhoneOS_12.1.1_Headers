/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class PregateFeatureBuilder, NSDictionary, NSData, NSArray;

@interface PregateAnalyzer : NSObject {

	BOOL _haveInputVideoSize;
	int _trimInput_firstIndex;
	int _trimInput_lastIndex;
	int _gatingPassTrimResult_firstIndex;
	int _gatingPassTrimResult_lastIndex;
	PregateFeatureBuilder* featureBuilder;
	NSDictionary* pregateParameters;
	NSDictionary* _defaultParameters;
	NSData* _perFrameTranslationVecs;
	NSArray* _badFrameFlags;
	NSArray* _coarseFocusFlags;
	NSArray* _focusScores;
	NSArray* _gainScores;
	NSArray* _exposureTimes;
	CGSize _inputVideoSize;
	SCD_Struct_Pr1 minimumRequiredTrimLength;
	SCD_Struct_Pr1 requiredFrameTime;
	SCD_Struct_Pr2 inputTrimTime;
	SCD_Struct_Pr2 outputTrimTime;

}

@property (retain) NSDictionary * defaultParameters;                      //@synthesize defaultParameters=_defaultParameters - In the implementation block
@property (assign) CGSize inputVideoSize;                                 //@synthesize inputVideoSize=_inputVideoSize - In the implementation block
@property (assign) BOOL haveInputVideoSize;                               //@synthesize haveInputVideoSize=_haveInputVideoSize - In the implementation block
@property (assign) int trimInput_firstIndex;                              //@synthesize trimInput_firstIndex=_trimInput_firstIndex - In the implementation block
@property (assign) int trimInput_lastIndex;                               //@synthesize trimInput_lastIndex=_trimInput_lastIndex - In the implementation block
@property (assign) int gatingPassTrimResult_firstIndex;                   //@synthesize gatingPassTrimResult_firstIndex=_gatingPassTrimResult_firstIndex - In the implementation block
@property (assign) int gatingPassTrimResult_lastIndex;                    //@synthesize gatingPassTrimResult_lastIndex=_gatingPassTrimResult_lastIndex - In the implementation block
@property (retain) NSData * perFrameTranslationVecs;                      //@synthesize perFrameTranslationVecs=_perFrameTranslationVecs - In the implementation block
@property (retain) NSArray * badFrameFlags;                               //@synthesize badFrameFlags=_badFrameFlags - In the implementation block
@property (retain) NSArray * coarseFocusFlags;                            //@synthesize coarseFocusFlags=_coarseFocusFlags - In the implementation block
@property (retain) NSArray * focusScores;                                 //@synthesize focusScores=_focusScores - In the implementation block
@property (retain) NSArray * gainScores;                                  //@synthesize gainScores=_gainScores - In the implementation block
@property (retain) NSArray * exposureTimes;                               //@synthesize exposureTimes=_exposureTimes - In the implementation block
@property (retain) PregateFeatureBuilder * featureBuilder; 
@property (retain) NSDictionary * pregateParameters; 
@property (assign) SCD_Struct_Pr1 minimumRequiredTrimLength; 
@property (assign) SCD_Struct_Pr1 requiredFrameTime; 
@property (assign) SCD_Struct_Pr2 inputTrimTime; 
@property (readonly) SCD_Struct_Pr2 outputTrimTime; 
+(id)pregateFailureReasonsToString:(int)arg1 ;
-(id)paramValueForKey:(id)arg1 ;
-(BOOL)getParamForKey:(id)arg1 toFloat:(float*)arg2 ;
-(BOOL)exposureTriplet:(const float*)arg1 violatesThreshold:(float)arg2 ;
-(int)processExposureArray:(id)arg1 gainArray:(id)arg2 intoFlagsArray:(id)arg3 firstIndex:(long long)arg4 lastIndex:(long long)arg5 ;
-(MetadataFloatVector)cumulativePanForStartIndex:(long long)arg1 lastIndex:(long long)arg2 ;
-(SCD_Struct_Pr1)minimumRequiredTrimLength;
-(SCD_Struct_Pr1)requiredFrameTime;
-(BOOL)subsegmentMeetsTrimCriteriaForFrames:(id)arg1 firstFrame:(long long)arg2 lastFrame:(long long)arg3 firstFrameTimeOut:(SCD_Struct_Pr1*)arg4 lastFrameTimeOut:(SCD_Struct_Pr1*)arg5 preciseTrimTimeOut:(SCD_Struct_Pr1*)arg6 ;
-(long long)findLongestPassingSegmentInFrameFlags:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 startOfRun:(long long*)arg4 gatingFailures:(int*)arg5 ;
-(int)isCumulativePanAcceptableForFrames:(id)arg1 firstIndex:(long long)arg2 lastIndex:(long long)arg3 ;
-(int)fetchVideoDimensionsFromMetadata;
-(int)getFrameMetadataArray:(id*)arg1 ;
-(BOOL)findFrameIndicesInFrameArray:(id)arg1 forTimeRange:(SCD_Struct_Pr2)arg2 startIndex:(int*)arg3 endIndex:(int*)arg4 ;
-(int)getPerFrameGatingData:(id)arg1 firstIndex:(long long)arg2 lastIndex:(long long)arg3 ;
-(int)findGatingPassViaTrimming:(id)arg1 ;
-(int)processPregateSuccess:(int*)arg1 ;
-(PregateFeatureBuilder *)featureBuilder;
-(void)setFeatureBuilder:(PregateFeatureBuilder *)arg1 ;
-(void)setMinimumRequiredTrimLength:(SCD_Struct_Pr1)arg1 ;
-(void)setRequiredFrameTime:(SCD_Struct_Pr1)arg1 ;
-(NSDictionary *)pregateParameters;
-(void)setPregateParameters:(NSDictionary *)arg1 ;
-(SCD_Struct_Pr2)inputTrimTime;
-(void)setInputTrimTime:(SCD_Struct_Pr2)arg1 ;
-(SCD_Struct_Pr2)outputTrimTime;
-(NSDictionary *)defaultParameters;
-(void)setDefaultParameters:(NSDictionary *)arg1 ;
-(CGSize)inputVideoSize;
-(void)setInputVideoSize:(CGSize)arg1 ;
-(BOOL)haveInputVideoSize;
-(void)setHaveInputVideoSize:(BOOL)arg1 ;
-(int)trimInput_firstIndex;
-(void)setTrimInput_firstIndex:(int)arg1 ;
-(int)trimInput_lastIndex;
-(void)setTrimInput_lastIndex:(int)arg1 ;
-(int)gatingPassTrimResult_firstIndex;
-(void)setGatingPassTrimResult_firstIndex:(int)arg1 ;
-(int)gatingPassTrimResult_lastIndex;
-(void)setGatingPassTrimResult_lastIndex:(int)arg1 ;
-(NSData *)perFrameTranslationVecs;
-(void)setPerFrameTranslationVecs:(NSData *)arg1 ;
-(NSArray *)badFrameFlags;
-(void)setBadFrameFlags:(NSArray *)arg1 ;
-(NSArray *)coarseFocusFlags;
-(void)setCoarseFocusFlags:(NSArray *)arg1 ;
-(NSArray *)focusScores;
-(void)setFocusScores:(NSArray *)arg1 ;
-(NSArray *)gainScores;
-(void)setGainScores:(NSArray *)arg1 ;
-(NSArray *)exposureTimes;
-(void)setExposureTimes:(NSArray *)arg1 ;
-(id)init;
@end

