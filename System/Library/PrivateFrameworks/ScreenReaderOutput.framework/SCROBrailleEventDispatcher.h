/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {

	NSLock* _queueLock;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _queueSource;
	NSMutableArray* _queue;
	NSMutableArray* _brailleEventQueue;
	id _target;
	BOOL _isValid;

}
-(void)_processQueue;
-(void)enqueueEvent:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 ;
-(void)start;
-(BOOL)isValid;
@end
