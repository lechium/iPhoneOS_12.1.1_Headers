/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class NSString;

@interface CertUIPrompt : NSObject {

	SecTrustRef _trust;
	NSString* _host;
	NSString* _service;
	NSString* _connectionDisplayName;
	/*^block*/id _responseBlock;

}

@property (nonatomic,retain) NSString * host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)stringForResponse:(int)arg1 ;
+(id)promptQueue;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSString *)connectionDisplayName;
-(id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3 ;
-(id)_titleFromTrust:(SecTrustRef)arg1 ;
-(id)_issuerFromTrust:(SecTrustRef)arg1 ;
-(id)_subtitleFromTrust:(SecTrustRef)arg1 ;
-(id)_purposeFromTrustProperties:(id)arg1 ;
-(id)_expirationFromTrust:(SecTrustRef)arg1 ;
-(BOOL)_isRootCertificateFromTrust:(SecTrustRef)arg1 ;
-(id)_digestFromTrust:(SecTrustRef)arg1 ;
-(int)_sendRemoteMessageWithPromptOptions:(id)arg1 ;
-(id)_newUserInfoWithHostname:(id)arg1 trust:(SecTrustRef)arg2 options:(id)arg3 ;
-(id)_messagingCenter;
-(int)_responseFromReplyDict:(id)arg1 ;
-(int)_sendRemoteMessage;
-(void)_informConsumerOfResponse:(int)arg1 ;
-(int)showAndWaitForResponse;
-(void)setConnectionDisplayName:(NSString *)arg1 ;
-(void)setTrust:(SecTrustRef)arg1 ;
-(void)showPromptWithOptions:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(SecTrustRef)trust;
-(id)_sendablePropertiesFromTrust:(SecTrustRef)arg1 ;
-(id)_sendablePropertiesFromProperties:(id)arg1 ;
-(id)_sendablePropertyFromProperty:(id)arg1 ;
-(id)_copyPropertiesFromTrust:(SecTrustRef)arg1 ;
-(void)showPromptWithResponseBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)host;
@end

