/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXHADeviceControllerProtocol <NSObject>
@required
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1;
-(void)stopPropertyUpdates;

@end

