/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSConcreteMapTable : NSMapTable {

	NSSlice* keys;
	NSSlice* values;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long keyOptions;
	unsigned long long valueOptions;
	unsigned long long mutations;
	os_unfair_lock_s growLock;
	BOOL shouldRehash;

}
+(BOOL)supportsSecureCoding;
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)rehash;
-(unsigned long long)__capacity;
-(id)keyPointerFunctions;
-(id)valuePointerFunctions;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(unsigned long long)realCount;
-(void)_setBackingStore;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(BOOL)arg4 ;
-(void)grow;
-(void)checkCount:(const char*)arg1 ;
-(BOOL)containsKeys:(const void*)arg1 values:(const void*)arg2 count:(unsigned long long)arg3 ;
-(id)dump;
-(void)removeAllItems;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allValues;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectEnumerator;
-(id)allKeys;
-(id)keyEnumerator;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(Class)classForCoder;
@end

