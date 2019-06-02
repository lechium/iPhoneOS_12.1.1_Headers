/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACFCryptographProtocol, ACFKeychainManagerProtocol, ACFCertificateStoragePolicy;
@interface ACFComponents : NSObject {

	id<ACFCryptographProtocol> _cryptograph;
	id<ACFKeychainManagerProtocol> _keychainManager;
	id<ACFCertificateStoragePolicy> _certificateStoragePolicy;
	Class _transportClass;
	Class _localAuthenticationContextClass;

}

@property (nonatomic,retain) id<ACFCryptographProtocol> cryptograph;                                //@synthesize cryptograph=_cryptograph - In the implementation block
@property (nonatomic,retain) id<ACFKeychainManagerProtocol> keychainManager;                        //@synthesize keychainManager=_keychainManager - In the implementation block
@property (nonatomic,retain) id<ACFCertificateStoragePolicy> certificateStoragePolicy;              //@synthesize certificateStoragePolicy=_certificateStoragePolicy - In the implementation block
@property (nonatomic,retain) Class transportClass;                                                  //@synthesize transportClass=_transportClass - In the implementation block
@property (nonatomic,retain) Class localAuthenticationContextClass;                                 //@synthesize localAuthenticationContextClass=_localAuthenticationContextClass - In the implementation block
+(void)setComponents:(id)arg1 ;
+(id)defaultComponents;
+(id)components;
-(id)createTransport;
-(id<ACFCryptographProtocol>)cryptograph;
-(Class)transportClass;
-(Class)localAuthenticationContextClass;
-(id)createLocalAuthenticationContext;
-(id<ACFCertificateStoragePolicy>)certificateStoragePolicy;
-(void)setTransportClass:(Class)arg1 ;
-(void)setCryptograph:(id<ACFCryptographProtocol>)arg1 ;
-(void)setCertificateStoragePolicy:(id<ACFCertificateStoragePolicy>)arg1 ;
-(void)setLocalAuthenticationContextClass:(Class)arg1 ;
-(id<ACFKeychainManagerProtocol>)keychainManager;
-(void)setKeychainManager:(id<ACFKeychainManagerProtocol>)arg1 ;
-(void)dealloc;
@end

