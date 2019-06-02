/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHTTPURLResponse, AKServerRequestConfiguration, AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, NSURL;

@interface AKAppleIDServerUIContextController : NSObject {

	/*^block*/id _serverUICompletion;
	NSHTTPURLResponse* _latestReadResponse;
	AKServerRequestConfiguration* _configuration;
	AKAppleIDServerResourceLoadDelegate* _serverUIDelegate;
	AKAppleIDServerUIDataHarvester* _serverDataHarvester;
	NSURL* _initiatingURL;

}

@property (nonatomic,readonly) AKAppleIDServerResourceLoadDelegate * serverUIDelegate;              //@synthesize serverUIDelegate=_serverUIDelegate - In the implementation block
@property (nonatomic,readonly) AKAppleIDServerUIDataHarvester * serverDataHarvester;                //@synthesize serverDataHarvester=_serverDataHarvester - In the implementation block
@property (nonatomic,copy,readonly) NSURL * initiatingURL;                                          //@synthesize initiatingURL=_initiatingURL - In the implementation block
-(void)signRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)completeWithFinalResponse:(id)arg1 ;
-(id)_headerValueFromType:(unsigned long long)arg1 ;
-(void)_completeWithResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3 ;
-(void)tearDownContext;
-(id)initWithRequestConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)handleAuthKitActionAttribute:(id)arg1 ;
-(void)processResponse:(id)arg1 ;
-(void)completeWithError:(id)arg1 additionalData:(id)arg2 ;
-(AKAppleIDServerResourceLoadDelegate *)serverUIDelegate;
-(NSURL *)initiatingURL;
-(void)completeWithError:(id)arg1 ;
-(AKAppleIDServerUIDataHarvester *)serverDataHarvester;
@end

