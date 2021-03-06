/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSCellularPlanManagerCacheDelegate.h>

@class NSMutableArray, NSString, UIBarButtonItem;

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {

	BOOL _showAddPlan;
	NSMutableArray* _danglingPlanItems;
	NSString* _iccid;
	UIBarButtonItem* _cancelButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)needsToRun:(/*^block*/id)arg1 ;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(id)initWithIccid:(id)arg1 showAddPlan:(BOOL)arg2 allowDismiss:(BOOL)arg3 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(BOOL)isPhoneFlow;
-(void)setDefaultNavigationItems:(id)arg1 ;
@end

