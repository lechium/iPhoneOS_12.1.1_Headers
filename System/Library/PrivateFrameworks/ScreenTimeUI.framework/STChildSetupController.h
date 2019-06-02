/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, STRootViewModelCoordinator, STIntroductionController;

@interface STChildSetupController : NSObject {

	/*^block*/id _completionHandler;
	UIViewController* _initialViewController;
	STRootViewModelCoordinator* _coordinator;
	STIntroductionController* _introductionController;

}

@property (nonatomic,retain) STRootViewModelCoordinator * coordinator;                       //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) STIntroductionController * introductionController;              //@synthesize introductionController=_introductionController - In the implementation block
@property (copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * initialViewController;                     //@synthesize initialViewController=_initialViewController - In the implementation block
-(id)initWithDSID:(id)arg1 ;
-(void)saveValuesForModel:(id)arg1 ;
-(UIViewController *)initialViewController;
-(STIntroductionController *)introductionController;
-(void)setIntroductionController:(STIntroductionController *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCoordinator:(STRootViewModelCoordinator *)arg1 ;
-(STRootViewModelCoordinator *)coordinator;
@end

