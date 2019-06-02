/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUTriggerConditionEditorSectionModule.h>

@class HFItem, NSArray, HFCondition, HMHome, HFStaticItemProvider, NSString;

@interface HUTriggerConditionEditorExpandingSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule> {

	BOOL _showOptions;
	unsigned long long _conditionType;
	HFItem* _showOptionsItem;
	NSArray* _optionItems;
	HFCondition* _condition;
	HFItem* _selectedOptionItem;
	HMHome* _home;
	HFStaticItemProvider* _itemProvider;

}

@property (nonatomic,retain) HFStaticItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) HFItem * showOptionsItem;                         //@synthesize showOptionsItem=_showOptionsItem - In the implementation block
@property (nonatomic,retain) NSArray * optionItems;                            //@synthesize optionItems=_optionItems - In the implementation block
@property (nonatomic,retain) HFCondition * condition;                          //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) HFItem * selectedOptionItem;                      //@synthesize selectedOptionItem=_selectedOptionItem - In the implementation block
@property (assign,nonatomic) BOOL showOptions;                                 //@synthesize showOptions=_showOptions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long conditionType;               //@synthesize conditionType=_conditionType - In the implementation block
+(id)sectionModuleForConditionType:(unsigned long long)arg1 itemUpdater:(id)arg2 home:(id)arg3 ;
-(HMHome *)home;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 conditionType:(unsigned long long)arg2 home:(id)arg3 ;
-(void)_buildItemProvider;
-(id)conditionTitle;
-(BOOL)conditionIsDisabled;
-(void)setShowOptionsItem:(HFItem *)arg1 ;
-(id)buildConditionOptionItems;
-(void)setOptionItems:(NSArray *)arg1 ;
-(NSArray *)optionItems;
-(HFItem *)showOptionsItem;
-(BOOL)showOptions;
-(id)conditionForOptionItem:(id)arg1 ;
-(void)setSelectedOptionItem:(HFItem *)arg1 ;
-(id)selectOptionItemForCondition:(id)arg1 ;
-(HFItem *)selectedOptionItem;
-(id)selectOptionItem:(id)arg1 ;
-(id)updateSelectionWithCondition:(id)arg1 ;
-(BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg1 ;
-(id)createNoConditionOptionItemWithTitle:(id)arg1 ;
-(id)preferredConditionFromConditions:(id)arg1 ;
-(void)setShowOptions:(BOOL)arg1 ;
-(unsigned long long)conditionType;
-(id)sectionID;
-(HFStaticItemProvider *)itemProvider;
-(void)setItemProvider:(HFStaticItemProvider *)arg1 ;
-(id)itemProviders;
-(HFCondition *)condition;
-(void)setCondition:(HFCondition *)arg1 ;
@end

