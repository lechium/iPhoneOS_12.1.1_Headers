/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface OITSUReadWriteQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> mCanEnqueueReaders;
	NSObject*<OS_dispatch_queue> mGlobalQueue;
	NSObject*<OS_dispatch_group> mInFlightReaders;
	NSObject*<OS_dispatch_group> mInFlightWriters;

}
-(void)performSyncRead:(/*^block*/id)arg1 ;
-(void)waitOnInFlightWriters;
-(void)performAsyncWrite:(/*^block*/id)arg1 ;
-(void)performSyncWrite:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
@end

