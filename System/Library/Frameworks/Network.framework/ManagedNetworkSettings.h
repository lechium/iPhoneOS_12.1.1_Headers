/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ManagedNetworkSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedMNS;
-(void)reloadNetworkdSettings;
-(void)reloadMNS;
-(BOOL)updateSettingsFromCarrierFile:(id)arg1 prefix:(id)arg2 settings:(id)arg3 ;
-(void)reloadCarrierSettings:(BOOL)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)handleEvent:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
