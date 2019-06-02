/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUIContainerStackView.h>

@interface TLKStackView : NUIContainerStackView {

	BOOL _flipsToVerticalAxisForAccessibilityContentSizes;
	BOOL _isForcedToBeVertical;

}

@property (assign) BOOL isForcedToBeVertical;                                                   //@synthesize isForcedToBeVertical=_isForcedToBeVertical - In the implementation block
@property (assign,nonatomic) BOOL flipsToVerticalAxisForAccessibilityContentSizes;              //@synthesize flipsToVerticalAxisForAccessibilityContentSizes=_flipsToVerticalAxisForAccessibilityContentSizes - In the implementation block
-(void)setIsForcedToBeVertical:(BOOL)arg1 ;
-(BOOL)flipsToVerticalAxisForAccessibilityContentSizes;
-(BOOL)isForcedToBeVertical;
-(void)setFlipsToVerticalAxisForAccessibilityContentSizes:(BOOL)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
@end
