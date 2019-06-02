/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFAccessorySettingItemProtocol.h>

@protocol HFMediaProfileContainer;
@class HFAccessorySettingsEntity, NSString, HMAccessorySetting;

@interface HFAccessorySettingItem : HFItem <HFAccessorySettingItemProtocol> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HMAccessorySetting* _setting;
	HFAccessorySettingsEntity* _entity;

}

@property (nonatomic,retain) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,retain) HMAccessorySetting * setting;                                   //@synthesize setting=_setting - In the implementation block
@property (nonatomic,retain) HFAccessorySettingsEntity * entity;                             //@synthesize entity=_entity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) NSString * settingKeyPath; 
-(HFAccessorySettingsEntity *)entity;
-(void)setEntity:(HFAccessorySettingsEntity *)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 ;
-(id)updateValue:(id)arg1 ;
-(NSString *)settingKeyPath;
-(void)_decorateOutcomeWithDependencies:(id)arg1 ;
-(void)_decorateOutcomeWithResultKeys:(id)arg1 ;
-(void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1 ;
-(void)_decorateHiddenOrDisabled:(id)arg1 ;
-(BOOL)_validateKeyPathDependencies;
-(void)setMediaProfileContainer:(id<HFMediaProfileContainer>)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)setSetting:(HMAccessorySetting *)arg1 ;
-(HMAccessorySetting *)setting;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
@end

