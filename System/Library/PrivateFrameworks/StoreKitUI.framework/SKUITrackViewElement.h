/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement {

	char _enabled;
	BOOL _selected;

}

@property (getter=isSelected,nonatomic,readonly) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) SKUIActionsViewElement * swipeActions; 
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIActionsViewElement *)swipeActions;
-(BOOL)isEnabled;
-(BOOL)isSelected;
@end

