/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary, NSSet;

@interface _UIStatusBarDataAggregator : NSObject {

	/*^block*/id _updateBlock;
	NSCountedSet* _delayedKeys;
	NSMutableDictionary* _pendingUpdates;
	NSMutableDictionary* _coalescedKeys;
	NSMutableDictionary* _coalescedTimers;

}

@property (nonatomic,copy) id updateBlock;                                       //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,retain) NSCountedSet * delayedKeys;                         //@synthesize delayedKeys=_delayedKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingUpdates;               //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coalescedKeys;                //@synthesize coalescedKeys=_coalescedKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coalescedTimers;              //@synthesize coalescedTimers=_coalescedTimers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * delayedEntryKeys; 
@property (nonatomic,copy,readonly) NSSet * coalescedEntryKeys; 
+(void)initialize;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(NSSet *)delayedEntryKeys;
-(void)updateWithData:(id)arg1 ;
-(void)beginDelayingUpdatesForEntryKeys:(id)arg1 ;
-(void)endDelayingUpdatesForEntryKeys:(id)arg1 ;
-(void)setDelayedKeys:(NSCountedSet *)arg1 ;
-(void)setPendingUpdates:(NSMutableDictionary *)arg1 ;
-(void)setCoalescedKeys:(NSMutableDictionary *)arg1 ;
-(void)setCoalescedTimers:(NSMutableDictionary *)arg1 ;
-(void)_updateForDelayedKeysWithData:(id)arg1 ;
-(void)_updateForCoalescedKeysWithData:(id)arg1 ;
-(id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2 ;
-(void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSSet *)coalescedEntryKeys;
-(void)_coalescedUpdateForEntryKeys:(id)arg1 ;
-(void)endCoalescingUpdatesForEntryKeys:(id)arg1 ;
-(NSCountedSet *)delayedKeys;
-(NSMutableDictionary *)pendingUpdates;
-(NSMutableDictionary *)coalescedKeys;
-(NSMutableDictionary *)coalescedTimers;
@end
