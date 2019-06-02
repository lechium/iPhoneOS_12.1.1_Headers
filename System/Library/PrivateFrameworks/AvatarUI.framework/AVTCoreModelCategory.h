/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarUI/AvatarUI-Structs.h>
@class AVTCoreModelColorPalette, NSArray, NSDictionary;

@interface AVTCoreModelCategory : NSObject {

	AVTCoreModelColorPalette* _colorPalette;
	AVTCoreModelColorPalette* _secondaryColorPalette;
	NSArray* _presets;
	NSDictionary* _tags;
	NSArray* _rows;
	long long _presetCategory;

}

@property (nonatomic,readonly) AVTCoreModelColorPalette * colorPalette;                       //@synthesize colorPalette=_colorPalette - In the implementation block
@property (nonatomic,readonly) AVTCoreModelColorPalette * secondaryColorPalette;              //@synthesize secondaryColorPalette=_secondaryColorPalette - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presets;                                        //@synthesize presets=_presets - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                                           //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) long long presetCategory;                                      //@synthesize presetCategory=_presetCategory - In the implementation block
-(NSDictionary *)tags;
-(NSArray *)presets;
-(AVTCoreModelColorPalette *)colorPalette;
-(id)initWithPresetCategory:(long long)arg1 colorPalette:(id)arg2 secondaryColorPalette:(id)arg3 presets:(id)arg4 tags:(NSDictionary*)arg5 rows:(id)arg6 ;
-(long long)presetCategory;
-(AVTCoreModelColorPalette *)secondaryColorPalette;
-(id)description;
-(NSArray *)rows;
@end
