/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSimpleSection.h>

@protocol HKDataMetadataObject;
@class NSObject, HKDisplayTypeController, HKUnitPreferenceController;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection {

	NSObject*<HKDataMetadataObject> _object;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,readonly) NSObject*<HKDataMetadataObject> object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;              //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
-(HKDisplayTypeController *)displayTypeController;
-(HKUnitPreferenceController *)unitController;
-(id)initWithWorkoutEvent:(id)arg1 ;
-(id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(void)_loadMetadataValues;
-(NSObject*<HKDataMetadataObject>)object;
@end
