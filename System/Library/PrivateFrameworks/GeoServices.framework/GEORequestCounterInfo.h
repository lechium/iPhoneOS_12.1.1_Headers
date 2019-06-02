/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding> {

	NSDictionary* _dict;

}

@property (nonatomic,readonly) NSArray * requestTypes; 
@property (nonatomic,readonly) NSArray * requestModes; 
+(id)counterInfoWithDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_formattedString;
-(unsigned long long)xmitBytes;
-(unsigned long long)recvBytes;
-(unsigned long long)xmitBytesForType:(unsigned char)arg1 ;
-(unsigned long long)recvBytesForType:(unsigned char)arg1 ;
-(unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2 ;
-(unsigned long long)xmitBytesForMode:(unsigned char)arg1 ;
-(unsigned long long)recvBytesForMode:(unsigned char)arg1 ;
-(unsigned long long)numberOfRequestsForMode:(unsigned char)arg1 result:(unsigned char)arg2 ;
-(NSArray *)requestTypes;
-(NSArray *)requestModes;
-(id)nonZeroResultTypesForType:(unsigned char)arg1 ;
-(id)nonZeroResultModesForMode:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end
