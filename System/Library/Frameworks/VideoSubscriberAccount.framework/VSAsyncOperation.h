/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface VSAsyncOperation : NSOperation {

	int _state;

}
-(BOOL)isAsynchronous;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end

