/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS24* _callBacks;
	CFBasicHashRef _ht;

}
-(void*)getItem:(const void*)arg1 ;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(void)insertItem:(const void*)arg1 ;
-(void)removeAllItems;
-(void)addObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)allObjects;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(void)removeItem:(const void*)arg1 ;
@end
