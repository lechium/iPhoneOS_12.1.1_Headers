/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/BFFSplashController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSString;

@interface TSAddCellularPlanViewController : BFFSplashController <UINavigationControllerDelegate, TSSetupFlowItem> {

	BOOL _allowDismiss;
	BOOL _showAddPlan;
	id<TSSIMSetupFlowDelegate> _delegate;

}

@property (__weak) id<TSSIMSetupFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelButtonTapped;
-(id)initShowAddPlan:(BOOL)arg1 allowDismiss:(BOOL)arg2 ;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)viewDidLoad;
@end

