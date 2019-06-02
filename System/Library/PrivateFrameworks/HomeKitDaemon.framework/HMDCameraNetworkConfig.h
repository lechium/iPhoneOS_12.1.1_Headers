/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraNetworkConfig : HMFObject <NSCopying> {

	SCD_Union_HM23 _ipv4SockAddress;
	SCD_Union_HM23 _ipv6SockAddress;
	BOOL _ipv6;
	NSString* _ipAddress;
	NSNumber* _rtpPort;

}

@property (nonatomic,retain) NSString * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign,nonatomic) BOOL ipv6;                         //@synthesize ipv6=_ipv6 - In the implementation block
@property (nonatomic,retain) NSNumber * rtpPort;                //@synthesize rtpPort=_rtpPort - In the implementation block
+(id)localIPAddress;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSNumber *)rtpPort;
-(id)initWithAddress:(id)arg1 ipv6:(BOOL)arg2 rtpPort:(id)arg3 ;
-(BOOL)ipv6;
-(void)setRtpPort:(NSNumber *)arg1 ;
-(void)setIpv6:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
