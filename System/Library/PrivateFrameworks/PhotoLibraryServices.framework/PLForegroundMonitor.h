/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;
@class NSMutableSet, NSObject, BKSApplicationStateMonitor;

@interface PLForegroundMonitor : NSObject {

	NSMutableSet* _foregroundBundleIDs;
	NSObject*<OS_dispatch_queue> _applicationStateMonitorQueue;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	id<PLForegroundMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLForegroundMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1 ;
-(void)_locked_applicationDidMoveToForeground:(id)arg1 ;
-(void)_locked_applicationDidMoveToBackground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PLForegroundMonitorDelegate>)arg1 ;
-(id<PLForegroundMonitorDelegate>)delegate;
@end
