/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecureChannel/SecureChannelService.h>

@protocol SecureChannelService;
@class NSXPCConnection, NSObject;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {

	NSXPCConnection* _connectionToService;
	NSObject*<SecureChannelService> _remoteObject;

}
+(id)sharedInstance;
-(void)callToActionForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)runApproverFlowForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
@end

