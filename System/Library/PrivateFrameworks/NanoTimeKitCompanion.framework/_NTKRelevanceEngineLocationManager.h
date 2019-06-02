/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <RelevanceEngine/RELocationManager.h>

@class NTKLocationManager;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {

	NTKLocationManager* _locationManager;
	NSString* _token;

}
-(id)currentLocation;
-(id)initWithLocationManager:(id)arg1 ;
-(void)stopLocationUpdates;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
@end
