/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFOperation.h>
#import <libobjc.A.dylib/WFOtherNetworkViewControllerDelegate.h>
#import <libobjc.A.dylib/SFPasswordSharingServiceDelegate.h>

@class NSString, WFNetworkScanRecord, UIViewController, SFPasswordSharingService;

@interface WFPasswordOperation : WFOperation <WFOtherNetworkViewControllerDelegate, SFPasswordSharingServiceDelegate> {

	BOOL _supportsWiFiPasswordSharing;
	BOOL _shouldReactivatePasswordSharing;
	NSString* _password;
	/*^block*/id _joinHandler;
	/*^block*/id _presentationHandler;
	WFNetworkScanRecord* _network;
	UIViewController* _rootViewController;
	UIViewController* _viewController;
	long long _modalType;
	SFPasswordSharingService* _passwordSharingService;

}

@property (nonatomic,copy) NSString * password;                                              //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                          //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                  //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) long long modalType;                                            //@synthesize modalType=_modalType - In the implementation block
@property (nonatomic,retain) SFPasswordSharingService * passwordSharingService;              //@synthesize passwordSharingService=_passwordSharingService - In the implementation block
@property (assign,nonatomic) BOOL shouldReactivatePasswordSharing;                           //@synthesize shouldReactivatePasswordSharing=_shouldReactivatePasswordSharing - In the implementation block
@property (assign,nonatomic) BOOL supportsWiFiPasswordSharing;                               //@synthesize supportsWiFiPasswordSharing=_supportsWiFiPasswordSharing - In the implementation block
@property (nonatomic,copy) id joinHandler;                                                   //@synthesize joinHandler=_joinHandler - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                           //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appWillEnterForeground:(id)arg1 ;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
-(BOOL)supportsWiFiPasswordSharing;
-(id)initWithNetwork:(id)arg1 rootViewController:(id)arg2 modalType:(long long)arg3 ;
-(void)setSupportsWiFiPasswordSharing:(BOOL)arg1 ;
-(void)setJoinHandler:(id)arg1 ;
-(void)otherNetworkViewControllerUserDidTapJoin:(id)arg1 ;
-(void)otherNetworkViewControllerUserDidTapCancel:(id)arg1 ;
-(BOOL)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2 ;
-(void)otherNetworkViewControllerDidAppear:(id)arg1 ;
-(void)otherNetworkViewControllerWillDisappear:(id)arg1 ;
-(SFPasswordSharingService *)passwordSharingService;
-(void)setPasswordSharingService:(SFPasswordSharingService *)arg1 ;
-(long long)modalType;
-(id)joinHandler;
-(BOOL)shouldReactivatePasswordSharing;
-(void)setShouldReactivatePasswordSharing:(BOOL)arg1 ;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(void)setModalType:(long long)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)appDidBecomeActive:(id)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(UIViewController *)rootViewController;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)start;
-(NSString *)password;
-(void)finish;
@end

