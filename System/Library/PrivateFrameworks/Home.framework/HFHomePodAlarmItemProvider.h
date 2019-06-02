/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFHomePodAlarmItemProviderDelegate, HFMediaProfileContainer;
@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;

@interface HFHomePodAlarmItemProvider : HFItemProvider {

	HFAccessorySettingMobileTimerAdapter* _mobileTimerAdapter;
	id<HFHomePodAlarmItemProviderDelegate> _delegate;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableDictionary* _alarmIDToItemMap;
	NSMutableSet* _alarmItems;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                      //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * alarmIDToItemMap;                                 //@synthesize alarmIDToItemMap=_alarmIDToItemMap - In the implementation block
@property (nonatomic,readonly) NSMutableSet * alarmItems;                                              //@synthesize alarmItems=_alarmItems - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingMobileTimerAdapter * mobileTimerAdapter;              //@synthesize mobileTimerAdapter=_mobileTimerAdapter - In the implementation block
@property (assign,nonatomic,__weak) id<HFHomePodAlarmItemProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(NSMutableSet *)alarmItems;
-(NSMutableDictionary *)alarmIDToItemMap;
-(HFAccessorySettingMobileTimerAdapter *)mobileTimerAdapter;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id)reloadItems;
-(void)setDelegate:(id<HFHomePodAlarmItemProviderDelegate>)arg1 ;
-(id<HFHomePodAlarmItemProviderDelegate>)delegate;
-(id)items;
@end
