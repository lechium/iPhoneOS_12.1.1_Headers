/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/SFTrustPolicy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {

	id _sslServerTrustPolicyInternal;

}

@property (nonatomic,copy) NSString * serverName; 
+(BOOL)supportsSecureCoding;
-(void)setServerName:(NSString *)arg1 ;
-(id)initWithServerName:(id)arg1 ;
-(NSString *)serverName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

