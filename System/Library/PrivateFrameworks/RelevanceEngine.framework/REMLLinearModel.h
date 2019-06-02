/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REMLModel.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel {

	NSDictionary* _models;
	float _scaleFactor;
	NSDictionary* _nonActionModels;
	float _nonActionScaleFactor;

}
-(void)_clearCache;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2 ;
-(BOOL)requiresDirectory;
-(void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3 ;
-(id)_predictWithFeatures:(id)arg1 ;
-(long long)_getNumberOfCoordinates;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_clearModel;
@end

