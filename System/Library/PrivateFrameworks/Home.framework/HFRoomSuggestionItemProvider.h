/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFRoomSuggestionVendor;
@class HMHome, NSSet;

@interface HFRoomSuggestionItemProvider : HFItemProvider {

	unsigned long long _suggestedRoomLimit;
	HMHome* _home;
	id<HFRoomSuggestionVendor> _suggestionVendor;
	NSSet* _supplementaryRoomBuilders;
	NSSet* _suggestionItems;

}

@property (nonatomic,retain) NSSet * suggestionItems;                                  //@synthesize suggestionItems=_suggestionItems - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedRoomLimit;                    //@synthesize suggestedRoomLimit=_suggestedRoomLimit - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFRoomSuggestionVendor> suggestionVendor;              //@synthesize suggestionVendor=_suggestionVendor - In the implementation block
@property (nonatomic,copy) NSSet * supplementaryRoomBuilders;                          //@synthesize supplementaryRoomBuilders=_supplementaryRoomBuilders - In the implementation block
-(NSSet *)suggestionItems;
-(void)setSuggestionItems:(NSSet *)arg1 ;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 suggestionVendor:(id)arg2 ;
-(id)_filteredSuggestions;
-(unsigned long long)suggestedRoomLimit;
-(id)_filteredSupplementaryRoomBuilders;
-(NSSet *)supplementaryRoomBuilders;
-(id<HFRoomSuggestionVendor>)suggestionVendor;
-(id)_keyForRoomName:(id)arg1 ;
-(void)setSuggestedRoomLimit:(unsigned long long)arg1 ;
-(void)setSuggestionVendor:(id<HFRoomSuggestionVendor>)arg1 ;
-(void)setSupplementaryRoomBuilders:(NSSet *)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(id)initWithHome:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
@end

