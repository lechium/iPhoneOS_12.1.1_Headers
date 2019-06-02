/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIButtonViewElement, SKUIViewElementText;

@interface SKUIDividerViewElement : SKUIViewElement {

	SKUIButtonViewElement* _button;
	long long _dividerType;
	BOOL _dividerTypeWasInitialized;
	SKUIViewElementText* _text;

}

@property (nonatomic,readonly) SKUIButtonViewElement * button; 
@property (nonatomic,readonly) long long dividerType; 
@property (nonatomic,readonly) SKUIViewElementText * text;                  //@synthesize text=_text - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(long long)dividerType;
-(long long)pageComponentType;
-(BOOL)isEnabled;
-(SKUIViewElementText *)text;
-(SKUIButtonViewElement *)button;
@end

