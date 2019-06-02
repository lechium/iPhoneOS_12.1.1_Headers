/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRCDeviceQueryDelegate;
@class NSSet;

@interface TVRCDeviceQuery : NSObject {

	id<TVRCDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRCDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
+(id)_allDiscoveredDevices;
+(void)_allDiscoveredDevicesDidUpdate:(id)arg1 ;
-(NSSet *)devices;
-(void)dealloc;
-(void)setDelegate:(id<TVRCDeviceQueryDelegate>)arg1 ;
-(id<TVRCDeviceQueryDelegate>)delegate;
-(void)stop;
-(void)start;
@end
