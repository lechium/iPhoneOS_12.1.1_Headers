/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _wifi;
	long long _eapol;
	long long _bluetooth;

}

@property (assign,nonatomic) long long wifi;                   //@synthesize wifi=_wifi - In the implementation block
@property (assign,nonatomic) long long eapol;                  //@synthesize eapol=_eapol - In the implementation block
@property (assign,nonatomic) long long bluetooth;              //@synthesize bluetooth=_bluetooth - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setWifi:(long long)arg1 ;
-(long long)wifi;
-(void)setBluetooth:(long long)arg1 ;
-(long long)bluetooth;
-(long long)eapol;
-(BOOL)isEqualToDebugConfiguration:(id)arg1 ;
-(void)setEapol:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

