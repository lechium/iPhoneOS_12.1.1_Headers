/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol NTReadablePrivateDataStorage, FCContentContext;
@class NTPBTodayResultOperationInfo;

@interface NTTodayResultOperation : FCOperation {

	id<NTReadablePrivateDataStorage> _privateDataStorage;
	id<FCContentContext> _contentContext;
	/*^block*/id _sessionProvider;
	NTPBTodayResultOperationInfo* _operationInfo;
	/*^block*/id _headlineResultCompletionHandler;

}

@property (nonatomic,retain) id<NTReadablePrivateDataStorage> privateDataStorage;              //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                              //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) id sessionProvider;                                                 //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationInfo * operationInfo;                       //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,copy) id headlineResultCompletionHandler;                                 //@synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler - In the implementation block
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
-(void)setSessionProvider:(id)arg1 ;
-(id<NTReadablePrivateDataStorage>)privateDataStorage;
-(void)setPrivateDataStorage:(id<NTReadablePrivateDataStorage>)arg1 ;
-(void)setHeadlineResultCompletionHandler:(id)arg1 ;
-(id)headlineResultCompletionHandler;
-(NTPBTodayResultOperationInfo *)operationInfo;
-(void)setOperationInfo:(NTPBTodayResultOperationInfo *)arg1 ;
-(id)sessionProvider;
-(id)init;
@end
