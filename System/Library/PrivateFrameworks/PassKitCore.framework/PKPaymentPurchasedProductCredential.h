/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKPaymentSetupProduct, NSString, PKServiceProviderPurchase, NSArray;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential {

	PKPaymentSetupProduct* _product;
	NSString* _productIdentifier;
	PKServiceProviderPurchase* _purchase;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                           //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase;                    //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
@property (nonatomic,copy,readonly) NSString * statusDescription; 
@property (nonatomic,copy,readonly) NSString * summaryMetadataDescription; 
-(NSString *)productIdentifier;
-(id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 ;
-(NSString *)statusDescription;
-(PKServiceProviderPurchase *)purchase;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setRequirementsResponse:(id)arg1 ;
-(NSString *)summaryMetadataDescription;
-(NSArray *)metadata;
@end
