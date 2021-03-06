/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject {

	AVTColorPreset* _colorPreset;
	AVTCoreModelColor* _color;

}

@property (nonatomic,readonly) AVTColorPreset * colorPreset;              //@synthesize colorPreset=_colorPreset - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColor * color;                 //@synthesize color=_color - In the implementation block
-(AVTColorPreset *)colorPreset;
-(id)initWithColor:(id)arg1 colorPreset:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AVTCoreModelColor *)color;
@end

