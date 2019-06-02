/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation {

	BOOL _moreComing;
	/*^block*/id _notificationChangedBlock;
	/*^block*/id _fetchNotificationChangesCompletionBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                            //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) id notificationChangedBlock;                                  //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
@property (nonatomic,copy) id fetchNotificationChangesCompletionBlock;                   //@synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchNotificationChangesCompletionBlock;
-(void)setFetchNotificationChangesCompletionBlock:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setMoreComing:(BOOL)arg1 ;
-(BOOL)moreComing;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)notificationChangedBlock;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(id)init;
@end

