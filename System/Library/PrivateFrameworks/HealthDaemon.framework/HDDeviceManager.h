/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, HDDatabaseValueCache, NSNumber;

@interface HDDeviceManager : NSObject {

	HDProfile* _profile;
	HDDatabaseValueCache* _devicesByPersistentID;
	HDDatabaseValueCache* _deviceEntitiesByDevice;
	NSNumber* _noneDeviceID;

}

@property (nonatomic,retain) HDDatabaseValueCache * devicesByPersistentID;               //@synthesize devicesByPersistentID=_devicesByPersistentID - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * deviceEntitiesByDevice;              //@synthesize deviceEntitiesByDevice=_deviceEntitiesByDevice - In the implementation block
@property (copy) NSNumber * noneDeviceID;                                                //@synthesize noneDeviceID=_noneDeviceID - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(id)deviceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntityForDevice:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntityForNoDeviceWithError:(id*)arg1 ;
-(id)deviceEntitiesForDevice:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)currentDeviceEntityWithError:(id*)arg1 ;
-(NSNumber *)noneDeviceID;
-(id)_noneDevice;
-(void)setNoneDeviceID:(NSNumber *)arg1 ;
-(id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)allDeviceEntitiesWithError:(id*)arg1 ;
-(HDDatabaseValueCache *)devicesByPersistentID;
-(void)setDevicesByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(HDDatabaseValueCache *)deviceEntitiesByDevice;
-(void)setDeviceEntitiesByDevice:(HDDatabaseValueCache *)arg1 ;
-(id)init;
@end

