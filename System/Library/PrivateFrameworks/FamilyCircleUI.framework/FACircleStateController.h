/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class FARequestConfigurator, UIViewController, NSString;

@interface FACircleStateController : NSObject <DevicePINControllerDelegate> {

	FARequestConfigurator* _requestConfigurator;
	/*^block*/id _performOperationCompletion;
	UIViewController* _presenter;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN;
-(id)initWithPresenter:(id)arg1 ;
-(void)performOperationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_contextRequiresRemoteService:(id)arg1 ;
-(void)_presentViewServiceWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensurePresenterWithCompletion:(/*^block*/id)arg1 ;
-(void)showRestrictionsPINController;
-(void)_restrictionsPINCompletionWithSuccess:(BOOL)arg1 ;
-(UIViewController *)presenter;
-(void)setPresenter:(UIViewController *)arg1 ;
-(id)init;
@end

