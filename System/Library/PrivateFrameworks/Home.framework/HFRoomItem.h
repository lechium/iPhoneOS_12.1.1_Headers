/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HMRoom, HMHome, NSString;

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol> {

	HMRoom* _room;
	HMHome* _home;

}

@property (nonatomic,readonly) HMRoom * room;                                  //@synthesize room=_room - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(HMHome *)home;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
-(id)togglePowerState;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMRoom *)room;
-(id)init;
-(NSString *)description;
@end

