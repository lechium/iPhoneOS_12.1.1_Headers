/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLBatchExtractionStrategyStorage;
@class NSString;

@interface CPLBatchExtractionStep : NSObject {

	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeIdentifier;                            //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 ;
-(NSString *)scopeIdentifier;
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(id)description;
-(void)reset;
-(id)shortDescription;
@end

