/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentAccount, NSString, NSArray;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse {

	BOOL _complete;
	BOOL _manuallyTriggered;
	PKPeerPaymentAccount* _account;
	NSString* _contextLocalizedTitle;
	NSString* _contextLocalizedDescription;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSArray* _requiredFieldsByPage;
	NSArray* _acceptableDocuments;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,readonly) BOOL complete;                                            //@synthesize complete=_complete - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextLocalizedTitle;                    //@synthesize contextLocalizedTitle=_contextLocalizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextLocalizedDescription;              //@synthesize contextLocalizedDescription=_contextLocalizedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                           //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredFieldsByPage;                      //@synthesize requiredFieldsByPage=_requiredFieldsByPage - In the implementation block
@property (nonatomic,readonly) NSArray * acceptableDocuments;                            //@synthesize acceptableDocuments=_acceptableDocuments - In the implementation block
@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;                    //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                        //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (assign,nonatomic) BOOL manuallyTriggered;                                     //@synthesize manuallyTriggered=_manuallyTriggered - In the implementation block
-(PKPeerPaymentAccount *)account;
-(NSString *)contextLocalizedTitle;
-(NSString *)contextLocalizedDescription;
-(BOOL)manuallyTriggered;
-(void)setManuallyTriggered:(BOOL)arg1 ;
-(NSArray *)encryptionCertificates;
-(NSArray *)requiredFieldsByPage;
-(NSArray *)acceptableDocuments;
-(NSString *)encryptionVersion;
-(NSString *)localizedTitle;
-(BOOL)complete;
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
@end

