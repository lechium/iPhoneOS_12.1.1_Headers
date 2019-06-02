/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation {

	NSString* _address;
	NSString* _addressSHA1;
	NSString* _addressPrefix;
	BOOL _verified;

}

@property (nonatomic,retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * addressSHA1;                //@synthesize addressSHA1=_addressSHA1 - In the implementation block
@property (nonatomic,retain) NSString * addressPrefix;              //@synthesize addressPrefix=_addressPrefix - In the implementation block
@property (assign,nonatomic) BOOL verified;                         //@synthesize verified=_verified - In the implementation block
+(id)secureCodedPropertyKeys;
+(BOOL)supportsSecureCoding;
-(void)setAddress:(NSString *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(NSString *)address;
-(BOOL)verified;
-(NSString *)addressPrefix;
-(NSString *)addressSHA1;
-(void)setAddressSHA1:(NSString *)arg1 ;
-(void)setAddressPrefix:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

