/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface WPZoneTrackingRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	BOOL _scanWhenScreenOff;
	NSMutableSet* _zones;
	SCD_Struct_WP1 _scanningRates;

}

@property (assign) unsigned char clientType;                  //@synthesize clientType=_clientType - In the implementation block
@property (assign) SCD_Struct_WP1 scanningRates;              //@synthesize scanningRates=_scanningRates - In the implementation block
@property (assign) BOOL scanWhenScreenOff;                    //@synthesize scanWhenScreenOff=_scanWhenScreenOff - In the implementation block
@property (retain) NSMutableSet * zones;                      //@synthesize zones=_zones - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setScanningRates:(SCD_Struct_WP1)arg1 ;
-(SCD_Struct_WP1)scanningRates;
-(BOOL)scanWhenScreenOff;
-(void)setScanWhenScreenOff:(BOOL)arg1 ;
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned char)clientType;
-(NSMutableSet *)zones;
-(void)setZones:(NSMutableSet *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

