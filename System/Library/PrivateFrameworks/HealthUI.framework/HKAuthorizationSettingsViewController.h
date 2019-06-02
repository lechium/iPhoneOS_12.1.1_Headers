/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKDocumentPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HKSourceAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class NSArray, HKHealthStore, HKSource, NSString, NSSet, HKDisplayCategoryController, HKSourceAuthorizationController, UIBarButtonItem;

@interface HKAuthorizationSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKDocumentPickerViewControllerDelegate, HKSourceAuthorizationControllerDelegate, HKHealthPrivacyServicePromptController> {

	NSArray* _documents;
	NSArray* _actualSections;
	NSArray* _readingTypeOrdering;
	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	HKHealthStore* _healthStore;
	HKSource* _source;
	long long _style;
	NSString* _updateDescription;
	NSString* _shareDescription;
	NSString* _researchStudyUsageDescription;
	NSSet* _typesToShare;
	NSSet* _typesToRead;
	HKDisplayCategoryController* _displayCategoryController;
	HKSourceAuthorizationController* _sourceAuthorizationController;
	UIBarButtonItem* _cancelButtonItem;
	UIBarButtonItem* _doneButtonItem;

}

@property (nonatomic,retain) HKDisplayCategoryController * displayCategoryController;                         //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,retain) HKSourceAuthorizationController * sourceAuthorizationController;                 //@synthesize sourceAuthorizationController=_sourceAuthorizationController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                              //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                                //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (readonly) BOOL isPrompting; 
@property (retain) NSArray * actualSections;                                                                  //@synthesize actualSections=_actualSections - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSource * source;                                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) long long style;                                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * updateDescription;                                                      //@synthesize updateDescription=_updateDescription - In the implementation block
@property (nonatomic,copy) NSString * shareDescription;                                                       //@synthesize shareDescription=_shareDescription - In the implementation block
@property (nonatomic,copy) NSString * researchStudyUsageDescription;                                          //@synthesize researchStudyUsageDescription=_researchStudyUsageDescription - In the implementation block
@property (nonatomic,retain) NSSet * typesToShare;                                                            //@synthesize typesToShare=_typesToShare - In the implementation block
@property (nonatomic,retain) NSSet * typesToRead;                                                             //@synthesize typesToRead=_typesToRead - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_addHeaderView;
-(NSString *)updateDescription;
-(void)_done:(id)arg1 ;
-(NSSet *)typesToRead;
-(void)_finishWithError:(id)arg1 ;
-(void)_addCancelAndDoneButtons;
-(void)documentPickerViewControllerDidFinish:(id)arg1 error:(id)arg2 ;
-(BOOL)isPrompting;
-(void)reloadAuthorizationSettings;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)shouldPresent;
-(void)authorizationController:(id)arg1 parentTypeIsDisabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4 ;
-(void)authorizationController:(id)arg1 subTypesEnabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4 ;
-(id)initWithHealthStore:(id)arg1 style:(long long)arg2 ;
-(HKSourceAuthorizationController *)sourceAuthorizationController;
-(id)sectionsForAuthController:(id)arg1 ;
-(void)setActualSections:(NSArray *)arg1 ;
-(long long)authorizationSectionForSection:(long long)arg1 ;
-(id)_toggleAllCell;
-(id)_authorizationSettingCellForRowAtIndexPath:(id)arg1 ;
-(id)_openAppCell;
-(id)_specialCellWithIdentifier:(id)arg1 ;
-(id)_typeForIndexPath:(id)arg1 section:(long long*)arg2 ;
-(id)_localizedNameForSection:(long long)arg1 type:(id)arg2 ;
-(BOOL)_isTypeEnabledAtIndexPath:(id)arg1 ;
-(void)updateAllowButtonEnabledState;
-(BOOL)_shouldDisplayHealthRecordsRequests;
-(BOOL)_shouldDisplaySharingSection;
-(BOOL)_shouldDisplayReadingSection;
-(NSString *)researchStudyUsageDescription;
-(void)_configurationFailedWithError:(id)arg1 ;
-(void)setUpdateDescription:(NSString *)arg1 ;
-(NSString *)shareDescription;
-(void)setShareDescription:(NSString *)arg1 ;
-(void)setResearchStudyUsageDescription:(NSString *)arg1 ;
-(NSSet *)typesToShare;
-(void)setTypesToShare:(NSSet *)arg1 ;
-(void)setTypesToRead:(NSSet *)arg1 ;
-(HKDisplayCategoryController *)displayCategoryController;
-(void)setDisplayCategoryController:(HKDisplayCategoryController *)arg1 ;
-(void)setSourceAuthorizationController:(HKSourceAuthorizationController *)arg1 ;
-(NSArray *)actualSections;
-(UIBarButtonItem *)doneButtonItem;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(HKHealthStore *)healthStore;
-(id)init;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(long long)style;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

