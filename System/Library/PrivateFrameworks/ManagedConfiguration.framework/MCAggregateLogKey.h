/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCAggregateLogKey : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long value; 
+(id)bucketSpecificKeys:(unsigned long long)arg1 ;
+(id)keysForAllBuckets;
+(id)debugKeys;
+(unsigned long long)bucket;
+(id)keys;
-(NSString *)name;
-(unsigned long long)value;
@end

