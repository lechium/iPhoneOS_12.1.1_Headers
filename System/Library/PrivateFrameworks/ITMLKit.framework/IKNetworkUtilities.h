/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences, NSString;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {

	id _isNetworkTypeChangedToken;
	id _networkReachabilityChangedToken;
	RadiosPreferences* _radioPrefs;

}

@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled; 
@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
+(id)sharedInstance;
-(NSString *)networkType;
-(void)airplaneModeChanged;
-(double)lastNetworkChangedTime;
-(BOOL)isNetworkReachable;
-(void)_notifyObservers;
-(BOOL)isAirplaneModeEnabled;
-(id)init;
-(void)dealloc;
@end

