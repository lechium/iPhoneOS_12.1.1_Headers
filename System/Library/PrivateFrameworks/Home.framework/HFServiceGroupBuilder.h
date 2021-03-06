/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@protocol HFIconDescriptor;
@class NSString, HFMutableSetDiff, HFRoomBuilder, HMServiceGroup, NSArray;

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	BOOL _hasSetRoom;
	BOOL _hasSetIcon;
	id<HFIconDescriptor> _iconDescriptor;
	NSString* _name;
	HFMutableSetDiff* _serviceUUIDs;
	HFRoomBuilder* _roomBuilder;

}

@property (nonatomic,readonly) HFMutableSetDiff * serviceUUIDs;                 //@synthesize serviceUUIDs=_serviceUUIDs - In the implementation block
@property (nonatomic,retain) HFRoomBuilder * roomBuilder;                       //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (assign,nonatomic) BOOL hasSetRoom;                                   //@synthesize hasSetRoom=_hasSetRoom - In the implementation block
@property (assign,nonatomic) BOOL hasSetIcon;                                   //@synthesize hasSetIcon=_hasSetIcon - In the implementation block
@property (nonatomic,readonly) HMServiceGroup * serviceGroup; 
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,readonly) NSString * primaryServiceType; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;               //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(id)_performValidation;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(NSArray *)availableIconDescriptors;
-(id)_updateFavorite;
-(BOOL)hasSetRoom;
-(void)setHasSetRoom:(BOOL)arg1 ;
-(id)_rooms;
-(void)setHasSetIcon:(BOOL)arg1 ;
-(BOOL)shouldAllowAddingService:(id)arg1 ;
-(id)_createServiceGroup;
-(id)_updateName;
-(id)_updateRooms;
-(id)_updateServices;
-(BOOL)hasSetIcon;
-(id)_mostCommonIconDescriptor;
-(BOOL)_supportsCustomIcons;
-(NSString *)primaryServiceType;
-(NSArray *)services;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(HFRoomBuilder *)roomBuilder;
-(void)setRoomBuilder:(HFRoomBuilder *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)_updateIcon;
-(NSString *)originalName;
-(void)removeService:(id)arg1 ;
-(HFRoomBuilder *)room;
-(id)accessories;
-(HFMutableSetDiff *)serviceUUIDs;
-(HMServiceGroup *)serviceGroup;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(void)setServiceGroup:(HMServiceGroup *)arg1 ;
-(void)addService:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

