/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAvailableProductsRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsPreferredLanguageRequest : PKPaymentAvailableProductsRequest {

	NSString* _preferredLanguage;

}

@property (nonatomic,copy) NSString * preferredLanguage;              //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithType:(id)arg1 preferredLanguage:(id)arg2 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(NSString *)preferredLanguage;
@end

