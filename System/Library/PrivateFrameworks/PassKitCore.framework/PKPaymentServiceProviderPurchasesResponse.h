/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentServiceProviderPurchasesResponse : PKPaymentWebServiceResponse {

	NSArray* _purchases;

}

@property (nonatomic,copy,readonly) NSArray * purchases;              //@synthesize purchases=_purchases - In the implementation block
-(NSArray *)purchases;
-(id)initWithData:(id)arg1 ;
@end
