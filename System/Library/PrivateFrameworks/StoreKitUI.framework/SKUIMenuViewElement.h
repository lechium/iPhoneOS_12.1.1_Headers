/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUILabelViewElement, NSArray, SKUIItemViewElement;

@interface SKUIMenuViewElement : SKUIViewElement {

	char _enabled;
	SKUILabelViewElement* _menuLabel;

}

@property (nonatomic,readonly) NSArray * menuItemTitles; 
@property (nonatomic,readonly) SKUILabelViewElement * menuLabel;              //@synthesize menuLabel=_menuLabel - In the implementation block
@property (nonatomic,readonly) long long selectedItemIndex; 
@property (nonatomic,readonly) SKUIItemViewElement * titleItem; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)selectedItemIndex;
-(SKUIItemViewElement *)titleItem;
-(void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2 ;
-(NSArray *)menuItemTitles;
-(void)_enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
-(SKUILabelViewElement *)menuLabel;
-(BOOL)isEnabled;
@end

