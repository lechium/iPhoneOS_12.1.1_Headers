/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/BFFSplashController.h>

@class PSListController;

@interface PSUICarrierSpaceOptInSplashScreen : BFFSplashController {

	/*^block*/id _continueButtonAction;
	PSListController* _listController;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (nonatomic,copy) id continueButtonAction;                                 //@synthesize continueButtonAction=_continueButtonAction - In the implementation block
-(PSListController *)listController;
-(void)setListController:(PSListController *)arg1 ;
-(void)setContinueButtonAction:(id)arg1 ;
-(void)continueButtonPressed;
-(id)continueButtonAction;
-(id)initWithParent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
