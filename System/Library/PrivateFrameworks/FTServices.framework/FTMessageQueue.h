/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FTMessageQueueDelegate;
@class NSMutableArray, IDSBaseMessage, NSArray;

@interface FTMessageQueue : NSObject {

	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	id<FTMessageQueueDelegate> _delegate;

}

@property (retain) NSMutableArray * _queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSMutableArray * _addDates;                       //@synthesize addDates=_addDates - In the implementation block
@property (readonly) IDSBaseMessage * topMessage; 
@property (readonly) long long count; 
@property (readonly) NSArray * messages; 
@property (__weak) id<FTMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)set_queue:(NSMutableArray *)arg1 ;
-(IDSBaseMessage *)topMessage;
-(void)_timeoutHit;
-(void)_clearTimeout;
-(void)_setTimeout;
-(id)dequeueTopMessage;
-(BOOL)addMessageAtHeadOfQueue:(id)arg1 ;
-(BOOL)removeMessage:(id)arg1 ;
-(NSMutableArray *)_addDates;
-(void)set_addDates:(NSMutableArray *)arg1 ;
-(NSArray *)messages;
-(void)removeAllMessages;
-(id)init;
-(long long)count;
-(void)setDelegate:(id<FTMessageQueueDelegate>)arg1 ;
-(id<FTMessageQueueDelegate>)delegate;
-(BOOL)addMessage:(id)arg1 ;
-(NSMutableArray *)_queue;
@end

