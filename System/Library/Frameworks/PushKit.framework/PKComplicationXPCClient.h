/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKComplicationXPCClient
@optional
-(void)complicationRegistrationFailed;

@required
-(void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)complicationPayloadReceived:(id)arg1;

@end

