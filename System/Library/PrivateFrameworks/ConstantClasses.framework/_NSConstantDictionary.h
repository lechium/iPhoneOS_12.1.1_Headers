/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConstantClasses/ConstantClasses-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
+(id)alloc;
+(void)load;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)allValues;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(id)objectEnumerator;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)allKeys;
-(id)keyEnumerator;
-(unsigned long long)capacity;
@end

