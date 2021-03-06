/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _DECPredictionCacheResult : NSObject {

	unsigned long long _hits;
	unsigned long long _misses;
	NSDictionary* _predictions;

}

@property (nonatomic,readonly) unsigned long long hits;                 //@synthesize hits=_hits - In the implementation block
@property (nonatomic,readonly) unsigned long long misses;               //@synthesize misses=_misses - In the implementation block
@property (nonatomic,readonly) NSDictionary * predictions;              //@synthesize predictions=_predictions - In the implementation block
-(id)initWithPredictions:(id)arg1 hits:(unsigned long long)arg2 misses:(unsigned long long)arg3 ;
-(unsigned long long)hits;
-(unsigned long long)misses;
-(id)description;
-(NSDictionary *)predictions;
@end

