/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFMediaAccessoryLikeItem.h>

@protocol HFHomeKitObject, HFMediaProfileContainer, HFCharacteristicValueSource;
@class NSString, NSSet;

@interface HFMediaAccessoryItem : HFItem <HFMediaAccessoryLikeItem> {

	id<HFHomeKitObject> _homeKitObject;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;                                 //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                       //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup; 
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup; 
@property (nonatomic,readonly) NSSet * accessoriesSupportingSoftwareUpdate; 
@property (nonatomic,readonly) NSSet * availableSoftwareUpdates; 
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                 //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)createControlItems;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(BOOL)supportsMediaQuickControls;
-(BOOL)supportsAlarmQuickControls;
-(id)performStandardUpdateWithOptions:(id)arg1 ;
-(void)_decorateServiceLikeItemKeys:(id)arg1 ;
-(void)_decorateWithMediaSessionKeys:(id)arg1 ;
-(void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1 ;
-(void)_decorateWithMediaSystemSpecificKeys:(id)arg1 ;
-(void)_decorateWithSoftwareUpdateStateKeys:(id)arg1 ;
-(BOOL)isHomePodMediaSystem;
-(BOOL)isContainedWithinMediaSystem;
-(BOOL)isHomePod;
-(BOOL)isHomePodAndIsInMediaSystem;
-(BOOL)isAppleTV;
-(BOOL)_isInstallingSoftwareUpdate;
-(BOOL)isSiriDisabled;
-(BOOL)isAirPort;
-(BOOL)isSpeaker;
-(id)services;
-(id<HFCharacteristicValueSource>)valueSource;
-(NSSet *)accessoriesSupportingSoftwareUpdate;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(BOOL)isItemGroup;
-(BOOL)isContainedWithinItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(id)iconDescriptor;
-(id)serviceNameComponents;
-(NSSet *)availableSoftwareUpdates;
-(id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2 ;
-(id)copyWithValueSource:(id)arg1 ;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)room;
-(id)accessories;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)settings;
@end

