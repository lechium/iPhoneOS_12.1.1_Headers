/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSObject;

@interface TKPowerMonitor : NSObject {

	IONotificationPortRef _portRef;
	unsigned _handle;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _awaken;
	unsigned _kernelPort;

}

@property (assign) unsigned kernelPort;              //@synthesize kernelPort=_kernelPort - In the implementation block
@property (assign) BOOL awaken;                      //@synthesize awaken=_awaken - In the implementation block
+(id)defaultMonitor;
-(unsigned)kernelPort;
-(void)setKernelPort:(unsigned)arg1 ;
-(BOOL)awaken;
-(void)setAwaken:(BOOL)arg1 ;
-(id)init;
@end
