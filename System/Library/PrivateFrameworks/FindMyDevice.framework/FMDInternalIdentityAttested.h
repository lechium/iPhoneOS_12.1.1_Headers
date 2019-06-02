/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyDevice/FMDIdentityAttested.h>

@class NSData, NSString;

@interface FMDInternalIdentityAttested : FMDIdentityAttested {

	NSData* _attestation;
	NSData* _signature;
	NSString* _sessionIdentifier;

}

@property (nonatomic,retain) NSData * attestation;                      //@synthesize attestation=_attestation - In the implementation block
@property (nonatomic,retain) NSData * signature;                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)attestation;
-(void)setAttestation:(NSData *)arg1 ;
-(NSString *)sessionIdentifier;
@end
