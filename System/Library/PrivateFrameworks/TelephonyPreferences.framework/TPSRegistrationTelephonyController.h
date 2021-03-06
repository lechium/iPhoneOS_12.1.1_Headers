/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSTelephonyController.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@class NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, NSString;

@interface TPSRegistrationTelephonyController : TPSTelephonyController <CoreTelephonyClientRegistrationDelegate> {

	NSArray* _networks;
	CTNetworkSelectionInfo* _networkSelectionInfo;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,copy) NSArray * networks;                                                     //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) CTNetworkSelectionInfo * networkSelectionInfo;                        //@synthesize networkSelectionInfo=_networkSelectionInfo - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)networkListAvailable:(id)arg1 list:(id)arg2 ;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(void)setNetworks:(NSArray *)arg1 ;
-(NSArray *)networks;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)performDelegateSelector:(SEL)arg1 ;
-(id)copyNetworkSelectionInfo;
-(void)automaticallySelectNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)selectNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNetworkListWithCompletion:(/*^block*/id)arg1 ;
-(void)setNetworkSelectionInfo:(CTNetworkSelectionInfo *)arg1 ;
-(CTNetworkSelectionInfo *)networkSelectionInfo;
-(void)networksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)automaticallySelectNetwork;
-(void)selectNetwork:(id)arg1 ;
-(void)fetchNetworkList;
-(id)init;
@end

