/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUPersonalRequestsDevicesItemModule, HFItem, HMHome, HFStaticItemProvider, HFUserItem, HMAssistantAccessControl, HMUser;

@interface HUPersonalRequestsEditorItemManager : HFItemManager {

	HUPersonalRequestsDevicesItemModule* _prDevicesModule;
	HFItem* _requireAuthenticationForSecureRequestsItem;
	HFItem* _neverRequireAuthenticationItem;
	HMHome* _homeForUser;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HUPersonalRequestsDevicesItemModule * prDevicesModule;              //@synthesize prDevicesModule=_prDevicesModule - In the implementation block
@property (nonatomic,readonly) HMHome * homeForUser;                                             //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,readonly) HFStaticItemProvider * staticItemProvider;                        //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,readonly) HMAssistantAccessControl * accessControl; 
@property (nonatomic,readonly) HMUser * user; 
@property (nonatomic,readonly) HFItem * requireAuthenticationForSecureRequestsItem;              //@synthesize requireAuthenticationForSecureRequestsItem=_requireAuthenticationForSecureRequestsItem - In the implementation block
@property (nonatomic,readonly) HFItem * neverRequireAuthenticationItem;                          //@synthesize neverRequireAuthenticationItem=_neverRequireAuthenticationItem - In the implementation block
@property (assign,nonatomic) BOOL personalRequestsAuthenticationRequired; 
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(HMHome *)homeForUser;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMAssistantAccessControl *)accessControl;
-(id)_commitUpdateToAccessControl:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 ;
-(HUPersonalRequestsDevicesItemModule *)prDevicesModule;
-(HFItem *)requireAuthenticationForSecureRequestsItem;
-(HFItem *)neverRequireAuthenticationItem;
-(void)setPersonalRequestsAuthenticationRequired:(BOOL)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(BOOL)_arePersonalRequestsEnabled;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(BOOL)personalRequestsAuthenticationRequired;
-(void)setPrDevicesModule:(HUPersonalRequestsDevicesItemModule *)arg1 ;
-(HMUser *)user;
@end
