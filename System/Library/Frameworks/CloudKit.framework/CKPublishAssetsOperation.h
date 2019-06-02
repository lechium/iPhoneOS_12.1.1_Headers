/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSDictionary, NSArray, NSMutableDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation {

	/*^block*/id _assetPublishedBlock;
	/*^block*/id _publishAssetCompletionBlock;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrorsByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                        //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrorsByRecordID;              //@synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;                  //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                            //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                              //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                       //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,copy) id publishAssetCompletionBlock;                               //@synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)publishAssetCompletionBlock;
-(NSMutableDictionary *)perItemErrorsByRecordID;
-(void)setPerItemErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordIDs;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setPublishAssetCompletionBlock:(id)arg1 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(unsigned long long)requestedTTL;
-(unsigned long long)URLOptions;
-(id)assetPublishedBlock;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
@end

