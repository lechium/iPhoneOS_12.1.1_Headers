/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNotificationHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface PPEventKitNotificationHandler : PPNotificationHandler {

	atomic_flag _isFiring;
	atomic_flag _hasWaiter;
	NSMutableSet* _events;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)initWithName:(id)arg1 waitTime:(unsigned)arg2 ;
-(void)_clearFlags;
-(void)_executeBlocksWithEvents:(id)arg1 ;
-(void)_pushEvents:(id)arg1 ;
-(id)_popEvents;
-(void)fireWithEvents:(id)arg1 ;
-(id)description;
@end

