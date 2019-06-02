/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSDictionary, NSArray, NSMutableDictionary;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation {

	/*^block*/id _shareParticipantKeyFetchedBlock;
	/*^block*/id _shareParticipantKeyCompletionBlock;
	NSDictionary* _baseTokensByShareID;
	NSDictionary* _childRecordIDsByShareID;
	NSArray* _shareIDs;
	NSMutableDictionary* _errorsByShareID;

}

@property (nonatomic,retain) NSArray * shareIDs;                                  //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByShareID;               //@synthesize errorsByShareID=_errorsByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * baseTokensByShareID;                  //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * childRecordIDsByShareID;              //@synthesize childRecordIDsByShareID=_childRecordIDsByShareID - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyFetchedBlock;                    //@synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock - In the implementation block
@property (nonatomic,copy) id shareParticipantKeyCompletionBlock;                 //@synthesize shareParticipantKeyCompletionBlock=_shareParticipantKeyCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(id)shareParticipantKeyCompletionBlock;
-(NSMutableDictionary *)errorsByShareID;
-(void)setErrorsByShareID:(NSMutableDictionary *)arg1 ;
-(id)initWithShareIDs:(id)arg1 ;
-(void)setShareParticipantKeyCompletionBlock:(id)arg1 ;
-(void)setShareParticipantKeyFetchedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)shareIDs;
-(NSDictionary *)baseTokensByShareID;
-(NSDictionary *)childRecordIDsByShareID;
-(id)shareParticipantKeyFetchedBlock;
-(void)setShareIDs:(NSArray *)arg1 ;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(void)setChildRecordIDsByShareID:(NSDictionary *)arg1 ;
@end
