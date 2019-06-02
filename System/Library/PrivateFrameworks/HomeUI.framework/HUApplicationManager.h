/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUStatusBarVisibilityHandling;
@class NSHashTable;

@interface HUApplicationManager : NSObject {

	BOOL _wasStatusBarVisible;
	id<HUStatusBarVisibilityHandling> _statusBarVisibilityHandler;
	NSHashTable* _statusBarHidingRequesters;
	NSHashTable* _networkActivityIndicatorRequesters;
	NSHashTable* _idleTimerDisabledRequesters;

}

@property (nonatomic,retain) NSHashTable * statusBarHidingRequesters;                                   //@synthesize statusBarHidingRequesters=_statusBarHidingRequesters - In the implementation block
@property (nonatomic,retain) NSHashTable * networkActivityIndicatorRequesters;                          //@synthesize networkActivityIndicatorRequesters=_networkActivityIndicatorRequesters - In the implementation block
@property (nonatomic,retain) NSHashTable * idleTimerDisabledRequesters;                                 //@synthesize idleTimerDisabledRequesters=_idleTimerDisabledRequesters - In the implementation block
@property (assign,nonatomic) BOOL wasStatusBarVisible;                                                  //@synthesize wasStatusBarVisible=_wasStatusBarVisible - In the implementation block
@property (nonatomic,retain) id<HUStatusBarVisibilityHandling> statusBarVisibilityHandler;              //@synthesize statusBarVisibilityHandler=_statusBarVisibilityHandler - In the implementation block
@property (getter=isStatusBarHidden,nonatomic,readonly) BOOL statusBarHidden; 
+(id)sharedInstance;
-(void)setIdleTimerDisabled:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)setNetworkActivityIndicatorRequesters:(NSHashTable *)arg1 ;
-(void)setStatusBarHidingRequesters:(NSHashTable *)arg1 ;
-(void)setIdleTimerDisabledRequesters:(NSHashTable *)arg1 ;
-(void)setStatusBarVisibilityHandler:(id<HUStatusBarVisibilityHandling>)arg1 ;
-(id<HUStatusBarVisibilityHandling>)statusBarVisibilityHandler;
-(void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3 ;
-(NSHashTable *)statusBarHidingRequesters;
-(void)setWasStatusBarVisible:(BOOL)arg1 ;
-(BOOL)wasStatusBarVisible;
-(NSHashTable *)networkActivityIndicatorRequesters;
-(NSHashTable *)idleTimerDisabledRequesters;
-(void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 forRequester:(id)arg2 ;
-(id)init;
-(BOOL)isStatusBarHidden;
-(BOOL)isIdleTimerDisabled;
-(BOOL)isNetworkActivityIndicatorVisible;
@end

