/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableDictionary* _recordsByRecordID;
	NSMutableDictionary* _errorsByRecordID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;              //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByRecordID;                //@synthesize recordsByRecordID=_recordsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                 //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                               //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                      //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                           //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
-(NSArray *)desiredKeys;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(id)fetchRecordsCompletionBlock;
-(NSArray *)recordIDs;
-(NSMutableArray *)remainingRecordIDBatches;
-(void)_continueRefreshing;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(NSMutableDictionary *)errorsByRecordID;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)recordsByRecordID;
-(void)setRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)init;
@end

