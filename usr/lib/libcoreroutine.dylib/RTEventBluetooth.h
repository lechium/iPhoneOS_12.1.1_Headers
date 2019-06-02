/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventBluetooth : RTEvent <NSSecureCoding> {

	NSString* _deviceIdentifier;
	NSString* _deviceName;
	long long _bluetoothState;
	long long _deviceType;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                    //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,readonly) long long deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
+(id)stringFromBluetoothState:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(NSString *)deviceName;
-(long long)deviceType;
-(long long)bluetoothState;
-(id)initWithBluetoothState:(long long)arg1 deviceType:(long long)arg2 deviceName:(id)arg3 hardwareAddress:(id)arg4 source:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

