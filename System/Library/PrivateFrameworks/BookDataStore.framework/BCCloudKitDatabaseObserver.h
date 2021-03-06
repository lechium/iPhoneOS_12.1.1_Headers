/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCCloudKitDatabaseObserver <NSObject>
@required
-(void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
-(void)databaseController:(id)arg1 attachmentChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 recordsChanged:(id)arg2;
-(void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@end

