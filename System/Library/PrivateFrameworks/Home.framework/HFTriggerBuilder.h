/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@protocol HFTriggerBuilderContextProviding;
@class NSString, HFTriggerAnonymousActionSetBuilder, HFConditionCollection, HFMutableSetDiff, HMTrigger, NSArray, HFDurationEventBuilder;

@interface HFTriggerBuilder : HFItemBuilder {

	BOOL _enabled;
	NSString* _name;
	HFTriggerAnonymousActionSetBuilder* _anonymousActionSetBuilder;
	id<HFTriggerBuilderContextProviding> _context;
	HFConditionCollection* _conditionCollection;
	HFMutableSetDiff* _actionSetBuilders;
	HFMutableSetDiff* _endEventBuildersDiff;

}

@property (nonatomic,retain) HFMutableSetDiff * actionSetBuilders;                                                //@synthesize actionSetBuilders=_actionSetBuilders - In the implementation block
@property (nonatomic,retain) HFTriggerAnonymousActionSetBuilder * anonymousActionSetBuilder;                      //@synthesize anonymousActionSetBuilder=_anonymousActionSetBuilder - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * endEventBuildersDiff;                                             //@synthesize endEventBuildersDiff=_endEventBuildersDiff - In the implementation block
@property (nonatomic,retain) id<HFTriggerBuilderContextProviding> context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HFConditionCollection * conditionCollection;                                         //@synthesize conditionCollection=_conditionCollection - In the implementation block
@property (nonatomic,readonly) BOOL supportsConditions; 
@property (nonatomic,readonly) BOOL supportsEndEvents; 
@property (nonatomic,readonly) HMTrigger * trigger; 
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * actionSets; 
@property (nonatomic,readonly) NSArray * endEventBuilders; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) BOOL requiresConfirmationToRun; 
@property (nonatomic,readonly) BOOL secureActionsRequireConfirmationToRun; 
@property (nonatomic,readonly) BOOL requiresLocationServicesAuthorization; 
@property (nonatomic,readonly) BOOL requiresHomeHub; 
@property (nonatomic,readonly) BOOL requiresUpdatedHomeHub; 
@property (nonatomic,readonly) BOOL requiresFMFDeviceToRun; 
@property (getter=areActionsAffectedByEndEvents,nonatomic,readonly) BOOL actionsAffectedByEndEvents; 
@property (nonatomic,readonly) HFDurationEventBuilder * designatedDurationEventBuilder; 
+(Class)homeKitRepresentationClass;
+(id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(void)setTrigger:(HMTrigger *)arg1 ;
-(id)_updateEnabledState;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(id)_performValidation;
-(BOOL)markTriggerAsHomeAppCreated;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(id)deleteTrigger;
-(void)setMarkTriggerAsHomeAppCreated:(BOOL)arg1 ;
-(void)updateAction:(id)arg1 ;
-(void)removeAction:(id)arg1 ;
-(id)replaceCurrentTriggerWithTrigger:(id)arg1 ;
-(NSArray *)endEventBuilders;
-(id)_updateName;
-(HFTriggerAnonymousActionSetBuilder *)anonymousActionSetBuilder;
-(BOOL)requiresConfirmationToRun;
-(BOOL)secureActionsRequireConfirmationToRun;
-(BOOL)requiresLocationServicesAuthorization;
-(BOOL)requiresFMFDeviceToRun;
-(id)initWithHome:(id)arg1 context:(id)arg2 ;
-(void)setActionSetBuilders:(HFMutableSetDiff *)arg1 ;
-(void)setAnonymousActionSetBuilder:(HFTriggerAnonymousActionSetBuilder *)arg1 ;
-(void)setConditionCollection:(HFConditionCollection *)arg1 ;
-(void)setEndEventBuildersDiff:(HFMutableSetDiff *)arg1 ;
-(HFMutableSetDiff *)actionSetBuilders;
-(void)removeActionSet:(id)arg1 ;
-(HFMutableSetDiff *)endEventBuildersDiff;
-(void)removeEndEventBuilder:(id)arg1 ;
-(void)removeAllEndEventBuilders;
-(void)addEndEventBuilder:(id)arg1 ;
-(id)_deleteTrigger:(id)arg1 fromHome:(id)arg2 ;
-(id)_commitAddTriggerToHome:(id)arg1 ;
-(id)_updateAnonymousActionSet;
-(id)_updateActionSets;
-(id)_updateConditions;
-(id)_updateEndEvents;
-(id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2 ;
-(void)_didReplaceBackingTrigger;
-(void)addActionSet:(id)arg1 ;
-(void)updateActionSet:(id)arg1 ;
-(void)removeAllActionsAndActionSets;
-(void)updateEndEventBuilder:(id)arg1 ;
-(BOOL)requiresHomeHub;
-(BOOL)requiresUpdatedHomeHub;
-(BOOL)areActionsAffectedByEndEvents;
-(HFDurationEventBuilder *)designatedDurationEventBuilder;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(HFConditionCollection *)conditionCollection;
-(NSArray *)actionSets;
-(id)initWithHome:(id)arg1 ;
-(void)setEndEvent:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)setContext:(id<HFTriggerBuilderContextProviding>)arg1 ;
-(id<HFTriggerBuilderContextProviding>)context;
-(BOOL)enabled;
-(HMTrigger *)trigger;
-(BOOL)hasActions;
@end

