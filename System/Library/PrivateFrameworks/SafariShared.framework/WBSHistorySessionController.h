/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistorySessions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray, WBSHistorySessionIntervalCache;

@interface WBSHistorySessionController : NSObject <WBSHistorySessions> {

	NSObject*<OS_dispatch_queue> _sessionCacheAccessQueue;
	NSMutableDictionary* _itemsBySession;
	NSArray* _orderedSessions;
	WBSHistorySessionIntervalCache* _intervalCache;

}

@property (nonatomic,copy,readonly) NSArray * orderedSessions; 
@property (nonatomic,readonly) unsigned long long numberOfSessions; 
+(id)sharedSessionController;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(NSArray *)orderedSessions;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfItemsVisitedInSession:(id)arg1 ;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)itemsLastVisitedInSession:(id)arg1 ;
-(unsigned long long)numberOfSessions;
-(void)_historyItemsWereAdded:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)_loadSessionCache;
-(BOOL)_getKey:(id*)arg1 forDate:(double)arg2 ;
-(id)_orderedSessionKeys;
-(unsigned long long)_insertItem:(id)arg1 withSessionKey:(id)arg2 ;
-(void)_addItemsToSessionCache:(id)arg1 shouldPostChangeNotification:(BOOL)arg2 ;
-(void)_removeItemsFromSessionCache:(id)arg1 ;
-(void)_clearSessionCache;
-(void)_dispatchHistorySessionsDidChangeNotification;
-(id)sessionForItem:(id)arg1 ;
-(void)_requestSessionKeyForDate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end
