/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>

@class NSMutableArray, NSString;

@interface SXVideoPlaybackQueue : NSObject <SXVideoPlaybackObserver> {

	NSMutableArray* _queue;

}

@property (nonatomic,readonly) NSMutableArray * queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendItem:(id)arg1 ;
-(id)advance;
-(void)prefetchItemAfterCoordinatorIfPossible:(id)arg1 ;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2 ;
-(void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3 ;
-(void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2 ;
-(void)prependItem:(id)arg1 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(NSMutableArray *)queue;
@end

