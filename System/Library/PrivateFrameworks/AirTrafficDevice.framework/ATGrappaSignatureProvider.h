/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSignatureProvider.h>

@class ATGrappaSession, ATDeviceSettings;

@interface ATGrappaSignatureProvider : ATSignatureProvider {

	ATGrappaSession* _grappaSession;
	ATDeviceSettings* _settings;

}
-(id)initWithGrappaSession:(id)arg1 ;
-(id)createSignature:(id*)arg1 forData:(id)arg2 ;
-(id)verifySignature:(id)arg1 forData:(id)arg2 ;
@end

