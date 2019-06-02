/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDBCache.h>

@interface CLSPublicEventCache : CLSDBCache
-(BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)arg1 forTimeLocationTuples:(id)arg2 ;
-(id)publicEventsForTimeLocationTuple:(id)arg1 ;
-(void)_updateManagedEvent:(id)arg1 withEvent:(id)arg2 inContext:(id)arg3 ;
-(id)publicEventFromManagedObject:(id)arg1 ;
-(id)predicateForTimeLocationTuple:(id)arg1 ;
-(unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)arg1 ;
-(BOOL)hasTimeLocationTuple:(id)arg1 ;
-(id)dataModelName;
-(id)publicEventsForMuid:(unsigned long long)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)init;
@end

