/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSHistoryObjectCache : NSObject {

	unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *> > >* _itemsByDatabaseID;
	unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak> > >* _weakVisitsByDatabaseID;

}
-(void)_clearNilReferences;
-(id)itemForID:(long long)arg1 ;
-(void)setItem:(id)arg1 forID:(long long)arg2 ;
-(void)removeItemWithID:(long long)arg1 ;
-(void)changeItemIDs:(id)arg1 ;
-(void)reserveItemCapacity:(long long)arg1 ;
-(id)visitForID:(long long)arg1 ;
-(void)setVisit:(id)arg1 forID:(long long)arg2 ;
-(void)changeVisitIDs:(id)arg1 ;
-(id)allItems;
-(id)init;
-(void)clear;
@end

