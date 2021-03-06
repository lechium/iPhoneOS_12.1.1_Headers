/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAAccessory;

@interface DSEADevice : NSObject {

	EAAccessory* _device;

}

@property (nonatomic,retain) EAAccessory * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithSerialNumber:(id)arg1 ;
+(id)deviceWithModelNumber:(id)arg1 ;
-(id)initWithModelNumber:(id)arg1 ;
-(EAAccessory *)device;
-(void)setDevice:(EAAccessory *)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)information;
@end

