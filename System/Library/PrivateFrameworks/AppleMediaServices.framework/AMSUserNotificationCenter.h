/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSUserNotificationCenterDelegate, AMSUserNotificationStrategy;
@class NSString, NSArray;

@interface AMSUserNotificationCenter : NSObject {

	BOOL _runningInDaemon;
	NSString* _bundleIdentifier;
	id<AMSUserNotificationCenterDelegate> _delegate;
	id<AMSUserNotificationStrategy> _strategy;

}

@property (nonatomic,readonly) id<AMSUserNotificationStrategy> strategy;                         //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,readonly) NSArray * activeNotifications; 
@property (nonatomic,readonly) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUserNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL runningInDaemon;                                             //@synthesize runningInDaemon=_runningInDaemon - In the implementation block
+(Class)_determineStrategyForBundleId:(id)arg1 ;
+(id)currentCenter;
-(id<AMSUserNotificationStrategy>)strategy;
-(id)removeNotification:(id)arg1 ;
-(NSArray *)activeNotifications;
-(id)initWithBundleIdentifier:(id)arg1 runningInDaemon:(BOOL)arg2 ;
-(BOOL)runningInDaemon;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<AMSUserNotificationCenterDelegate>)arg1 ;
-(id<AMSUserNotificationCenterDelegate>)delegate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)postNotification:(id)arg1 ;
@end

