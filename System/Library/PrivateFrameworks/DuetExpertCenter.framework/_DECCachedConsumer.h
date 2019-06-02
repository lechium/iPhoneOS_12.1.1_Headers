/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECConsumer.h>

@class _DECPredictionStoreReader;

@interface _DECCachedConsumer : _DECConsumer {

	_DECPredictionStoreReader* _store;
	const char* _atxCachePath;

}
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 storeReader:(id)arg3 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 storeReader:(id)arg3 atxCachePath:(const char*)arg4 ;
-(id)cachedPredictionsWithLimit:(unsigned long long)arg1 error:(id*)arg2 ;
@end
