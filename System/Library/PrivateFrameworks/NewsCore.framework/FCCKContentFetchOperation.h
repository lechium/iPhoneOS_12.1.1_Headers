/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary;

@interface FCCKContentFetchOperation : FCNetworkOperation {

	BOOL _getPermanentAssetURLs;
	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSDictionary* _recordIDsToETags;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSArray* _requestUUIDs;
	long long _networkEventType;
	NSDictionary* _resultRecordsByRecordID;

}

@property (nonatomic,copy) NSArray * requestUUIDs;                                //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultRecordsByRecordID;              //@synthesize resultRecordsByRecordID=_resultRecordsByRecordID - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                   //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                     //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL getPermanentAssetURLs;                          //@synthesize getPermanentAssetURLs=_getPermanentAssetURLs - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                           //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                        //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) long long networkEventType;                          //@synthesize networkEventType=_networkEventType - In the implementation block
-(NSArray *)desiredKeys;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setNetworkEventType:(long long)arg1 ;
-(NSArray *)requestUUIDs;
-(id)fetchRecordsCompletionBlock;
-(id)perRecordCompletionBlock;
-(NSArray *)recordIDs;
-(long long)networkEventType;
-(void)setResultRecordsByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)resultRecordsByRecordID;
-(id)throttleGroup;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
-(void)setRequestUUIDs:(NSArray *)arg1 ;
-(BOOL)getPermanentAssetURLs;
-(NSDictionary *)recordIDsToETags;
-(id)_operationForRecordID:(id)arg1 ;
-(void)setGetPermanentAssetURLs:(BOOL)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)init;
@end
