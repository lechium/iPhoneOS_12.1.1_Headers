/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, CLLocation;

@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {

	NSString* _merchantCode;
	NSString* _rawMerchantCode;
	NSString* _paymentNetwork;
	NSString* _industryCategory;
	NSNumber* _industryCode;
	NSDate* _transactionDate;
	CLLocation* _transactionLocation;

}

@property (nonatomic,copy) NSString * merchantCode;                         //@synthesize merchantCode=_merchantCode - In the implementation block
@property (nonatomic,copy) NSString * rawMerchantCode;                      //@synthesize rawMerchantCode=_rawMerchantCode - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                       //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSString * industryCategory;                     //@synthesize industryCategory=_industryCategory - In the implementation block
@property (nonatomic,retain) NSNumber * industryCode;                       //@synthesize industryCode=_industryCode - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                      //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,retain) CLLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
-(CLLocation *)transactionLocation;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(void)setMerchantCode:(NSString *)arg1 ;
-(void)setTransactionLocation:(CLLocation *)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(void)setIndustryCode:(NSNumber *)arg1 ;
-(NSString *)paymentNetwork;
-(NSString *)merchantCode;
-(NSString *)rawMerchantCode;
-(NSString *)industryCategory;
-(NSNumber *)industryCode;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

