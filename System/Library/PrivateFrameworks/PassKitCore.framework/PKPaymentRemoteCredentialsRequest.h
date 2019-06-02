/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {

	BOOL _includeMetadata;
	long long _credentialType;

}

@property (assign,nonatomic) BOOL includeMetadata;                  //@synthesize includeMetadata=_includeMetadata - In the implementation block
@property (assign,nonatomic) long long credentialType;              //@synthesize credentialType=_credentialType - In the implementation block
-(void)setCredentialType:(long long)arg1 ;
-(void)setIncludeMetadata:(BOOL)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)includeMetadata;
-(long long)credentialType;
@end
