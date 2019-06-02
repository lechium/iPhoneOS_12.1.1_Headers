/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation {

	BOOL _wantsChanges;
	BOOL _moreComing;
	/*^block*/id _notificationChangedBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                            //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                              //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,copy) id notificationChangedBlock;                                    //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
-(unsigned long long)resultsLimit;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setMoreComing:(BOOL)arg1 ;
-(BOOL)moreComing;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)setWantsChanges:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(id)notificationChangedBlock;
-(void)_handleFetchChangesRequestFinished:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)main;
@end

