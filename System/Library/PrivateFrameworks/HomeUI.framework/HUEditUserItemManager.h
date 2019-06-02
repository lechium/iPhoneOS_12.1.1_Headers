/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUUserItemManager.h>

@class HFItem, HMHome, HFUserItem, HMUser, NSString;

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager> {

	HFItem* _localAccessItem;
	HFItem* _allowRemoteAccessItem;
	HFItem* _allowRemoteAccessFooterItem;
	HFItem* _allowEditingItem;
	HFItem* _allowEditingFooterItem;
	HFItem* _pendingAccessoriesItem;
	HFItem* _personalRequestsItem;
	HMHome* _homeForUser;
	HFItem* _removeItem;

}

@property (nonatomic,retain) HMHome * homeForUser;                              //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,retain) HFItem * localAccessItem;                          //@synthesize localAccessItem=_localAccessItem - In the implementation block
@property (nonatomic,retain) HFItem * allowRemoteAccessItem;                    //@synthesize allowRemoteAccessItem=_allowRemoteAccessItem - In the implementation block
@property (nonatomic,retain) HFItem * allowRemoteAccessFooterItem;              //@synthesize allowRemoteAccessFooterItem=_allowRemoteAccessFooterItem - In the implementation block
@property (nonatomic,retain) HFItem * allowEditingItem;                         //@synthesize allowEditingItem=_allowEditingItem - In the implementation block
@property (nonatomic,retain) HFItem * allowEditingFooterItem;                   //@synthesize allowEditingFooterItem=_allowEditingFooterItem - In the implementation block
@property (nonatomic,retain) HFItem * removeItem;                               //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFItem * pendingAccessoriesItem;                   //@synthesize pendingAccessoriesItem=_pendingAccessoriesItem - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,retain) HFItem * personalRequestsItem;                     //@synthesize personalRequestsItem=_personalRequestsItem - In the implementation block
@property (nonatomic,readonly) HMUser * user; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)setHomeForUser:(HMHome *)arg1 ;
-(id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3 ;
-(BOOL)_hasResidentDevice;
-(HMHome *)homeForUser;
-(void)setLocalAccessItem:(HFItem *)arg1 ;
-(BOOL)_isRemoteAccessAllowedForUser:(id)arg1 ;
-(BOOL)_isUserOwner:(id)arg1 ;
-(BOOL)_isCurrentUser;
-(void)setAllowRemoteAccessItem:(HFItem *)arg1 ;
-(void)setAllowRemoteAccessFooterItem:(HFItem *)arg1 ;
-(BOOL)_isEditingAllowedForUser:(id)arg1 ;
-(void)setAllowEditingItem:(HFItem *)arg1 ;
-(void)setAllowEditingFooterItem:(HFItem *)arg1 ;
-(BOOL)_hasHomePod;
-(id)_isPersonalRequestsEnabledForUser;
-(void)setPersonalRequestsItem:(HFItem *)arg1 ;
-(void)setRemoveItem:(HFItem *)arg1 ;
-(BOOL)_hasPendingAccessories;
-(void)setPendingAccessoriesItem:(HFItem *)arg1 ;
-(HFItem *)localAccessItem;
-(HFItem *)allowRemoteAccessItem;
-(HFItem *)allowRemoteAccessFooterItem;
-(HFItem *)allowEditingItem;
-(HFItem *)allowEditingFooterItem;
-(HFItem *)personalRequestsItem;
-(HFItem *)removeItem;
-(HFItem *)pendingAccessoriesItem;
-(id)reuseIdentifierForFooterViewInSection:(unsigned long long)arg1 ;
-(id)_homeFuture;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMUser *)user;
@end

