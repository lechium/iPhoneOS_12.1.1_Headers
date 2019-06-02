/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSError, BRCPQLConnection, CKServerChangeToken, BRCClientZone;

@interface BRCPendingChangesStream : NSObject {

	NSURL* _databaseURL;
	NSError* _error;
	BRCPQLConnection* _db;
	CKServerChangeToken* _startingChangeToken;
	BRCClientZone* _clientZone;

}
-(void)_openDB;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)enumerateRecordsOfType:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)destroyDatabase;
-(void)fetchTokenState:(/*^block*/id)arg1 ;
-(BOOL)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6 ;
-(void)destroyDatabaseOnQueue:(BOOL)arg1 ;
-(void)_dbBecameCorrupted;
-(void)_createSchemaIfNecessary;
-(long long)_recordTypeFromRecordID:(id)arg1 isShare:(BOOL)arg2 isDelete:(BOOL)arg3 ;
-(void)_destroyDatabase;
-(id)saveError;
-(void)dealloc;
@end

