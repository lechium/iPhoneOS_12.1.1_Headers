/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastActivityCommunicationHostProtocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol> {

	RPBroadcastActivityViewController* _broadcastActivityViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastActivityViewController * broadcastActivityViewController;              //@synthesize broadcastActivityViewController=_broadcastActivityViewController - In the implementation block
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(CGRect)popoverControllerSourceRect;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 broadcastConfigurationData:(id)arg4 userInfo:(id)arg5 cancelled:(BOOL)arg6 ;
-(oneway void)presentationInfoWithCompletion:(/*^block*/id)arg1 ;
-(RPBroadcastActivityViewController *)broadcastActivityViewController;
-(void)setBroadcastActivityViewController:(RPBroadcastActivityViewController *)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)popoverArrowDirection;
-(long long)modalPresentationStyle;
@end

