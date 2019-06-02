/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEORequestThrottler : NSObject {

	NSMapTable* _throttleMap;
	NSLock* _lock;

}
+(id)sharedThrottler;
-(id)_throttlePolicyForKey:(id)arg1 ;
-(BOOL)allowRequestForKey:(id)arg1 ;
-(unsigned long long)throttleStateLevelForKey:(id)arg1 ;
-(double)throttleStateResetTimeRemainingForKey:(id)arg1 ;
-(id)init;
@end

