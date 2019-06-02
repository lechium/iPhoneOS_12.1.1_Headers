/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMMediaProfileDelegate;
@class HMMediaSession, NSString;

@interface _HMMediaProfile : _HMAccessoryProfile {

	HMMediaSession* _mediaSession;
	NSString* _routeUID;
	id<_HMMediaProfileDelegate> _delegate;

}

@property (retain) HMMediaSession * mediaSession;                     //@synthesize mediaSession=_mediaSession - In the implementation block
@property (readonly) NSString * routeUID;                             //@synthesize routeUID=_routeUID - In the implementation block
@property (__weak) id<_HMMediaProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)_notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(HMMediaSession *)mediaSession;
-(void)setMediaSession:(HMMediaSession *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HMMediaProfileDelegate>)arg1 ;
-(id<_HMMediaProfileDelegate>)delegate;
@end

