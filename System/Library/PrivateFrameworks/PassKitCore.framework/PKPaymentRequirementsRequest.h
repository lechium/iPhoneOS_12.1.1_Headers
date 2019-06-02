/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentCredential, NSString;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest {

	PKPaymentCredential* _paymentCredential;
	NSString* _cardholderName;
	NSString* _primaryAccountNumber;
	NSString* _referrerIdentifier;

}

@property (nonatomic,retain) PKPaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                              //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumber;                        //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                          //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
-(NSString *)referrerIdentifier;
-(id)_cardDictionary;
-(id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(NSString *)primaryAccountNumber;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(id)initWithPaymentCredential:(id)arg1 ;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
-(PKPaymentCredential *)paymentCredential;
@end
