/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSData;

@interface WLSRPServer : NSObject {

	srp_st* _session;
	NSData* _salt_s;
	NSData* _serverPublicKey_B;
	NSData* _sharedKey_K;
	NSData* _hashOfProofOfMatch_HAMK;

}

@property (nonatomic,readonly) NSData * salt_s;                               //@synthesize salt_s=_salt_s - In the implementation block
@property (nonatomic,readonly) NSData * serverPublicKey_B;                    //@synthesize serverPublicKey_B=_serverPublicKey_B - In the implementation block
@property (nonatomic,readonly) NSData * sharedKey_K;                          //@synthesize sharedKey_K=_sharedKey_K - In the implementation block
@property (nonatomic,readonly) NSData * hashOfProofOfMatch_HAMK;              //@synthesize hashOfProofOfMatch_HAMK=_hashOfProofOfMatch_HAMK - In the implementation block
-(id)hmacDataForData:(id)arg1 ;
-(BOOL)didReceiveClientPublicKey_A:(id)arg1 proofOfMatch_M:(id)arg2 ;
-(BOOL)isHmacData:(id)arg1 validForData:(id)arg2 ;
-(NSData *)salt_s;
-(NSData *)serverPublicKey_B;
-(NSData *)sharedKey_K;
-(NSData *)hashOfProofOfMatch_HAMK;
-(void)dealloc;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
@end

