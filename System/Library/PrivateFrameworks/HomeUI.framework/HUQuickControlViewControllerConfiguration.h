/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource, HUQuickControlItemUpdating;
@class HMHome;

@interface HUQuickControlViewControllerConfiguration : NSObject {

	BOOL _copyItems;
	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;
	id<HUQuickControlItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,retain) id<HUQuickControlItemUpdating> itemUpdater;               //@synthesize itemUpdater=_itemUpdater - In the implementation block
@property (assign,nonatomic) BOOL copyItems;                                           //@synthesize copyItems=_copyItems - In the implementation block
-(HMHome *)home;
-(id<HUQuickControlItemUpdating>)itemUpdater;
-(id<HFCharacteristicValueSource>)valueSource;
-(void)setItemUpdater:(id<HUQuickControlItemUpdating>)arg1 ;
-(void)setCopyItems:(BOOL)arg1 ;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(BOOL)copyItems;
-(id)initWithHome:(id)arg1 ;
@end

