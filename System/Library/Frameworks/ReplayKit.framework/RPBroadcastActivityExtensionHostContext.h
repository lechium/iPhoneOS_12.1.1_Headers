/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPBroadcastActivityCommunicationHostProtocol.h>

@class RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext <RPBroadcastActivityCommunicationHostProtocol> {

	RPBroadcastActivityHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastActivityHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(RPBroadcastActivityHostViewController *)arg1 ;
-(RPBroadcastActivityHostViewController *)hostViewController;
-(id)extensionObjectProxy;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 broadcastConfigurationData:(id)arg4 userInfo:(id)arg5 cancelled:(BOOL)arg6 ;
-(oneway void)presentationInfoWithCompletion:(/*^block*/id)arg1 ;
@end
