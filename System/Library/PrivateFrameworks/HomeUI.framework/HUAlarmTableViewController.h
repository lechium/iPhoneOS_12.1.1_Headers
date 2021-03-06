/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAlarmEditViewControllerDelegate.h>
#import <libobjc.A.dylib/HUHomePodAlarmItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <libobjc.A.dylib/HFAccessorySettingMobileTimerAdapterObserver.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HFMediaProfileContainer;
@class UIBarButtonItem, HUHomePodAlarmItemModuleController, MTAlarm, _UIContentUnavailableView, NSString;

@interface HUAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, HUPresentationDelegateHost> {

	BOOL _isAccessoryControllable;
	BOOL _isAlarmsSettingReady;
	id<HUPresentationDelegate> _presentationDelegate;
	UIBarButtonItem* _doneButtonItem;
	HUHomePodAlarmItemModuleController* _alarmModuleController;
	MTAlarm* _alarmToEdit;
	_UIContentUnavailableView* _noItemsView;
	UIBarButtonItem* _addButtonItem;
	UIBarButtonItem* _editDoneButtonItem;
	id<HFMediaProfileContainer> _mediaProfileContainer;

}

@property (nonatomic,retain) HUHomePodAlarmItemModuleController * alarmModuleController;              //@synthesize alarmModuleController=_alarmModuleController - In the implementation block
@property (nonatomic,retain) MTAlarm * alarmToEdit;                                                   //@synthesize alarmToEdit=_alarmToEdit - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * noItemsView;                                 //@synthesize noItemsView=_noItemsView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addButtonItem;                                         //@synthesize addButtonItem=_addButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editDoneButtonItem;                                    //@synthesize editDoneButtonItem=_editDoneButtonItem - In the implementation block
@property (nonatomic,readonly) BOOL isAccessoryControllable;                                          //@synthesize isAccessoryControllable=_isAccessoryControllable - In the implementation block
@property (nonatomic,readonly) BOOL isAlarmsSettingReady;                                             //@synthesize isAlarmsSettingReady=_isAlarmsSettingReady - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                     //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                        //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                  //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)_doneAction:(id)arg1 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(id)itemModuleControllers;
-(void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2 ;
-(void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2 ;
-(void)alarmEditControllerDidCancel:(id)arg1 ;
-(void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2 ;
-(void)_showAddView:(id)arg1 ;
-(void)_editDoneAction:(id)arg1 ;
-(void)_discernReachabilityForAccessory:(id)arg1 ;
-(HUHomePodAlarmItemModuleController *)alarmModuleController;
-(void)_updateNavigationItems:(BOOL)arg1 ;
-(void)_numberOfItemsDidChangeAnimated:(BOOL)arg1 ;
-(_UIContentUnavailableView *)noItemsView;
-(void)_layoutNoItemsLabel;
-(id)editViewControllerForAlarm:(id)arg1 ;
-(id)alarmItemManager;
-(BOOL)isAccessoryControllable;
-(BOOL)isAlarmsSettingReady;
-(void)setNoItemsView:(_UIContentUnavailableView *)arg1 ;
-(UIBarButtonItem *)editDoneButtonItem;
-(UIBarButtonItem *)addButtonItem;
-(void)_updateAccessoryControllable:(BOOL)arg1 alarmsSettingReady:(BOOL)arg2 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)mobileTimerAdapterDidUpdateReadiness:(id)arg1 ;
-(BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
-(void)setAlarmModuleController:(HUHomePodAlarmItemModuleController *)arg1 ;
-(MTAlarm *)alarmToEdit;
-(void)setAlarmToEdit:(MTAlarm *)arg1 ;
-(void)setAddButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setEditDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2 ;
@end

