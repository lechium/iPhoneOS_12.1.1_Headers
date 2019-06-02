/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TURoute.h>

@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute {

	NSString* _avAudioRouteName;
	NSDictionary* _route;

}

@property (nonatomic,copy,readonly) NSString * avAudioRouteName;                                         //@synthesize avAudioRouteName=_avAudioRouteName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bluetoothProductIdentifier; 
@property (getter=isHeadphoneJackConnected,nonatomic,readonly) BOOL headphoneJackConnected; 
@property (nonatomic,copy,readonly) NSDictionary * route;                                                //@synthesize route=_route - In the implementation block
-(NSDictionary *)route;
-(BOOL)isCurrentlyPicked;
-(BOOL)isReceiver;
-(BOOL)isDefaultRoute;
-(BOOL)isWiredHeadphones;
-(BOOL)isWiredHeadset;
-(BOOL)isWirelessHeadset;
-(BOOL)isAirTunes;
-(BOOL)isCarAudio;
-(BOOL)isBluetooth;
-(BOOL)isBluetoothLE;
-(long long)bluetoothEndpointType;
-(BOOL)isPreferredAndActive;
-(BOOL)supportsPreferredAndActive;
-(id)identifiersOfOtherConnectedDevices;
-(NSString *)avAudioRouteName;
-(BOOL)isHeadphoneJackConnected;
-(BOOL)_routeTypeEqualTo:(id)arg1 ;
-(NSString *)bluetoothProductIdentifier;
-(BOOL)isHandset;
-(BOOL)isSpeaker;
-(long long)deviceType;
-(BOOL)isPreferred;
-(id)initWithDictionary:(id)arg1 ;
@end
