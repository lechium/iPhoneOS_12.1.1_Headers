/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QueryPredictionInternal/QueryPredictionInternal-Structs.h>
@class _PASBloomFilter;

@interface _QPQueryFilter : NSObject {

	_PASBloomFilter* _queryBlacklist;

}
+(id)newQueryFilter;
-(PASBloomFilterHashArray*)newStateObject;
-(id)matchesQuery:(id)arg1 withState:(PASBloomFilterHashArray*)arg2 ;
-(id)initWithPath:(id)arg1 ;
@end

