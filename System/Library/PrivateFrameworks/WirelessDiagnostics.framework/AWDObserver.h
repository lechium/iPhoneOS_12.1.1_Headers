/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AWDObserverDelegate;
#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDObserver : NSObject {

	shared_ptr<AWDObserverConnection>* observerConnection;
	id<AWDObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AWDObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)setConfiguration:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<AWDObserverDelegate>)arg1 ;
-(id<AWDObserverDelegate>)delegate;
@end

