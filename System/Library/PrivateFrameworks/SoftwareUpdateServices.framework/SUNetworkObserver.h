/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUNetworkObserver <NSObject>
@optional
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
-(void)cellularRoamingStatusChanged:(BOOL)arg1;
-(void)carrierBundleChanged;
-(void)operatorBundleChanged;

@end

