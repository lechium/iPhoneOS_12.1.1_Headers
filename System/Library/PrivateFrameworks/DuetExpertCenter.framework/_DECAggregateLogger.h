/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {

	NSMutableDictionary* _batchScalars;

}
+(void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2 ;
+(void)logIncrementKey:(id)arg1 ;
+(double)logKey:(id)arg1 blockTiming:(/*^block*/id)arg2 ;
+(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
+(void)logKey:(id)arg1 distValue:(double)arg2 ;
+(void)logWithCallback:(/*^block*/id)arg1 ;
-(void)logIncrementKey:(id)arg1 ;
-(id)initCallbackInstance;
-(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(void)logKey:(id)arg1 distValue:(double)arg2 ;
-(void)flush;
@end

