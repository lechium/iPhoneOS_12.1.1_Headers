/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _regionSupportsPaymentRegistrationInitialized;
	BOOL _regionSupportsPaymentRegistration;

}
+(id)sharedCapabilities;
-(BOOL)supportsApplePay;
-(void)getRegionSupportsPaymentRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isAppleTV;
-(void)localeChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

