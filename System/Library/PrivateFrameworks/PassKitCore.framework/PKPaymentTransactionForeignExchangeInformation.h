/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class PKCurrencyAmount, NSDecimalNumber;

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	PKCurrencyAmount* _destinationCurrencyAmount;
	NSDecimalNumber* _exchangeRate;

}

@property (nonatomic,copy) PKCurrencyAmount * destinationCurrencyAmount;              //@synthesize destinationCurrencyAmount=_destinationCurrencyAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * exchangeRate;                            //@synthesize exchangeRate=_exchangeRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonDictionaryRepresentation;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)jsonString;
-(BOOL)isEqualToForeignExchangeInformation:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNames;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(PKCurrencyAmount *)destinationCurrencyAmount;
-(void)setDestinationCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSDecimalNumber *)exchangeRate;
-(void)setExchangeRate:(NSDecimalNumber *)arg1 ;
-(unsigned long long)itemType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
@end

