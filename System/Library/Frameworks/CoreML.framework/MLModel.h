/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLModeling.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, MLModelConfiguration;

@interface MLModel : NSObject <MLModeling> {

	MLModelInterface* _interface;
	MLModelMetadata* _metadata;
	MLModelDescription* _modelDescription;
	MLModelConfiguration* _configuration;

}

@property (nonatomic,retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,retain) MLModelConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (readonly) MLModelInterface * interface;                               //@synthesize interface=_interface - In the implementation block
@property (readonly) MLModelMetadata * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
+(id)predictionsFromLoopingOverBatch:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)serializeInterfaceAndMetadata:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 error:(id*)arg3 ;
+(id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)predictionsFromSubbatchingBatch:(id)arg1 maxSubbatchLength:(long long)arg2 predictionBlock:(/*^block*/id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)compileModelAtURL:(id)arg1 error:(id*)arg2 ;
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDescription:(id)arg1 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 ;
-(id)initWithDescription:(id)arg1 configuration:(id)arg2 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initInterfaceAndMetadataWithCompiledArchive:(MLModelInputArchiver*)arg1 error:(id*)arg2 ;
-(id)vectorizeInput:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6 ;
-(id)objectBoundingBoxOutputDescription;
-(id)visionFeaturePrintInfo;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(id)description;
-(MLModelConfiguration *)configuration;
-(void)setConfiguration:(MLModelConfiguration *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(MLModelMetadata *)metadata;
-(id)debugQuickLookObject;
-(MLModelInterface *)interface;
@end

