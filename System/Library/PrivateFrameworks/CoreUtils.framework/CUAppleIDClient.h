/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSData, NSDictionary, NSString, NSArray;

@interface CUAppleIDClient : NSObject {

	SecCertificateRef _myCertificate;
	SecIdentityRef _myIdentity;
	_SecKey* _mySecretKey;
	NSData* _myValidationData;
	SecCertificateRef _peerCertificate;
	_SecKey* _peerPublicKey;
	BOOL _peerSignatureVerified;
	NSDictionary* _peerValidationDict;
	BOOL _peerValidated;
	int _securityLevel;
	NSString* _myAppleID;
	CUAppleIDClient* _myInfoClient;
	NSString* _peerAppleID;
	NSArray* _peerAppleIDs;
	NSData* _peerCertificateData;
	NSData* _peerValidationData;
	NSData* _myCertificateData;
	NSData* _mySecretKeyData;
	NSString* _mySecretKeyType;

}

@property (nonatomic,copy) NSData * myCertificateData;                    //@synthesize myCertificateData=_myCertificateData - In the implementation block
@property (nonatomic,copy) NSData * mySecretKeyData;                      //@synthesize mySecretKeyData=_mySecretKeyData - In the implementation block
@property (nonatomic,copy) NSString * mySecretKeyType;                    //@synthesize mySecretKeyType=_mySecretKeyType - In the implementation block
@property (nonatomic,copy) NSString * myAppleID;                          //@synthesize myAppleID=_myAppleID - In the implementation block
@property (nonatomic,retain) CUAppleIDClient * myInfoClient;              //@synthesize myInfoClient=_myInfoClient - In the implementation block
@property (nonatomic,copy) NSString * peerAppleID;                        //@synthesize peerAppleID=_peerAppleID - In the implementation block
@property (nonatomic,copy) NSArray * peerAppleIDs;                        //@synthesize peerAppleIDs=_peerAppleIDs - In the implementation block
@property (nonatomic,copy) NSData * peerCertificateData;                  //@synthesize peerCertificateData=_peerCertificateData - In the implementation block
@property (nonatomic,copy) NSData * peerValidationData;                   //@synthesize peerValidationData=_peerValidationData - In the implementation block
@property (nonatomic,readonly) int securityLevel; 
-(id)signBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validatePeerWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)_validatePeerHashes:(id)arg1 ;
-(BOOL)verifyData:(id)arg1 signature:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifyBytes:(const void*)arg1 verifyLength:(unsigned long long)arg2 signatureBytes:(const void*)arg3 signatureLength:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)copyMyAppleIDAndReturnError:(id*)arg1 ;
-(SecCertificateRef)_getMyCertificateAndReturnError:(id*)arg1 ;
-(id)copyMyCertificateDataAndReturnError:(id*)arg1 ;
-(SecIdentityRef)_getMyIdentityAndReturnError:(id*)arg1 ;
-(_SecKey*)_getMySecretKeyAndReturnError:(id*)arg1 ;
-(id)copyMyValidationDataAndReturnError:(id*)arg1 ;
-(SecCertificateRef)_getPeerCertificateAndReturnError:(id*)arg1 ;
-(_SecKey*)_getPeerPublicKeyAndReturnError:(id*)arg1 ;
-(CUAppleIDClient *)myInfoClient;
-(void)setMyInfoClient:(CUAppleIDClient *)arg1 ;
-(NSArray *)peerAppleIDs;
-(void)setPeerAppleIDs:(NSArray *)arg1 ;
-(NSData *)peerCertificateData;
-(void)setPeerCertificateData:(NSData *)arg1 ;
-(NSData *)peerValidationData;
-(void)setPeerValidationData:(NSData *)arg1 ;
-(NSData *)myCertificateData;
-(void)setMyCertificateData:(NSData *)arg1 ;
-(NSData *)mySecretKeyData;
-(void)setMySecretKeyData:(NSData *)arg1 ;
-(NSString *)mySecretKeyType;
-(void)setMySecretKeyType:(NSString *)arg1 ;
-(int)securityLevel;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(NSString *)myAppleID;
-(void)setMyAppleID:(NSString *)arg1 ;
-(NSString *)peerAppleID;
-(void)setPeerAppleID:(NSString *)arg1 ;
-(void)dealloc;
@end

