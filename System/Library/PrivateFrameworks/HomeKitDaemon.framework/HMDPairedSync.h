/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>

@protocol HMDPairedSyncDelegate, OS_dispatch_queue;
@class PSYSyncCoordinator, NSObject, NSString;

@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate> {

	id<HMDPairedSyncDelegate> _delegate;
	PSYSyncCoordinator* _coordinator;
	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _currentOperationCount;

}

@property (__weak,readonly) id<HMDPairedSyncDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PSYSyncCoordinator * coordinator;                    //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned long long currentOperationCount;              //@synthesize currentOperationCount=_currentOperationCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(unsigned long long)currentOperationCount;
-(void)setCurrentOperationCount:(unsigned long long)arg1 ;
-(id)restrictionAsString:(unsigned long long)arg1 ;
-(void)_callStartSync;
-(void)needToSync;
-(void)syncComplete;
-(void)syncPartiallyComplete;
-(id<HMDPairedSyncDelegate>)delegate;
-(PSYSyncCoordinator *)coordinator;
@end

