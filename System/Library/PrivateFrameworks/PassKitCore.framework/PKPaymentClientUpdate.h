/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding> {

	NSArray* _paymentSummaryItems;
	NSArray* _shippingMethods;
	long long _status;
	NSString* _selectedAID;

}

@property (nonatomic,readonly) NSArray * paymentSummaryItems;              //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,readonly) NSArray * shippingMethods;                  //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * selectedAID;                     //@synthesize selectedAID=_selectedAID - In the implementation block
+(id)paymentUpdateResponseWithProtobuf:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 status:(long long)arg3 selectedAID:(id)arg4 ;
-(id)protobuf;
-(NSArray *)paymentSummaryItems;
-(NSString *)selectedAID;
-(NSArray *)shippingMethods;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
@end

