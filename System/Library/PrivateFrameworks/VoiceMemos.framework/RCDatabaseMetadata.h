/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStore, NSPersistentStoreCoordinator, NSMutableDictionary;

@interface RCDatabaseMetadata : NSObject {

	NSPersistentStore* _store;
	NSPersistentStoreCoordinator* _coordinator;
	NSMutableDictionary* _metadata;
	BOOL _dirty;

}

@property (readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(id)initWithPersistentStore:(id)arg1 ;
-(void)save;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)dirty;
@end
