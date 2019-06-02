/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DCCryptoProxy;
@class DCContext;

@interface DCDDeviceMetadata : NSObject {

	id<DCCryptoProxy> _cryptoProxy;
	DCContext* _context;

}
-(id)initWithContext:(id)arg1 cryptoProxy:(id)arg2 ;
-(void)generateEncryptedBlobWithCompletion:(/*^block*/id)arg1 ;
@end

