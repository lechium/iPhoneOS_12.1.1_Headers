/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKArchiveRecordsOperation : CKDatabaseOperation {

	/*^block*/id _recordArchivedBlock;
	/*^block*/id _archiveRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrors;

}

@property (nonatomic,retain) NSMutableDictionary * perItemErrors;              //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                             //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
@property (nonatomic,copy) id archiveRecordsCompletionBlock;                   //@synthesize archiveRecordsCompletionBlock=_archiveRecordsCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)archiveRecordsCompletionBlock;
-(NSMutableDictionary *)perItemErrors;
-(void)setArchiveRecordsCompletionBlock:(id)arg1 ;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordIDs;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)recordArchivedBlock;
-(id)init;
@end
