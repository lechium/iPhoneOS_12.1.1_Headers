/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary, NSArray, NSSet, FCFeedEdition;

@interface FCFeedRefreshSession : NSObject {

	BOOL _reachedEnd;
	BOOL _isOffline;
	BOOL _isNewEdition;
	NSString* _identifier;
	NSDate* _refreshDate;
	NSDate* _modificationDate;
	NSDictionary* _cursorsByGroupEmitterID;
	NSArray* _pendingGroups;
	NSSet* _activeGroupEmitterIDs;
	FCFeedEdition* _lastCompletedEdition;

}

@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;                                     //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cursorsByGroupEmitterID;              //@synthesize cursorsByGroupEmitterID=_cursorsByGroupEmitterID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingGroups;                             //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeGroupEmitterIDs;                       //@synthesize activeGroupEmitterIDs=_activeGroupEmitterIDs - In the implementation block
@property (nonatomic,readonly) FCFeedEdition * lastCompletedEdition;                     //@synthesize lastCompletedEdition=_lastCompletedEdition - In the implementation block
@property (nonatomic,readonly) BOOL reachedEnd;                                          //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (nonatomic,readonly) BOOL isOffline;                                           //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,readonly) BOOL isNewEdition;                                        //@synthesize isNewEdition=_isNewEdition - In the implementation block
-(BOOL)isOffline;
-(BOOL)isNewEdition;
-(NSSet *)activeGroupEmitterIDs;
-(id)copyWithAllGroupEmittersExhausted;
-(NSDate *)refreshDate;
-(FCFeedEdition *)lastCompletedEdition;
-(NSDictionary *)cursorsByGroupEmitterID;
-(id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(BOOL)arg8 isOffline:(BOOL)arg9 ;
-(id)copyByRemovingPendingGroupIdenticalTo:(id)arg1 ;
-(id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(BOOL)arg3 ;
-(id)currentEditionFromPaginator:(id)arg1 ;
-(id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(BOOL)arg6 isOffline:(BOOL)arg7 ;
-(id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2 ;
-(id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2 ;
-(id)copyByRemovingPendingGroupsAtIndexes:(id)arg1 ;
-(BOOL)reachedEnd;
-(NSArray *)pendingGroups;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)modificationDate;
@end
