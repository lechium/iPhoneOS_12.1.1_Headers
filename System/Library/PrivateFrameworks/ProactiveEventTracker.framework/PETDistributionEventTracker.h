/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETDistributionEventTracker : PETEventTracker {

	NSString* _event;

}

@property (nonatomic,readonly) NSString * event;              //@synthesize event=_event - In the implementation block
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 ;
-(void)trackEventWithPropertyValues:(id)arg1 value:(double)arg2 ;
-(id)initWithFeatureId:(id)arg1 event:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4 ;
-(NSString *)event;
@end

