/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFProgrammableSwitchItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _programmableSwitchAccessoryItems;

}

@property (nonatomic,retain) NSMutableSet * programmableSwitchAccessoryItems;              //@synthesize programmableSwitchAccessoryItems=_programmableSwitchAccessoryItems - In the implementation block
@property (nonatomic,copy) id filter;                                                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                              //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(NSMutableSet *)programmableSwitchAccessoryItems;
-(void)setProgrammableSwitchAccessoryItems:(NSMutableSet *)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)items;
@end
