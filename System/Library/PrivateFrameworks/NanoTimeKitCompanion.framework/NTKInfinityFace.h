/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKInfinityFace : NTKFace
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg1 ;
+(id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_complicationSlotDescriptors;
-(id)_orderedComplicationSlots;
-(id)_localizedNameForComplicationSlot:(id)arg1 ;
-(BOOL)_hasOptionsForCustomEditMode:(long long)arg1 ;
-(long long)_customEditModeForUniqueConfiguration;
@end

