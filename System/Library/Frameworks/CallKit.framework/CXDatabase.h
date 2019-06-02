/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CallKit/CallKit-Structs.h>
@class NSURL, NSMutableDictionary;

@interface CXDatabase : NSObject {

	NSURL* _url;
	sqlite3Ref _database;
	NSMutableDictionary* _sqlQueryToStatements;

}

@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sqlQueryToStatements;              //@synthesize sqlQueryToStatements=_sqlQueryToStatements - In the implementation block
@property (nonatomic,readonly) long long lastInsertedRowID; 
@property (nonatomic,readonly) int countOfRecordsModifiedByLastQuery; 
-(long long)lastInsertedRowID;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)enableForeignKeysWithError:(id*)arg1 ;
-(BOOL)setBusyTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(int)countOfRecordsModifiedByLastQuery;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(BOOL)arg4 resultRowHandler:(/*^block*/id)arg5 error:(id*)arg6 ;
-(BOOL)vacuumWithError:(id*)arg1 ;
-(id)namesOfColumnsInTableWithName:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)sqlQueryToStatements;
-(BOOL)executeSQL:(id)arg1 withStatementPreparationBlock:(/*^block*/id)arg2 transient:(BOOL)arg3 error:(id*)arg4 ;
-(id)_statementForSQL:(id)arg1 transient:(BOOL)arg2 error:(id*)arg3 ;
-(void)setSqlQueryToStatements:(NSMutableDictionary *)arg1 ;
-(sqlite3Ref)database;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end

