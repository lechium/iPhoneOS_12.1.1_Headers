/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class CBPeripheralManager, NSString;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {

	CBPeripheralManager* peripheralManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(BOOL)isAdvertising;
-(BOOL)isLECapableHardware;
-(void)advertiseMIDIService;
-(void)stopAdvertisingMIDIService;
-(id)init;
-(void)dealloc;
@end

