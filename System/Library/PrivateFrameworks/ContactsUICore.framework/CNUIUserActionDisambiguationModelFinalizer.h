/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIUserActionItem, NSMutableArray, NSArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSMutableArray* _actions;
	NSArray* _recentActions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * recentActions;                         //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,retain) NSArray * directoryServiceActions;               //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,retain) NSArray * foundOnDeviceActions;                  //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
+(id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(void)removeUninterestingItentActions;
-(void)removeDiscoveredActionsAlreadyCurated;
-(void)removeDuplicateIntentActionsFromSameProvider;
-(void)promoteLoneManagedCallProviderActionToBeDefault;
-(void)promoteLoneActionToBeDefault;
-(void)removeDefaultActionFromListOfActions;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(void)setRecentActions:(NSArray *)arg1 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
-(NSArray *)recentActions;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(NSMutableArray *)actions;
-(id)model;
-(void)setActions:(NSMutableArray *)arg1 ;
-(CNUIUserActionItem *)defaultAction;
@end

