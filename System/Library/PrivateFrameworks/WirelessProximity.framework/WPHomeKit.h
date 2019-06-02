/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPHomeKitDelegate;
@interface WPHomeKit : WPClient {

	id<WPHomeKitDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHomeKitDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)clientAsString;
-(SCD_Struct_WP0)dutyCycleToScanningRates:(long long)arg1 ;
-(unsigned char)clientTypeFromHomeKitType:(long long)arg1 ;
-(long long)homeKitTypeFromClientType:(unsigned char)arg1 ;
-(void)checkAllowDuplicate;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)startScanningWithData:(id)arg1 forType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<WPHomeKitDelegate>)arg1 ;
-(id<WPHomeKitDelegate>)delegate;
-(void)invalidate;
@end
