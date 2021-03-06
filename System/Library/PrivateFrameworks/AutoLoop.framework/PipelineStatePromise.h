/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMapTable, NSObject;

@interface PipelineStatePromise : NSObject {

	NSMapTable* pipelineStates;
	NSMapTable* errors;
	NSObject*<OS_dispatch_group> group;
	AB initialization_completed;

}
-(BOOL)timesOutWaitingForPipelineStates:(double)arg1 ;
-(id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3 ;
-(BOOL)groupWasSuccessful;
-(id)pipelineStateForFunction:(id)arg1 ;
-(id)errorForFunction:(id)arg1 ;
@end

