/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CardDAVFinishInitialSyncConsumer <NSObject>
@required
-(void)successfullyFinishedInitalUploadForFolderWithID:(id)arg1 blacklistedUUIDs:(id)arg2 blacklistedHREFs:(id)arg3;
-(void)failedToFinishInitialSync:(id)arg1 error:(id)arg2;

@end
