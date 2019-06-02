/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIShapeEffectPreset;

@interface _CUIThemeEffectRendition : CUIThemeRendition {

	const cuieffectdata* effectData;
	CUIShapeEffectPreset* _effectPreset;
	float _minimumShadowSpread;

}
+(id)_filteredCSIDataFromBaseCSIData:(id)arg1 ;
-(id)effectPreset;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
@end

