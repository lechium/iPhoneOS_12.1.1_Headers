/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSDictionary, NSString;

@interface SGQPMultiLabelModel : NSObject <PMLPlistAndChunksSerializableProtocol> {

	NSDictionary* _modelsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModelsAndLabelsMapping:(id)arg1 ;
-(id)scoredLabelsForCovariates:(id)arg1 ;
-(id)rankedLabelsForCovariates:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
@end

