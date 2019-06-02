/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>

@protocol OS_dispatch_source;
@class NSArray, SSLookupRequest, CLLocationManager, NSObject, NSDictionary, SKUIClientContext, NSString;

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver> {

	NSArray* _items;
	long long _status;
	BOOL _isMonitoring;
	SSLookupRequest* _lookupRequest;
	CLLocationManager* _locationManager;
	int _authorizationStatus;
	NSObject*<OS_dispatch_source> _locationTimeoutTimer;
	long long _locationTimeoutCount;
	NSObject*<OS_dispatch_source> _refreshTimer;
	NSDictionary* _responseDictionary;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) long long status;                               //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(NSDictionary *)responseDictionary;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_startMonitoringLocation;
-(void)_disableNearMe;
-(void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(long long)arg4 ;
-(void)_lookupItemsForLocation:(id)arg1 ;
-(void)_stopRefreshTimer;
-(void)_monitorLocationTimeout;
-(void)_stopMonitoringLocation;
-(void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_refreshTimeout;
-(void)getItems;
-(void)disable;
-(BOOL)isNearMeLocationStatusEnabled;
-(void)_startRefreshTimer;
-(id)init;
-(NSArray *)items;
-(long long)status;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
