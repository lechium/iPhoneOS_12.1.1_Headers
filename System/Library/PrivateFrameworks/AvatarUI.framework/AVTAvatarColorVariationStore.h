/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject {

	NSMutableDictionary* _colorPresets;

}

@property (nonatomic,readonly) NSMutableDictionary * colorPresets;              //@synthesize colorPresets=_colorPresets - In the implementation block
-(NSMutableDictionary *)colorPresets;
-(id)colorVariationFromColor:(id)arg1 ;
-(id)colorPresetFromColor:(id)arg1 ;
-(id)keyForColor:(id)arg1 ;
-(void)saveColorPreset:(id)arg1 forColor:(id)arg2 ;
-(id)init;
-(void)resetValues;
@end

