/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_NCWidgetViewController_Host_IPC.h>

@protocol OS_dispatch_queue;
@class NSObject, WGWidgetHostingViewController;

@interface _WGWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC> {

	BOOL _valid;
	NSObject*<OS_dispatch_queue> _managingHostQueue;
	WGWidgetHostingViewController* _managingHost;

}

@property (assign,setter=_setValid:,getter=_isValid,nonatomic) BOOL valid;                     //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic,__weak) WGWidgetHostingViewController * managingHost;              //@synthesize managingHost=_managingHost - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managingHostQueue;                 //@synthesize managingHostQueue=_managingHostQueue - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(BOOL)_isValid;
-(void)_setValid:(BOOL)arg1 ;
-(void)_setActiveDisplayMode:(long long)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)setManagingHost:(WGWidgetHostingViewController *)arg1 ;
-(void)_performUpdateWithReplyHandler:(/*^block*/id)arg1 ;
-(void)_requestEncodedLayerTreeAtURL:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_updateVisibilityState:(long long)arg1 ;
-(void)_updateVisibleFrame:(CGRect)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)__requestPreferredViewHeight:(double)arg1 ;
-(void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)__setLargestAvailableDisplayMode:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)managingHostQueue;
-(WGWidgetHostingViewController *)managingHost;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)disconnect;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_serviceHasScrollToTopView;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
@end

