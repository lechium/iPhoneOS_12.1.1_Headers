/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AdCore/AdCore-Structs.h>
@class NSTimer, NSObject;

@interface ADNetworkController : NSObject {

	SCDynamicStoreRef _store;
	NSTimer* _notificationTimer;
	int _networkType;
	SCNetworkReachabilityRef _reachability;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _canReachTheNetwork;
	BOOL _isUpdating;

}

@property (assign) BOOL canReachTheNetwork;              //@synthesize canReachTheNetwork=_canReachTheNetwork - In the implementation block
@property (assign) BOOL isUpdating;                      //@synthesize isUpdating=_isUpdating - In the implementation block
+(id)sharedNetworkController;
-(int)networkType;
-(BOOL)isUpdating;
-(void)setIsUpdating:(BOOL)arg1 ;
-(void)_updateStatus:(BOOL)arg1 ;
-(BOOL)canReachTheNetwork;
-(void)setCanReachTheNetwork:(BOOL)arg1 ;
-(void)_checkForNetworkAndNotify;
-(int)dataIndicatorToConnection:(id)arg1 ;
-(void)_checkForNetwork;
-(void)start;
@end

