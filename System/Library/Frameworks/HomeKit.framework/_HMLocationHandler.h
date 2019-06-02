/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSThread, CLLocationManager, NSObject, NSHashTable;

@interface _HMLocationHandler : NSObject <CLLocationManagerDelegate> {

	int _locationAuthorization;
	NSString* _effectiveLocationBundleIdentifier;
	NSThread* _myThread;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSHashTable* _locationAuthorizationDelegates;

}

@property (assign,nonatomic) int locationAuthorization;                                 //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) NSThread * myThread;                                       //@synthesize myThread=_myThread - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                       //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * locationAuthorizationDelegates;              //@synthesize locationAuthorizationDelegates=_locationAuthorizationDelegates - In the implementation block
@property (nonatomic,retain) NSString * effectiveLocationBundleIdentifier;              //@synthesize effectiveLocationBundleIdentifier=_effectiveLocationBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHandler;
-(void)createLocationManager;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)addLocationAuthorizationDelegate:(id)arg1 ;
-(NSThread *)myThread;
-(void)setMyThread:(NSThread *)arg1 ;
-(void)_initializeLocationProperties;
-(NSHashTable *)locationAuthorizationDelegates;
-(void)setEffectiveLocationBundleIdentifier:(NSString *)arg1 ;
-(void)setLocationAuthorizationDelegates:(NSHashTable *)arg1 ;
-(CLLocationManager *)locationManager;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)effectiveLocationBundleIdentifier;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(id)init;
@end

