/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _reserved : 14;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) BOOL fault; 
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(Class)classForArchiver;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3 ;
-(void)willRead;
-(void)turnIntoFault;
-(void)willReadWithContents:(id)arg1 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)_shouldProcessKVOChange;
-(BOOL)_isIdenticalFault:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(NSPropertyDescription *)relationship;
-(BOOL)isFault;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(oneway void)release;
-(id)allObjects;
-(id)retain;
-(unsigned long long)retainCount;
-(id)description;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)anyObject;
-(void)minusSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)unionSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(NSManagedObject *)source;
-(BOOL)isEqualToSet:(id)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)member:(id)arg1 ;
@end

