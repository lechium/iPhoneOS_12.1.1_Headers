/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class TSULinkedPointerSetEntry;

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	TSULinkedPointerSetEntry* mHead;
	TSULinkedPointerSetEntry* mTail;

}
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(BOOL)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
-(id)array;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)firstObject;
-(id)objectEnumerator;
-(id)reverseObjectEnumerator;
@end

