/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {

	NSMutableSet* _operations;
	NSMutableDictionary* _uniqueOperations;

}
-(unsigned long long)countOfOperations;
-(id)uniqueOperationForKey:(id)arg1 ;
-(void)setUniqueOperation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsOperation:(id)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
@end

