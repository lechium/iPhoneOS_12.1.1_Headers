/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {

	HDSQLiteDatabase* _database;
	NSString* _sql;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(HDSQLiteDatabase *)database;
-(id)initWithSQL:(id)arg1 database:(id)arg2 ;
-(BOOL)performStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 ;
-(BOOL)enumerateStatementWithError:(id*)arg1 bindingHandler:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(id)description;
-(void)finish;
@end

