/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLFeatureProvider;
@class MLFeatureValue, NSDictionary;

@interface MLClassifierResult : NSObject {

	MLFeatureValue* _predictedClass;
	NSDictionary* _classProbability;
	long long _predictedClassFeatureType;
	id<MLFeatureProvider> _additionalFeatures;

}

@property (readonly) MLFeatureValue * predictedClass;                       //@synthesize predictedClass=_predictedClass - In the implementation block
@property (readonly) NSDictionary * classProbability;                       //@synthesize classProbability=_classProbability - In the implementation block
@property (readonly) long long predictedClassFeatureType;                   //@synthesize predictedClassFeatureType=_predictedClassFeatureType - In the implementation block
@property (readonly) id<MLFeatureProvider> additionalFeatures;              //@synthesize additionalFeatures=_additionalFeatures - In the implementation block
+(id)resultWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3 ;
+(id)resultWithIntClassProbability:(id)arg1 ;
+(id)resultWithStringClassProbability:(id)arg1 ;
+(id)resultWithIntClassProbability:(id)arg1 additionalFeatures:(id)arg2 ;
+(id)resultWithStringClassProbability:(id)arg1 additionalFeatures:(id)arg2 ;
-(id)asFeatureDictionaryWithPredictedClassDescription:(id)arg1 classProbabilityDescription:(id)arg2 ;
-(id<MLFeatureProvider>)additionalFeatures;
-(MLFeatureValue *)predictedClass;
-(NSDictionary *)classProbability;
-(long long)predictedClassFeatureType;
-(id)initWithStringClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3 ;
-(id)initWithIntClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3 ;
-(id)initWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3 ;
@end

