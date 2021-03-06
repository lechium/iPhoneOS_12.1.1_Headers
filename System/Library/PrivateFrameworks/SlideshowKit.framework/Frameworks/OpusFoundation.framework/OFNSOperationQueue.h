/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPointerArray, NSMutableIndexSet;

@interface OFNSOperationQueue : NSOperationQueue {

	NSObject*<OS_dispatch_queue> _operationsLookupTableQueue;
	NSPointerArray* _operationsLookupTable;
	NSMutableIndexSet* _operationsLookupTableFreeIndices;

}
-(void)_setupOperationsLookupTable;
-(void)_setOperationLookupObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(id)_operationLookupObjectForKey:(unsigned long long)arg1 ;
-(void)addOperation:(id)arg1 context:(id)arg2 identifier:(id)arg3 queuePriority:(long long)arg4 ;
-(void)cancelAllOperationsWithIdentifier:(id)arg1 ;
-(unsigned long long)addOperation:(id)arg1 withPriority:(long long)arg2 ;
-(void)cancelSlideshowOperationWithID:(unsigned long long)arg1 ;
-(void)cancelAllOperationsWithContext:(id)arg1 andIdentifier:(id)arg2 ;
-(void)cancelAllOperationsWithContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

