/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_semaphore, HDSQLiteDatabasePoolDelegate;
@class NSCondition, NSMutableSet, NSMapTable, NSObject, NSString;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {

	NSCondition* _cacheCondition;
	NSMutableSet* _cache;
	unsigned long long _cacheGeneration;
	long long _cacheSize;
	long long _concurrentReaderLimit;
	Ai _count;
	os_unfair_lock_s _checkoutLock;
	NSMapTable* _checkoutMap;
	NSObject*<OS_dispatch_semaphore> _readerSemaphore;
	NSObject*<OS_dispatch_semaphore> _writerSemaphore;
	id<HDSQLiteDatabasePoolDelegate> _delegate;

}

@property (__weak) id<HDSQLiteDatabasePoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long count; 
@property (readonly) long long cacheSize; 
@property (readonly) long long concurrentReaderLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diagnosticDescription;
-(id)initWithConcurrentReaderLimit:(long long)arg1 ;
-(id)checkOutDatabaseWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)checkInDatabase:(id)arg1 flushImmediately:(BOOL)arg2 ;
-(long long)cacheSize;
-(id)_semaphoreForCheckOutOptions:(unsigned long long)arg1 ;
-(void)_addDatabaseWrapperToCheckoutMap:(id)arg1 ;
-(id)_removeDatabaseFromCheckoutMap:(id)arg1 ;
-(void)_didFlushDatabases:(id)arg1 ;
-(long long)concurrentReaderLimit;
-(void)dealloc;
-(long long)count;
-(void)setDelegate:(id<HDSQLiteDatabasePoolDelegate>)arg1 ;
-(id<HDSQLiteDatabasePoolDelegate>)delegate;
-(void)flush;
@end

