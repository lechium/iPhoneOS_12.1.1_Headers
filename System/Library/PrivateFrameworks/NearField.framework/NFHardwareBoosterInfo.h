/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFHardwareBoosterInfo : NSObject <NSSecureCoding> {

	unsigned long long _siliconVersion;
	NSData* _staticConfig;
	NSData* _dynamicConfig;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;              //@synthesize siliconVersion=_siliconVersion - In the implementation block
@property (nonatomic,readonly) NSData * staticConfig;                          //@synthesize staticConfig=_staticConfig - In the implementation block
@property (nonatomic,readonly) NSData * dynamicConfig;                         //@synthesize dynamicConfig=_dynamicConfig - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(unsigned long long)siliconVersion;
-(NSData *)staticConfig;
-(NSData *)dynamicConfig;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

