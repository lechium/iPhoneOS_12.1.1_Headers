/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, SKUISettingsHeaderFooterDescription, SKUISettingsObjectStore, SKUISettingsContext, SKUISettingsGroupController, SKUISettingsGroupsDescription, SKUIGroupViewElement, SKUIClientContext;

@interface SKUISettingsGroupDescription : NSObject {

	NSMutableSet* _editableSettings;
	SKUISettingsHeaderFooterDescription* _footerDescription;
	SKUISettingsHeaderFooterDescription* _headerDescription;
	SKUISettingsObjectStore* _settingDescriptions;
	SKUISettingsContext* _settingsContext;
	SKUISettingsGroupController* _controller;
	SKUISettingsGroupsDescription* _parent;
	SKUIGroupViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext; 
@property (assign,nonatomic,__weak) SKUISettingsGroupController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) SKUISettingsGroupsDescription * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) SKUIGroupViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
-(SKUIClientContext *)clientContext;
-(SKUIGroupViewElement *)viewElement;
-(id)indexPathForSettingDescription:(id)arg1 ;
-(void)deleteSettingDescription:(id)arg1 ;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dispatchUpdate:(id)arg1 ;
-(void)hideSettingDescription:(id)arg1 ;
-(BOOL)isSettingDescriptionHidden:(id)arg1 ;
-(void)reloadSettingDescription:(id)arg1 ;
-(void)revealSettingDescription:(id)arg1 ;
-(void)_updatedEditsValid;
-(void)setViewElement:(SKUIGroupViewElement *)arg1 ;
-(void)addSettingDescription:(id)arg1 ;
-(void)deleteSettingsGroup;
-(void)hideSettingsGroup;
-(void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(long long)arg2 ;
-(void)revealSettingsGroup;
-(id)settingDescriptionAtIndex:(unsigned long long)arg1 ;
-(id)initWithParent:(id)arg1 settingsContext:(id)arg2 ;
-(void)addSettingViewElement:(id)arg1 ;
-(void)addSibling:(id)arg1 ;
-(id)editableSettingDescriptions;
-(id)footerDescription;
-(BOOL)hasEditableSettingDescriptions;
-(BOOL)hasNoVisibleSettings;
-(id)newSiblingWithClass:(Class)arg1 ;
-(unsigned long long)numberOfSettings;
-(void)recycle;
-(void)requestLayoutForWidth:(double)arg1 context:(id)arg2 ;
-(void)setFooterDescription:(id)arg1 ;
-(void)setFooterViewElement:(id)arg1 ;
-(void)setHeaderDescription:(id)arg1 ;
-(void)setHeaderViewElement:(id)arg1 ;
-(id)viewElementForSettingAtIndex:(unsigned long long)arg1 ;
-(void)setParent:(SKUISettingsGroupsDescription *)arg1 ;
-(id)headerDescription;
-(BOOL)hasHeader;
-(BOOL)hasFooter;
-(id)description;
-(void)reloadData;
-(SKUISettingsGroupController *)controller;
-(void)setController:(SKUISettingsGroupController *)arg1 ;
-(unsigned long long)index;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isEmpty;
-(SKUISettingsGroupsDescription *)parent;
@end

