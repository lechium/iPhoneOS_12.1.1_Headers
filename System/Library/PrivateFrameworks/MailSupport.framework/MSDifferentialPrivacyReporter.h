/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSDifferentialPrivacyDataSource, OS_dispatch_queue;
@class NSString, _MSTTLReference, MSMailDynamicDataAsset, NSObject;

@interface MSDifferentialPrivacyReporter : NSObject {

	NSString* _recordingKey;
	_MSTTLReference* _userDomains;
	id<MSDifferentialPrivacyDataSource> _dataSource;
	MSMailDynamicDataAsset* _mailDynamicData;
	/*^block*/id _recordingHandler;
	NSObject*<OS_dispatch_queue> _recordingQueue;

}

@property (nonatomic,copy) id recordingHandler;                                                   //@synthesize recordingHandler=_recordingHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> recordingQueue;                         //@synthesize recordingQueue=_recordingQueue - In the implementation block
@property (nonatomic,retain) NSString * _recordingKey;                                            //@synthesize recordingKey=_recordingKey - In the implementation block
@property (assign,nonatomic,__weak) id<MSDifferentialPrivacyDataSource> _dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) _MSTTLReference * _userDomains;                                      //@synthesize userDomains=_userDomains - In the implementation block
@property (nonatomic,retain) MSMailDynamicDataAsset * _mailDynamicData;                           //@synthesize mailDynamicData=_mailDynamicData - In the implementation block
-(BOOL)_shouldRecordMailbox:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)recordingQueue;
-(void)_recordSenders:(id)arg1 ;
-(_MSTTLReference *)_userDomains;
-(MSMailDynamicDataAsset *)_mailDynamicData;
-(BOOL)_isUserAccountDomain:(id)arg1 ;
-(id)recordingHandler;
-(NSString *)_recordingKey;
-(void)reportSenderDomainForMessages:(id)arg1 ;
-(void)set_recordingKey:(NSString *)arg1 ;
-(void)set_userDomains:(_MSTTLReference *)arg1 ;
-(void)set_dataSource:(id<MSDifferentialPrivacyDataSource>)arg1 ;
-(void)set_mailDynamicData:(MSMailDynamicDataAsset *)arg1 ;
-(void)setRecordingHandler:(id)arg1 ;
-(void)setRecordingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<MSDifferentialPrivacyDataSource>)_dataSource;
-(id)_localeIdentifier;
@end

