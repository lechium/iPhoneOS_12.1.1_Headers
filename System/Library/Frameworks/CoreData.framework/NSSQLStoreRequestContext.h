/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore, NSPersistentStoreRequest, NSSQLiteConnection, NSManagedObjectContext, NSError, NSException, NSNumber, NSSQLRowCache, NSQueryGenerationToken;

@interface NSSQLStoreRequestContext : NSObject {

	NSSQLCore* _sqlCore;
	NSPersistentStoreRequest* _persistentStoreRequest;
	NSSQLiteConnection* _connection;
	NSManagedObjectContext* _context;
	NSError* _error;
	NSException* _exception;
	id _result;
	BOOL _useColoredLogging;
	BOOL _useConcurrentFetching;
	BOOL _hasHistoryTracking;
	NSNumber* _transactionID;
	BOOL _storeIsInMemory;

}

@property (nonatomic,readonly) NSSQLCore * sqlCore; 
@property (nonatomic,retain) NSSQLiteConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType; 
@property (nonatomic,readonly) BOOL storeIsInMemory;                                           //@synthesize storeIsInMemory=_storeIsInMemory - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                                       //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest;              //@synthesize persistentStoreRequest=_persistentStoreRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSError * localError;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int debugLogLevel; 
@property (nonatomic,readonly) BOOL useColoredLogging;                                         //@synthesize useColoredLogging=_useColoredLogging - In the implementation block
@property (nonatomic,readonly) BOOL useConcurrentFetching;                                     //@synthesize useConcurrentFetching=_useConcurrentFetching - In the implementation block
@property (nonatomic,retain) id result;                                                        //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id exception;                                                     //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSSQLRowCache * rowCache; 
@property (nonatomic,readonly) BOOL isWritingRequest; 
@property (nonatomic,readonly) NSQueryGenerationToken * queryGenerationToken; 
@property (nonatomic,readonly) BOOL shouldRegisterQueryGeneration; 
-(NSSQLCore *)sqlCore;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(void)executeRequestCore:(id*)arg1 ;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(void)setLocalError:(NSError *)arg1 ;
-(void)setException:(id)arg1 ;
-(void)executePrologue;
-(BOOL)executeRequestUsingConnection:(id)arg1 ;
-(BOOL)useConcurrentFetching;
-(BOOL)hasHistoryTracking;
-(id)newStatementWithSQLString:(id)arg1 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(BOOL)forConflictAnalysis;
-(NSError *)localError;
-(id)exception;
-(id)createNestedObjectFaultContextForObjectWithID:(id)arg1 ;
-(id)notificationSourceObject;
-(NSSQLRowCache *)rowCache;
-(int)debugLogLevel;
-(void)executeEpilogue;
-(BOOL)shouldRegisterQueryGeneration;
-(BOOL)useColoredLogging;
-(BOOL)storeIsInMemory;
-(unsigned long long)requestType;
-(void)setResult:(id)arg1 ;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(NSNumber *)transactionID;
-(void)dealloc;
-(NSManagedObjectContext *)context;
-(id)result;
-(NSSQLiteConnection *)connection;
-(void)setConnection:(NSSQLiteConnection *)arg1 ;
@end

