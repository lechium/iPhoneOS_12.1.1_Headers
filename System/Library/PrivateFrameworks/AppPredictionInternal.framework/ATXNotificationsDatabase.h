/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, _PASSqliteDatabase;

@interface ATXNotificationsDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	_PASSqliteDatabase* _db;

}

@property (nonatomic,readonly) _PASSqliteDatabase * db;              //@synthesize db=_db - In the implementation block
-(id)createSchema;
-(void)migrate;
-(void)startDatabase;
-(void)_disconnectFromDb;
-(BOOL)configureDatabase;
-(long long)currentSchemaVersion;
-(void)initializeSchemaVersion:(long long)arg1 ;
-(long long)countRowsOfTable:(id)arg1 ;
-(_PASSqliteDatabase *)db;
-(id)init;
@end
