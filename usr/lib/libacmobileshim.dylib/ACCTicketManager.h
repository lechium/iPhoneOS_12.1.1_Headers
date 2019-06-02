/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACCTicketManagerProtocol.h>

@class NSString;

@interface ACCTicketManager : NSObject <ACCTicketManagerProtocol> {

	Class _ssoTokenClass;
	Class _authContextClass;

}

@property (nonatomic,readonly) id<ACCSSOTGTStoragePolicy> tgtStoragePolicy; 
@property (nonatomic,retain) Class ssoTokenClass;                                        //@synthesize ssoTokenClass=_ssoTokenClass - In the implementation block
@property (nonatomic,retain) Class authContextClass;                                     //@synthesize authContextClass=_authContextClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)clientID;
-(id)deviceIdentifier;
-(id)setPublicKeyWithCertificate:(SecCertificateRef)arg1 version:(id)arg2 forRealm:(id)arg3 ;
-(SecKeyRef)publicKeyForRealm:(id)arg1 ;
-(id)envelopeWithContext:(id)arg1 publicKey:(SecKeyRef)arg2 ;
-(id)encryptionKeyWithRandomKey:(id)arg1 ;
-(id)encryptSourceTokenWithSourceTokenData:(id)arg1 encryptionKey:(id)arg2 initializationVector:(id)arg3 ;
-(id)tokenDataHMACForRandomKey:(id)arg1 sourceTokenData:(id)arg2 ;
-(id)envelopEncryptedSourceToken:(id)arg1 dsKeyVersion:(id)arg2 encryptedRandomKey:(id)arg3 initializationVector:(id)arg4 tokenDataHMAC:(id)arg5 tokenVersion:(id)arg6 ;
-(Class)authContextClass;
-(id)createNonceString;
-(void)updateContextEncryptionHash:(id)arg1 withKeyCode:(id)arg2 ;
-(Class)ssoTokenClass;
-(id)prepareToken:(id)arg1 withTGTInfo:(id)arg2 ;
-(void)prepareTokenFor2SV:(id)arg1 withVerificationCode:(id)arg2 tgtInfo:(id)arg3 ;
-(id)serviceTicketPrefix;
-(BOOL)hasValidPublicKeyForRealm:(id)arg1 ;
-(BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3 ;
-(void)uninstallPublicKeyForRealm:(id)arg1 ;
-(id)envelopeWithContext:(id)arg1 ;
-(id)authContextWithRequest:(id)arg1 ;
-(id)authContextWithRequest:(id)arg1 keyCode:(id)arg2 authenticationType:(id)arg3 ;
-(id)authContextWithRequest:(id)arg1 sessionToken:(id)arg2 ;
-(id)decryptEncryptedContent:(id)arg1 withHmac:(id)arg2 context:(id)arg3 ;
-(id)createSSOTokenWithContent:(id)arg1 context:(id)arg2 ;
-(BOOL)storeSSOToken:(id)arg1 ;
-(id)fetchSSOTokenForPrincipal:(id)arg1 ;
-(id)fetchSSOTokenForPrincipal:(id)arg1 agedLessThan:(double)arg2 ;
-(id)changePasswordContextWithRequest:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3 ;
-(id)serviceTicketStringWithRequest:(id)arg1 ssoToken:(id)arg2 ;
-(void)updateContextWithClientSecretIfAny:(id)arg1 ;
-(id)defaultPublicKeyVersionForRealm:(id)arg1 ;
-(id)twoSVPersonIDForPrincipal:(id)arg1 ;
-(id)twoSVSecretForPrincipal:(id)arg1 ;
-(id)twoSVCreateDateForPrincipal:(id)arg1 ;
-(void)tokenDidReceive2SVSecret:(id)arg1 ;
-(id)tokenVersion;
-(id)cryptograph;
-(id)certificateStoragePolicy;
-(SecCertificateRef)certificateFromString:(id)arg1 ;
-(SecCertificateRef)certificateForRealm:(id)arg1 ;
-(SecCertificateRef)defaultPublicKeyCertificateForRealm:(id)arg1 ;
-(id)certificateLabelForRealm:(id)arg1 ;
-(id)publicKeyVersionForRealm:(id)arg1 ;
-(void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3 ;
-(id<ACCSSOTGTStoragePolicy>)tgtStoragePolicy;
-(void)setAuthContextClass:(Class)arg1 ;
-(void)setSsoTokenClass:(Class)arg1 ;
-(void)dealloc;
-(id)identifier;
@end

