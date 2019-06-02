/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HUTriggerConditionEditorSectionModule.h>

@class HMHome, HFConditionItemProvider, HFTransformItemProvider, NSMutableSet, NSSet, NSString;

@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule> {

	HMHome* _home;
	HFConditionItemProvider* _sourceConditionItemProvider;
	HFTransformItemProvider* _itemProvider;
	NSMutableSet* _mutableEnabledConditions;
	NSMutableSet* _mutableDisabledConditions;

}

@property (nonatomic,readonly) HFConditionItemProvider * sourceConditionItemProvider;              //@synthesize sourceConditionItemProvider=_sourceConditionItemProvider - In the implementation block
@property (nonatomic,readonly) HFTransformItemProvider * itemProvider;                             //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableEnabledConditions;                              //@synthesize mutableEnabledConditions=_mutableEnabledConditions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableDisabledConditions;                             //@synthesize mutableDisabledConditions=_mutableDisabledConditions - In the implementation block
@property (nonatomic,readonly) NSSet * enabledConditions; 
@property (nonatomic,readonly) NSSet * disabledConditions; 
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long conditionType; 
-(HMHome *)home;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(void)_buildItemProviders;
-(NSMutableSet *)mutableEnabledConditions;
-(NSMutableSet *)mutableDisabledConditions;
-(void)setMutableEnabledConditions:(NSMutableSet *)arg1 ;
-(void)setMutableDisabledConditions:(NSMutableSet *)arg1 ;
-(HFConditionItemProvider *)sourceConditionItemProvider;
-(NSSet *)enabledConditions;
-(BOOL)isConditionEnabled:(id)arg1 ;
-(NSSet *)disabledConditions;
-(void)updateEnabledConditions:(id)arg1 disabledConditions:(id)arg2 ;
-(id)conditionForItem:(id)arg1 ;
-(id)itemForCondition:(id)arg1 ;
-(void)setConditionEnabled:(BOOL)arg1 forCondition:(id)arg2 ;
-(unsigned long long)conditionType;
-(HFTransformItemProvider *)itemProvider;
-(id)itemProviders;
@end

