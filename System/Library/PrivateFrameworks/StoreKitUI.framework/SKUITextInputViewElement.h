/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIAnimatorDOMFeature;

@interface SKUITextInputViewElement : SKUIInputViewElement {

	long long _keyboardType;
	long long _maximumLength;
	BOOL _secure;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) SKUIAnimatorDOMFeature * animationInterface; 
@property (nonatomic,readonly) long long keyboardType;                                   //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long maximumLength;                                  //@synthesize maximumLength=_maximumLength - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText;                               //@synthesize placeholderText=_placeholderText - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                              //@synthesize secure=_secure - In the implementation block
+(BOOL)isTextInputType:(id)arg1 ;
+(id)supportedFeatures;
-(NSString *)placeholderText;
-(unsigned long long)elementType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)maximumLength;
-(SKUIAnimatorDOMFeature *)animationInterface;
-(long long)keyboardType;
-(BOOL)isSecure;
@end
