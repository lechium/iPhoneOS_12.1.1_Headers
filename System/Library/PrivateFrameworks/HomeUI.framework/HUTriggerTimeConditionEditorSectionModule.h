/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUTriggerConditionEditorExpandingSectionModule.h>

@class HFItem, HFTransformItem, NSArray;

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule {

	HFItem* _anyTimeOptionItem;
	HFTransformItem* _onlyDayOptionItem;
	HFTransformItem* _onlyNightOptionItem;
	HFTransformItem* _specificTimesOptionItem;
	HFTransformItem* _customOptionItem;

}

@property (nonatomic,retain) HFItem * anyTimeOptionItem;                             //@synthesize anyTimeOptionItem=_anyTimeOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * onlyDayOptionItem;                    //@synthesize onlyDayOptionItem=_onlyDayOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * onlyNightOptionItem;                  //@synthesize onlyNightOptionItem=_onlyNightOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * specificTimesOptionItem;              //@synthesize specificTimesOptionItem=_specificTimesOptionItem - In the implementation block
@property (nonatomic,retain) HFTransformItem * customOptionItem;                     //@synthesize customOptionItem=_customOptionItem - In the implementation block
@property (nonatomic,readonly) NSArray * optionItems; 
-(id)noConditionSummaryTitle;
-(id)conditionTitle;
-(BOOL)conditionIsDisabled;
-(id)buildConditionOptionItems;
-(id)conditionForOptionItem:(id)arg1 ;
-(id)selectOptionItemForCondition:(id)arg1 ;
-(BOOL)doesOptionItemRequireInitialUserConfiguration:(id)arg1 ;
-(id)preferredConditionFromConditions:(id)arg1 ;
-(HFItem *)anyTimeOptionItem;
-(id)_conditionItemForType:(unsigned long long)arg1 ;
-(void)setAnyTimeOptionItem:(HFItem *)arg1 ;
-(id)_createConditionItemForType:(unsigned long long)arg1 ;
-(void)setOnlyDayOptionItem:(HFTransformItem *)arg1 ;
-(void)setOnlyNightOptionItem:(HFTransformItem *)arg1 ;
-(void)setSpecificTimesOptionItem:(HFTransformItem *)arg1 ;
-(void)setCustomOptionItem:(HFTransformItem *)arg1 ;
-(HFTransformItem *)specificTimesOptionItem;
-(HFTransformItem *)onlyDayOptionItem;
-(HFTransformItem *)onlyNightOptionItem;
-(HFTransformItem *)customOptionItem;
@end

