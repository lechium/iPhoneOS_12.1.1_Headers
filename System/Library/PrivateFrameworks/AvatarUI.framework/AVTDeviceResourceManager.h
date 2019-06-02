/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTDeviceResourceConsumerDelegate.h>

@protocol AVTUILogger, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate> {

	NSMutableArray* _consumers;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _stateLock;

}

@property (nonatomic,readonly) NSMutableArray * consumers;                          //@synthesize consumers=_consumers - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;              //@synthesize stateLock=_stateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(void)consumer:(id)arg1 willConsumeRenderingResourceForEstimatedDuration:(double)arg2 ;
-(id)initWithLogger:(id)arg1 lockProvider:(/*^block*/id)arg2 ;
-(NSMutableArray *)consumers;
-(void)performWorkWithConsumers:(/*^block*/id)arg1 ;
@end

