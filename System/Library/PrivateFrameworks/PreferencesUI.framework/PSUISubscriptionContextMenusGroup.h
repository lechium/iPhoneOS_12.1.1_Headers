/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSSpecifier, PSListController, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUINetworkSelectionSubgroup, PSUIMyNumberSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup, PSSimStatusCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUICellularPlanManagerCache, CTCellularPlanManager, NSString;

@interface PSUISubscriptionContextMenusGroup : NSObject <PSSpecifierGroup> {

	BOOL _popViewControllerOnPlanDeletion;
	PSSpecifier* _parentSpecifier;
	PSSpecifier* _groupSpecifier;
	PSListController* _listController;
	PSUICallingSubgroup* _callingSubgroup;
	PSUICarrierSpaceGroup* _carrierSpaceSubgroup;
	PSUINetworkSelectionSubgroup* _networkSelectionSubgroup;
	PSUIMyNumberSubgroup* _myNumberSubgroup;
	PSUINetworkSettingsSubgroup* _networkSettingsSubgroup;
	PSUISIMSubgroup* _simSubgroup;
	PSSimStatusCache* _simStatusCache;
	PSUICoreTelephonyCarrierBundleCache* _carrierBundleCache;
	PSUICoreTelephonyDataCache* _dataCache;
	PSUICellularPlanManagerCache* _planManagerCache;
	CTCellularPlanManager* _cellularPlanManager;

}

@property (assign,nonatomic,__weak) PSListController * listController;                              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) BOOL popViewControllerOnPlanDeletion;                                  //@synthesize popViewControllerOnPlanDeletion=_popViewControllerOnPlanDeletion - In the implementation block
@property (nonatomic,retain) PSUICallingSubgroup * callingSubgroup;                                 //@synthesize callingSubgroup=_callingSubgroup - In the implementation block
@property (nonatomic,retain) PSUICarrierSpaceGroup * carrierSpaceSubgroup;                          //@synthesize carrierSpaceSubgroup=_carrierSpaceSubgroup - In the implementation block
@property (nonatomic,retain) PSUINetworkSelectionSubgroup * networkSelectionSubgroup;               //@synthesize networkSelectionSubgroup=_networkSelectionSubgroup - In the implementation block
@property (nonatomic,retain) PSUIMyNumberSubgroup * myNumberSubgroup;                               //@synthesize myNumberSubgroup=_myNumberSubgroup - In the implementation block
@property (nonatomic,retain) PSUINetworkSettingsSubgroup * networkSettingsSubgroup;                 //@synthesize networkSettingsSubgroup=_networkSettingsSubgroup - In the implementation block
@property (nonatomic,retain) PSUISIMSubgroup * simSubgroup;                                         //@synthesize simSubgroup=_simSubgroup - In the implementation block
@property (nonatomic,retain) PSSimStatusCache * simStatusCache;                                     //@synthesize simStatusCache=_simStatusCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyCarrierBundleCache * carrierBundleCache;              //@synthesize carrierBundleCache=_carrierBundleCache - In the implementation block
@property (nonatomic,retain) PSUICoreTelephonyDataCache * dataCache;                                //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                       //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;                           //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * parentSpecifier;                                         //@synthesize parentSpecifier=_parentSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * groupSpecifier;                                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear;
-(PSSpecifier *)groupSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(PSListController *)listController;
-(void)setListController:(PSListController *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)parentSpecifier;
-(void)setParentSpecifier:(PSSpecifier *)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSSimStatusCache *)simStatusCache;
-(void)setSimStatusCache:(PSSimStatusCache *)arg1 ;
-(BOOL)popViewControllerOnPlanDeletion;
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(void)setPopViewControllerOnPlanDeletion:(BOOL)arg1 ;
-(PSUICallingSubgroup *)callingSubgroup;
-(void)setCallingSubgroup:(PSUICallingSubgroup *)arg1 ;
-(PSUICarrierSpaceGroup *)carrierSpaceSubgroup;
-(void)setCarrierSpaceSubgroup:(PSUICarrierSpaceGroup *)arg1 ;
-(PSUINetworkSelectionSubgroup *)networkSelectionSubgroup;
-(void)setNetworkSelectionSubgroup:(PSUINetworkSelectionSubgroup *)arg1 ;
-(PSUIMyNumberSubgroup *)myNumberSubgroup;
-(void)setMyNumberSubgroup:(PSUIMyNumberSubgroup *)arg1 ;
-(PSUINetworkSettingsSubgroup *)networkSettingsSubgroup;
-(void)setNetworkSettingsSubgroup:(PSUINetworkSettingsSubgroup *)arg1 ;
-(PSUISIMSubgroup *)simSubgroup;
-(void)setSimSubgroup:(PSUISIMSubgroup *)arg1 ;
-(PSUICoreTelephonyCarrierBundleCache *)carrierBundleCache;
-(void)setCarrierBundleCache:(PSUICoreTelephonyCarrierBundleCache *)arg1 ;
-(PSUICoreTelephonyDataCache *)dataCache;
-(void)setDataCache:(PSUICoreTelephonyDataCache *)arg1 ;
-(id)initWithFactory:(id)arg1 ;
-(id)specifiers;
@end
