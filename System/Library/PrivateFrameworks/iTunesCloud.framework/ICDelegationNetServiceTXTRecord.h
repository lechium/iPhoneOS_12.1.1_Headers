/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying> {

	NSArray* _delegationAccountUUIDs;
	NSString* _deviceName;
	long long _securityMode;
	long long _serviceVersion;

}

@property (nonatomic,copy) NSArray * delegationAccountUUIDs;              //@synthesize delegationAccountUUIDs=_delegationAccountUUIDs - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long securityMode;                      //@synthesize securityMode=_securityMode - In the implementation block
@property (assign,nonatomic) long long serviceVersion;                    //@synthesize serviceVersion=_serviceVersion - In the implementation block
@property (nonatomic,copy,readonly) NSData * TXTRecordData; 
-(void)setServiceVersion:(long long)arg1 ;
-(long long)serviceVersion;
-(NSData *)TXTRecordData;
-(void)setDelegationAccountUUIDs:(NSArray *)arg1 ;
-(long long)securityMode;
-(void)setSecurityMode:(long long)arg1 ;
-(NSArray *)delegationAccountUUIDs;
-(id)initWithTXTRecordData:(id)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
