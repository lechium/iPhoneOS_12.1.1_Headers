/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@protocol OS_dispatch_queue, MapsSuggestionsLocationUpdaterDelegate;
@class NSObject, CLLocationManager, CLLocation, NSString;

@interface MapsSuggestionsDualLocationUpdater : NSObject <CLLocationManagerDelegate, MapsSuggestionsObject, MapsSuggestionsLocationUpdater> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _running;
	CLLocationManager* _locationManagerForUpdating;
	CLLocationManager* _locationManagerForLeeching;
	CLLocation* _lastBestLocation;
	id<MapsSuggestionsLocationUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) BOOL running;                                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManagerForUpdating;                          //@synthesize locationManagerForUpdating=_locationManagerForUpdating - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManagerForLeeching;                          //@synthesize locationManagerForLeeching=_locationManagerForLeeching - In the implementation block
@property (nonatomic,retain) CLLocation * lastBestLocation;                                           //@synthesize lastBestLocation=_lastBestLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsLocationUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)defaultLocationUpdater;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)startLocationUpdatesForDelegate:(id)arg1 ;
-(void)stopLocationUpdatesForDelegate:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg1 ;
-(void)_initLocationManagers;
-(CLLocationManager *)locationManagerForUpdating;
-(void)setLocationManagerForUpdating:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManagerForLeeching;
-(void)setLocationManagerForLeeching:(CLLocationManager *)arg1 ;
-(CLLocation *)lastBestLocation;
-(void)setLastBestLocation:(CLLocation *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<MapsSuggestionsLocationUpdaterDelegate>)arg1 ;
-(id<MapsSuggestionsLocationUpdaterDelegate>)delegate;
-(void)_start;
-(void)_stop;
-(NSString *)uniqueName;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
@end
