/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>

@class NSSet, NSURL, BWEspressoInferenceContext, NSMutableDictionary, NSMutableArray, NSString, NSArray;

@interface BWEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable> {

	int _type;
	int _executionTarget;
	NSSet* _preventionReasons;
	NSURL* _networkURL;
	BWEspressoInferenceContext* _context;
	OpaqueFigCaptureISPProcessingSessionRef _ispProcessingSession;
	void* _espressoPlan;
	SCD_Struct_Fi77* _espressoNetwork;
	int _espressoPriority;
	NSMutableDictionary* _bindingNamesByRequirement;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _cloneVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	NSMutableArray* _outputMetadataRequirements;
	NSMutableArray* _pixelBuffersLockedDuringExecution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int executionTarget;                                   //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,copy,readonly) NSSet * preventionReasons;                        //@synthesize preventionReasons=_preventionReasons - In the implementation block
@property (nonatomic,readonly) NSArray * inputVideoRequirements;                      //@synthesize inputVideoRequirements=_inputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputVideoRequirements;                     //@synthesize outputVideoRequirements=_outputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * cloneVideoRequirements;                      //@synthesize cloneVideoRequirements=_cloneVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * inputMetadataRequirements;                   //@synthesize inputMetadataRequirements=_inputMetadataRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputMetadataRequirements;                  //@synthesize outputMetadataRequirements=_outputMetadataRequirements - In the implementation block
+(void)initialize;
-(id)newStorage;
-(id<BWInferenceExecutable>)executable;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)executionTarget;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW2)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)_mapSchedulerToEspressoPriority:(unsigned)arg1 ;
-(int)_espressoStorageTypeForExecutionTarget:(int)arg1 ;
-(int)_bindPixelBuffer:(CVBufferRef)arg1 asAccelerateImageForRequirement:(id)arg2 withBindingName:(id)arg3 ;
-(int)_prepareForInferenceWithWorkQueue:(id)arg1 ;
-(int)_ensureEspressoBindingsUsingStorage:(id)arg1 ;
-(id)initWithType:(int)arg1 networkURL:(id)arg2 context:(id)arg3 executionTarget:(int)arg4 schedulerPriority:(unsigned)arg5 preventionReasons:(id)arg6 resourceProvider:(id)arg7 ;
-(id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2 ;
-(int)prewarm;
-(void)dealloc;
-(NSString *)description;
-(int)type;
@end

