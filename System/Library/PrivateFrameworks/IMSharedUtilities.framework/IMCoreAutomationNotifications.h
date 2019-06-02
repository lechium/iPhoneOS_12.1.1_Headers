/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMCoreAutomationNotifications : NSObject {

	long long _chatsWrittenCount;
	long long _messagesWrittenCount;
	long long _attachmentsWrittenCount;

}

@property (readonly) long long chatsWrittenCount;                    //@synthesize chatsWrittenCount=_chatsWrittenCount - In the implementation block
@property (readonly) long long messagesWrittenCount;                 //@synthesize messagesWrittenCount=_messagesWrittenCount - In the implementation block
@property (readonly) long long attachmentsWrittenCount;              //@synthesize attachmentsWrittenCount=_attachmentsWrittenCount - In the implementation block
+(id)sharedInstance;
-(void)clearSyncCounts;
-(void)postCoreAutomationNotificationWithAction:(id)arg1 ;
-(long long)chatsWrittenCount;
-(long long)messagesWrittenCount;
-(long long)attachmentsWrittenCount;
-(void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(BOOL)arg2 ;
-(void)addNewAttachmentsSyncedCount:(long long)arg1 ;
-(void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2 ;
-(void)addNewMessagesSyncedCount:(long long)arg1 ;
-(void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(BOOL)arg2 ;
-(void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(BOOL)arg2 messagesDidSync:(BOOL)arg3 attachmentsDidSync:(BOOL)arg4 ;
-(void)addNewChatsSyncedCount:(long long)arg1 ;
-(id)init;
@end
