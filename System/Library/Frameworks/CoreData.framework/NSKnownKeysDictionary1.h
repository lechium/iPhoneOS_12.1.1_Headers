/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)initForKeys:(id)arg1 ;
+(id)initWithSearchStrategy:(id)arg1 ;
+(id)alloc;
+(id)init;
+(BOOL)supportsSecureCoding;
+(id)initWithCoder:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)initWithCapacity:(unsigned long long)arg1 ;
+(id)initWithDictionary:(id)arg1 ;
+(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(Class)classForArchiver;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(const id*)knownKeyValuesPointer;
-(unsigned long long)_valueCountByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)_recount;
-(unsigned long long)_countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 forKeys:(BOOL)arg4 ;
-(void)getKeys:(id*)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mapping;
-(void)getObjects:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allValues;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)allKeys;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setValues:(id*)arg1 ;
-(Class)classForCoder;
-(const id*)values;
@end

