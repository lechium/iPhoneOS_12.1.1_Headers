/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;
@interface WLKNotificationCenter : NSObject {

	id<WLKNotificationsImpl> _impl;
	id<WLKNotificationCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(id)init;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(id<WLKNotificationCenterDelegate>)delegate;
@end

