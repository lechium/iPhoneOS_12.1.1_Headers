/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCController.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GCNamedProfile, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface _GCController : GCController <NSSecureCoding> {

	/*^block*/id _controllerPausedHandler;
	NSString* _vendorName;
	long long _playerIndex;
	id<GCNamedProfile> _profile;
	NSMutableArray* _hidServices;
	unsigned _service;
	unsigned long long _deviceHash;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	BOOL physicalDeviceUsesCompass;
	NSString* physicalDeviceUniqueID;

}
+(BOOL)supportsSecureCoding;
-(id)physicalDeviceUniqueID;
-(id)vendorName;
-(unsigned)service;
-(id)extendedGamepad;
-(id)gamepad;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(unsigned long long)deviceHash;
-(id)motion;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)setPhysicalDeviceUniqueID:(id)arg1 ;
-(BOOL)physicalDeviceUsesCompass;
-(void)setPhysicalDeviceUsesCompass:(BOOL)arg1 ;
-(void)addServiceRefs:(id)arg1 ;
-(void)clearServiceRef;
-(/*^block*/id)controllerPausedHandler;
-(id)microGamepad;
-(void)setControllerPausedHandler:(/*^block*/id)arg1 ;
-(BOOL)isAttachedToDevice;
-(BOOL)isEqualToController:(id)arg1 ;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)profile;
-(void)setProfile:(id)arg1 ;
-(void)setHandlerQueue:(id)arg1 ;
-(id)handlerQueue;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
