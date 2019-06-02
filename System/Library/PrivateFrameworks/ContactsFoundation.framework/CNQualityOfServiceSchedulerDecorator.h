/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface CNQualityOfServiceSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	unsigned long long _qualityOfService;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) unsigned long long qualityOfService;              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
-(id)initWithScheduler:(id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(unsigned long long)qualityOfService;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id<CNScheduler>)scheduler;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 ;
@end

