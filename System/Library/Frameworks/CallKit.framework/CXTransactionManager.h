/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CXTransactionManagerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface CXTransactionManager : NSObject {

	id<CXTransactionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _outstandingTransactionGroups;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTransactionGroups;                   //@synthesize outstandingTransactionGroups=_outstandingTransactionGroups - In the implementation block
@property (assign,nonatomic,__weak) id<CXTransactionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addOutstandingTransactionGroup:(id)arg1 ;
-(void)failOutstandingActionsForCallWithUUID:(id)arg1 ;
-(void)updateWithCompletedAction:(id)arg1 ;
-(NSMutableSet *)outstandingTransactionGroups;
-(void)_setUpTimeoutForAction:(id)arg1 callSource:(id)arg2 ;
-(void)_timeoutReachedForAction:(id)arg1 callSource:(id)arg2 ;
-(void)setOutstandingTransactionGroups:(NSMutableSet *)arg1 ;
-(id)init;
-(id)description;
-(void)setDelegate:(id<CXTransactionManagerDelegate>)arg1 ;
-(id<CXTransactionManagerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

