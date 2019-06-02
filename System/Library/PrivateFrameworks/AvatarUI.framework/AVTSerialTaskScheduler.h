/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTTaskScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler> {

	NSMutableArray* _priorityTasks;
	NSMutableArray* _backlogTasks;
	NSObject*<OS_dispatch_queue> _stateLock;
	long long _order;

}

@property (nonatomic,readonly) NSMutableArray * priorityTasks;                      //@synthesize priorityTasks=_priorityTasks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * backlogTasks;                       //@synthesize backlogTasks=_backlogTasks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;              //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) long long order;                                     //@synthesize order=_order - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)nextTaskToRunForPriorityTasks:(NSMutableArray*)arg1 backlogTasks:(NSMutableArray*)arg2 order:(long long)arg3 ;
+(id)lifoSchedulerWithEnvironment:(id)arg1 ;
+(id)fifoSchedulerWithEnvironment:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)cancelAllTasks;
-(void)scheduleTask:(/*^block*/id)arg1 ;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)lowerTaskPriority:(/*^block*/id)arg1 ;
-(void)performStateWork:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(id)arg1 order:(long long)arg2 ;
-(NSMutableArray *)priorityTasks;
-(NSMutableArray *)backlogTasks;
-(void)startTask:(/*^block*/id)arg1 ;
-(void)didCompleteTask:(/*^block*/id)arg1 ;
-(long long)order;
@end
