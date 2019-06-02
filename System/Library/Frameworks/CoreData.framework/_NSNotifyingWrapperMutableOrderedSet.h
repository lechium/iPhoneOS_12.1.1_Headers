/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSString, NSMutableOrderedSet;

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {

	NSManagedObject* _container;
	NSString* _key;
	NSMutableOrderedSet* _mutableOrderedSet;

}
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 ;
-(id)_orderedObjectsAndKeys;
-(BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id*)arg2 ;
-(void)insertObjects:(id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(id)reversedOrderedSet;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)array;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(id)lastObject;
-(unsigned long long)count;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstObject;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)set;
-(void)minusSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectEnumerator;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)reverseObjectEnumerator;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
@end

