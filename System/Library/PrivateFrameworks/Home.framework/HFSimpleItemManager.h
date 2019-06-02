/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@interface HFSimpleItemManager : HFItemManager {

	/*^block*/id _homeCreator;
	/*^block*/id _itemModuleCreator;
	/*^block*/id _itemProviderCreator;
	/*^block*/id _itemComparator;

}

@property (nonatomic,copy) id homeCreator;                      //@synthesize homeCreator=_homeCreator - In the implementation block
@property (nonatomic,copy) id itemModuleCreator;                //@synthesize itemModuleCreator=_itemModuleCreator - In the implementation block
@property (nonatomic,copy) id itemProviderCreator;              //@synthesize itemProviderCreator=_itemProviderCreator - In the implementation block
@property (nonatomic,copy) id itemComparator;                   //@synthesize itemComparator=_itemComparator - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 itemProvidersCreator:(/*^block*/id)arg3 ;
-(id)itemModuleCreator;
-(id)itemProviderCreator;
-(id)homeCreator;
-(void)setItemProviderCreator:(id)arg1 ;
-(id)_homeFuture;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setHomeCreator:(id)arg1 ;
-(void)setItemModuleCreator:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 itemProvidersCreator:(/*^block*/id)arg2 ;
-(void)setItemComparator:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)itemComparator;
-(id)_buildItemModulesForHome:(id)arg1 ;
@end
