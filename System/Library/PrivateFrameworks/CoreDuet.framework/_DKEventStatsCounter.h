/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 ;
-(void)incrementCountByNumber:(unsigned long long)arg1 ;
-(void)incrementCount;
-(_DKEventStatsCounterInternal *)internal;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(unsigned long long)count;
-(id)eventName;
@end

