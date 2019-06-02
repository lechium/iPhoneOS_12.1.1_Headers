/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDSRTPCryptoSuite : HMDNumberParser <NSSecureCoding> {

	unsigned long long _srtpCryptoSuite;

}

@property (nonatomic,readonly) unsigned long long srtpCryptoSuite;              //@synthesize srtpCryptoSuite=_srtpCryptoSuite - In the implementation block
+(id)arrayWithSuites:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)srtpCryptoSuite;
-(id)initWithCryptoSuite:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

