/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDStats : NSObject
+(id)hardwareModel;
+(id)familyNames;
+(id)sharedInstance;
-(void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2 ;
-(void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2 ;
-(void)addToDictionary:(id)arg1 perfMetric:(id)arg2 ;
-(id)init;
-(id)dictionary;
-(void)dealloc;
-(id)string;
@end

