/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFMediaProfileContainer;
@class HFItem, HMAccessorySetting, HMAccessorySettingGroup, HMAccessorySelectionSettingItem, HFAccessorySettingsEntity, NSString;

@interface _HFMediaAccessoryProfileItemTuple : NSObject <NAIdentifiable> {

	HFItem* _outputItem;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	HMAccessorySetting* _accessorySetting;
	HMAccessorySettingGroup* _accessoryGroup;
	HMAccessorySelectionSettingItem* _optionItem;
	HFAccessorySettingsEntity* _accessoryGroupEntity;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) HMAccessorySetting * accessorySetting;                          //@synthesize accessorySetting=_accessorySetting - In the implementation block
@property (nonatomic,readonly) HMAccessorySettingGroup * accessoryGroup;                       //@synthesize accessoryGroup=_accessoryGroup - In the implementation block
@property (nonatomic,readonly) HMAccessorySelectionSettingItem * optionItem;                   //@synthesize optionItem=_optionItem - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingsEntity * accessoryGroupEntity;               //@synthesize accessoryGroupEntity=_accessoryGroupEntity - In the implementation block
@property (nonatomic,readonly) HFItem * outputItem;                                            //@synthesize outputItem=_outputItem - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_walkSettingsTreeForReflectedSettingWithinContainer:(id)arg1 accessoryGroup:(id)arg2 ;
+(id)na_identity;
-(id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 ;
-(id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 optionItem:(id)arg3 ;
-(id)initWithMediaProfileContainer:(id)arg1 group:(id)arg2 ;
-(HMAccessorySetting *)accessorySetting;
-(HMAccessorySettingGroup *)accessoryGroup;
-(HFAccessorySettingsEntity *)accessoryGroupEntity;
-(BOOL)isValidForContainer;
-(id)initWithMediaProfileContainer:(id)arg1 accessoryGroupEntity:(id)arg2 ;
-(HFItem *)outputItem;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HMAccessorySelectionSettingItem *)optionItem;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)keyPath;
-(NSString *)cacheKey;
@end

