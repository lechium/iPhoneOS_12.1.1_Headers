/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CARInputDeviceTouchpadDelegate.h>

@protocol CARSessionCommandDelegate;
@class NSArray, NSString;

@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate> {

	NSArray* _inputDevices;
	id<CARSessionCommandDelegate> _commandDelegate;

}

@property (nonatomic,__weak,readonly) id<CARSessionCommandDelegate> commandDelegate;              //@synthesize commandDelegate=_commandDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * inputDevices;                                            //@synthesize inputDevices=_inputDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 commandDelegate:(id)arg4 ;
-(void)vehicleInformationChanged:(id)arg1 ;
-(void)performHapticType:(unsigned long long)arg1 deviceUUID:(id)arg2 ;
-(id)_generateInputDevicesWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 ;
-(id)_touchpadSettingsFromVehicleInformation:(id)arg1 ;
-(void)_updateTouchpadSettings:(id)arg1 ;
-(void)_enumerateTouchpadsUsingBlock:(/*^block*/id)arg1 ;
-(id)_inputDeviceWithSenderID:(unsigned long long)arg1 ;
-(id<CARSessionCommandDelegate>)commandDelegate;
-(BOOL)touchpadCharacterRecognitionSupported;
-(id)_initWithInputDevices:(id)arg1 commandDelegate:(id)arg2 ;
-(NSString *)description;
-(id)touchpadWithSenderID:(unsigned long long)arg1 ;
-(NSArray *)inputDevices;
@end

