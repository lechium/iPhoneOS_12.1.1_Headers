/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement {

	long long _giftType;
	NSString* _productBuyParams;
	long long _productItemIdentifier;

}

@property (nonatomic,readonly) long long giftType;                  //@synthesize giftType=_giftType - In the implementation block
@property (nonatomic,readonly) SKUIItem * productItem; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)giftType;
-(SKUIItem *)productItem;
@end

