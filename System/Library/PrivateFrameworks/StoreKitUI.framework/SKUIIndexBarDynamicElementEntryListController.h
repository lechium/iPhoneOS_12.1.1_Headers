/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@protocol SKUIEntityProviding;
@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryViewElement, SKUIViewElement, SKUIIndexBarEntryListViewElement;

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController {

	SKUIDynamicPageSectionIndexMapper* _dynamicIndexMapper;
	id<SKUIEntityProviding> _entityProvider;
	SKUIIndexBarEntryViewElement* _indexBarEntryViewElement;
	SKUIViewElement* _templateElement;
	SKUIIndexBarEntryListViewElement* _entryListViewElement;

}

@property (nonatomic,readonly) SKUIIndexBarEntryListViewElement * entryListViewElement;              //@synthesize entryListViewElement=_entryListViewElement - In the implementation block
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(id)rootTargetIndexBarEntryID;
-(void)setRootTargetViewElement:(id)arg1 ;
-(void)reloadViewElementData;
-(id)initWithEntryListViewElement:(id)arg1 ;
-(SKUIIndexBarEntryListViewElement *)entryListViewElement;
-(void)dealloc;
@end
