/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSIndexSet.h>

@interface NSMutableIndexSet : NSIndexSet {

	void* _reserved;

}
-(void)_insertRange:(NSRange)arg1 inArrayAtIndex:(unsigned long long)arg2 ;
-(void)_ensureRangeCapacity:(unsigned long long)arg1 ;
-(void)_removeRangeInArrayAtIndex:(unsigned long long)arg1 ;
-(void)removeIndexesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)_replaceRangeInArrayAtIndex:(unsigned long long)arg1 withRange:(NSRange)arg2 ;
-(void)_addRangeToArray:(NSRange)arg1 ;
-(void)_mergeOverlappingRangesStartingAtIndex:(unsigned long long)arg1 ;
-(void)_incrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(void)_removeAndDecrementBy:(unsigned long long)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(void)addIndexesFromIndexSet:(id)arg1 ;
-(void)addIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)removeIndexesFromIndexSet:(id)arg1 ;
-(void)removeIndexesInRange:(NSRange)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)removeIndexesPassingTest:(/*^block*/id)arg1 ;
-(void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2 ;
-(void)addIndex:(unsigned long long)arg1 ;
-(void)removeIndexesInRange:(NSRange)arg1 ;
-(void)removeAllIndexes;
-(void)addIndexes:(id)arg1 ;
-(void)removeIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)removeIndexes:(id)arg1 ;
-(void)addIndexesInRange:(NSRange)arg1 ;
@end

