/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIIndexBarEntryListViewElement, NSSet, IKViewElementStyle;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {

	SKUIIndexBarEntryListViewElement* _entryListViewElement;
	NSSet* _requiredVisibilitySet;
	IKViewElementStyle* _style;

}
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(void)reloadViewElementData;
-(id)initWithSKUIIndexBarEntryListViewElement:(id)arg1 ;
@end

