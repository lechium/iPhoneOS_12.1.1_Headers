/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class _EARSpeechRecognitionAudioBuffer, _EARFormatter, NSObject, NSString, NSData, NSDictionary, NSArray, _EARSpeechModelInfo;

@interface _EARSpeechRecognizer : NSObject {

	unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer> >* _recognizer;
	_EARSpeechRecognitionAudioBuffer* _currentAudioBuffer;
	_EARFormatter* _formatter;
	NSObject*<OS_dispatch_queue> _formatterQueue;
	NSObject*<OS_dispatch_queue> _recognitionQueue;
	NSString* _configPath;
	BOOL _detectUtterances;
	BOOL _concatenateUtterances;
	BOOL _recognizeEagerCandidates;
	BOOL _farField;
	NSData* _userProfileData;
	NSData* _jitProfileData;
	double _endpointStart;
	double _maximumRecognitionDuration;
	NSDictionary* _recognitionReplacements;
	NSDictionary* _recognitionConfidenceSubtraction;
	NSArray* _leftContext;
	NSString* _inputOrigin;

}

@property (nonatomic,copy) NSData * userProfileData;                                     //@synthesize userProfileData=_userProfileData - In the implementation block
@property (nonatomic,copy) NSData * jitProfileData;                                      //@synthesize jitProfileData=_jitProfileData - In the implementation block
@property (nonatomic,readonly) _EARSpeechModelInfo * modelInfo; 
@property (assign,nonatomic) BOOL detectUtterances;                                      //@synthesize detectUtterances=_detectUtterances - In the implementation block
@property (assign,nonatomic) BOOL concatenateUtterances;                                 //@synthesize concatenateUtterances=_concatenateUtterances - In the implementation block
@property (assign,nonatomic) double endpointStart;                                       //@synthesize endpointStart=_endpointStart - In the implementation block
@property (assign,nonatomic) BOOL recognizeEagerCandidates;                              //@synthesize recognizeEagerCandidates=_recognizeEagerCandidates - In the implementation block
@property (assign,nonatomic) BOOL farField;                                              //@synthesize farField=_farField - In the implementation block
@property (assign,nonatomic) double maximumRecognitionDuration;                          //@synthesize maximumRecognitionDuration=_maximumRecognitionDuration - In the implementation block
@property (nonatomic,copy) NSDictionary * recognitionReplacements;                       //@synthesize recognitionReplacements=_recognitionReplacements - In the implementation block
@property (nonatomic,copy) NSDictionary * recognitionConfidenceSubtraction;              //@synthesize recognitionConfidenceSubtraction=_recognitionConfidenceSubtraction - In the implementation block
@property (nonatomic,copy) NSArray * leftContext;                                        //@synthesize leftContext=_leftContext - In the implementation block
@property (nonatomic,copy) NSString * inputOrigin;                                       //@synthesize inputOrigin=_inputOrigin - In the implementation block
+(id)minimumSupportedConfigurationVersion;
+(id)maximumSupportedConfigurationVersion;
+(id)rawTokenResultsFromRecognitionResults:(id)arg1 ;
+(void)initialize;
-(BOOL)detectUtterances;
-(void)setDetectUtterances:(BOOL)arg1 ;
-(BOOL)farField;
-(void)setFarField:(BOOL)arg1 ;
-(double)maximumRecognitionDuration;
-(void)setMaximumRecognitionDuration:(double)arg1 ;
-(_EARSpeechModelInfo *)modelInfo;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 overrides:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 overrides:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5 ;
-(id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 ;
-(id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 userProfileData:(id)arg5 ;
-(id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 ;
-(id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 useQuasarFormatter:(BOOL)arg2 ;
-(void)updateUserProfileData:(id)arg1 ;
-(shared_ptr<quasar::SpeechRequestData>*)requestParametersWithUserProfileData:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 resultStream:(shared_ptr<quasar::RecogResultStreamBase>*)arg4 extraLanguageModel:(id)arg5 symbolTableList:(const shared_ptr<quasar::SymbolTableList>*)arg6 ;
-(id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6 ;
-(id)recognitionStatistics;
-(void)getFormatterWithBlock:(/*^block*/id)arg1 ;
-(void)setAlternateRawRecognitionTokenSausage:(id)arg1 ;
-(NSData *)userProfileData;
-(void)setUserProfileData:(NSData *)arg1 ;
-(NSData *)jitProfileData;
-(void)setJitProfileData:(NSData *)arg1 ;
-(BOOL)concatenateUtterances;
-(void)setConcatenateUtterances:(BOOL)arg1 ;
-(double)endpointStart;
-(void)setEndpointStart:(double)arg1 ;
-(BOOL)recognizeEagerCandidates;
-(void)setRecognizeEagerCandidates:(BOOL)arg1 ;
-(NSDictionary *)recognitionReplacements;
-(void)setRecognitionReplacements:(NSDictionary *)arg1 ;
-(NSDictionary *)recognitionConfidenceSubtraction;
-(void)setRecognitionConfidenceSubtraction:(NSDictionary *)arg1 ;
-(NSArray *)leftContext;
-(void)setLeftContext:(NSArray *)arg1 ;
-(id)runRecognitionWithResultStream:(id)arg1 ;
-(void)cancelRecognition;
-(id)initWithConfiguration:(id)arg1 ;
@end

