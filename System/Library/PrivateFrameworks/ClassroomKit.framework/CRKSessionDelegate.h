/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKSessionDelegate <NSObject>
@required
-(void)sessionDidDisconnect:(id)arg1;
-(id)clientIdentityForSession:(id)arg1;
-(id)trustedAnchorCertificatesForSession:(id)arg1;
-(void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
-(void)sessionDidLoseBeacon:(id)arg1;
-(void)sessionDidBecomeConnectable:(id)arg1;
-(void)sessionDidBecomeNotConnectable:(id)arg1;
-(void)session:(id)arg1 didConnectWithTransport:(id)arg2;
-(void)sessionDidInvalidate:(id)arg1;

@end

