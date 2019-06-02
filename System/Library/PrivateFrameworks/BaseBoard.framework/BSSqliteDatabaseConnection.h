/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSCache, NSHashTable;

@interface BSSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;
	NSHashTable* _queue_observers;

}
+(int)_sqliteOpenFlagsForDataProtectionClass:(unsigned long long)arg1 ;
-(void)performSyncWithDatabase:(/*^block*/id)arg1 ;
-(id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(id)_sqliteErrorForResult:(int)arg1 errorMessage:(id)arg2 ;
-(void)_queue_close;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)prepareStatement:(id)arg1 ;
-(void)_closeConnection;
-(id)lastErrorMessage;
-(id)initWithInMemoryDatabase;
-(id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(BOOL)truncateDatabaseAndReturnError:(out id*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)close;
@end

