/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@protocol OS_dispatch_semaphore;
@class NSString, NSObject, _SYSharedServiceDB;

@interface NMSPersistentDictionary : NSObject <NSLocking> {

	Class _objectClass;
	NSString* _path;
	CFStringRef _loggingFacility;
	NSObject*<OS_dispatch_semaphore> _lock;
	_SYSharedServiceDB* _sharedDB;
	sqlite3Ref _db;
	sqlite3_stmtRef _fetch;
	sqlite3_stmtRef _insert;
	sqlite3_stmtRef _reset;
	sqlite3_stmtRef _remove;
	sqlite3_stmtRef _removeAll;
	sqlite3_stmtRef _byDate;
	sqlite3_stmtRef _byEnqueueDate;

}
-(void)_prepareStatements;
-(void)_openDBForceRecreate:(BOOL)arg1 ;
-(void)_withDB:(/*^block*/id)arg1 ;
-(void)_ensureDBSchema;
-(unsigned long long)_checkSchemaVersion;
-(id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(CFStringRef)arg3 ;
-(id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2 ;
-(void)resetObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateObjectsSortedByEnqueueDate:(/*^block*/id)arg1 ;
-(id)_dataFromObject:(id)arg1 ;
-(id)_objectFromData:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3 ;
-(void)enumerateObjectsSortedByExpirationDate:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)lock;
-(void)unlock;
@end

