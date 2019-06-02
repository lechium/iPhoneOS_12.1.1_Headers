/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSMutableArray, NSObject;

@interface PFVideoExportRangeCoordinator : NSObject {

	BOOL _cancelled;
	NSMutableArray* _waitingCallers;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSRange _availableRange;

}

@property (assign) NSRange availableRange;                               //@synthesize availableRange=_availableRange - In the implementation block
@property (retain) NSMutableArray * waitingCallers;                      //@synthesize waitingCallers=_waitingCallers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (assign) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
-(void)setAvailableRange:(NSRange)arg1 ;
-(void)updateAvailableRange:(NSRange)arg1 ;
-(NSRange)availableRange;
-(NSMutableArray *)waitingCallers;
-(void)setWaitingCallers:(NSMutableArray *)arg1 ;
-(BOOL)waitForAvailabilityOfRange:(NSRange)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)cancel;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

