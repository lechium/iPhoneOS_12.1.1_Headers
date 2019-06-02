/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HUSoftwareUpdateInfoItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _softwareUpdateItems;

}

@property (nonatomic,retain) NSMutableSet * softwareUpdateItems;              //@synthesize softwareUpdateItems=_softwareUpdateItems - In the implementation block
@property (nonatomic,copy) id filter;                                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)invalidationReasons;
-(id)reloadItems;
-(NSMutableSet *)softwareUpdateItems;
-(void)setSoftwareUpdateItems:(NSMutableSet *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id)items;
@end

