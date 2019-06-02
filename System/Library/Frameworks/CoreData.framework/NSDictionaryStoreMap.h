/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap {

	NSMutableDictionary* _theMap;

}
+(void)initialize;
-(id)initWithStore:(id)arg1 ;
-(id)initWithStore:(id)arg1 fromPath:(id)arg2 ;
-(id)_nodeFromObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)initWithStore:(id)arg1 fromArchivedData:(id)arg2 ;
-(id)_theDictionary;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(id)handleFetchRequest:(id)arg1 ;
-(id)_archivedData;
-(id)dataForKey:(id)arg1 ;
-(void)saveToPath:(id)arg1 ;
-(void)dealloc;
@end
