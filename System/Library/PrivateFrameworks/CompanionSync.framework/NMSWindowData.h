/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSObject, _SYSharedServiceDB, NSArray, NSDate;

@interface NMSWindowData : NSObject {

	NSString* _path;
	CFStringRef _loggingFacility;
	NSObject*<OS_dispatch_queue> _syncQ;
	sqlite3Ref _db;
	_SYSharedServiceDB* _sharedDB;
	sqlite3_stmtRef _addMessageInFlight;
	sqlite3_stmtRef _getMessageLength;
	sqlite3_stmtRef _removeMessageInFlight;
	sqlite3_stmtRef _getNextExpireDate;
	sqlite3_stmtRef _getExpiredMessageIDs;
	sqlite3_stmtRef _getBytesInFlight;
	sqlite3_stmtRef _getCountInFlight;
	sqlite3_stmtRef _pushPendingMessage;
	sqlite3_stmtRef _getPendingMessage;
	sqlite3_stmtRef _popPendingMessage;
	sqlite3_stmtRef _countPendingMessages;

}

@property (nonatomic,readonly) NSArray * expiredMessageIDs; 
@property (nonatomic,readonly) unsigned long long lengthOfAllMessagesInFlight; 
@property (nonatomic,readonly) unsigned long long countOfAllMessagesInFlight; 
@property (nonatomic,readonly) NSDate * dateOfNextMessageExpiry; 
@property (nonatomic,readonly) unsigned long long countOfPendingMessages; 
-(void)_prepareStatements;
-(BOOL)_openDBForceRecreate:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 logFacility:(CFStringRef)arg2 ;
-(void)_ensureSchema;
-(void)_withDB:(/*^block*/id)arg1 ;
-(int)_getSchemaVersion;
-(BOOL)_syncTransaction:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithSharedDBForServiceName:(id)arg1 ;
-(void)addMessageWithID:(id)arg1 ofLength:(unsigned long long)arg2 timeoutTime:(double)arg3 ;
-(unsigned long long)removeAndReturnLengthOfMessageWithID:(id)arg1 ;
-(unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)arg1 ;
-(NSArray *)expiredMessageIDs;
-(unsigned long long)lengthOfAllMessagesInFlight;
-(unsigned long long)countOfAllMessagesInFlight;
-(NSDate *)dateOfNextMessageExpiry;
-(void)pushPendingMessageData:(id)arg1 timeToLive:(double)arg2 ;
-(id)popPendingMessage;
-(unsigned long long)countOfPendingMessages;
-(sqlite3Ref)dbRef;
-(void)removeAllMessages;
-(id)init;
-(void)dealloc;
@end

