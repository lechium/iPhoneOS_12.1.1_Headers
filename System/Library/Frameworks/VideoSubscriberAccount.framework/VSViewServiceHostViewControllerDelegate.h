/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostViewControllerDelegate <NSObject>
@required
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)presentViewServiceHostViewController:(id)arg1;
-(void)dismissViewServiceHostViewController:(id)arg1;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;

@end

