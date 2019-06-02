/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, PSListController;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier {

	CTCellularPlanManager* _planManager;
	PSListController* _hostController;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 planManager:(id)arg3 ;
-(void)fauxCardScannerCellPressed:(id)arg1 ;
@end

