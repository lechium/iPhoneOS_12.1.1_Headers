/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostProtocol <NSObject>
@required
-(void)_presentViewController;
-(void)_didCancelRequest:(id)arg1;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
-(void)_request:(id)arg1 didFailWithError:(id)arg2;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2;
-(void)_dismissViewController;

@end

