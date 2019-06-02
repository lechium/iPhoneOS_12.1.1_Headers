/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString;


@protocol FMDIdentityAttesting <NSObject,NSSecureCoding>
@property (nonatomic,readonly) NSData * attestation; 
@property (nonatomic,readonly) NSData * signature; 
@property (nonatomic,readonly) NSString * sessionIdentifier; 
@required
-(NSData *)signature;
-(NSData *)attestation;
-(NSString *)sessionIdentifier;

@end

