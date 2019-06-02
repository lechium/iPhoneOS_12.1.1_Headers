/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject {

	BOOL _supportsInApp;
	NSString* _cardType;
	NSNumber* _cardTypeCode;
	NSString* _currentStatus;

}

@property (nonatomic,copy) NSString * cardType;                   //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy) NSNumber * cardTypeCode;               //@synthesize cardTypeCode=_cardTypeCode - In the implementation block
@property (nonatomic,copy) NSString * currentStatus;              //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsInApp;                  //@synthesize supportsInApp=_supportsInApp - In the implementation block
-(void)setCardType:(NSString *)arg1 ;
-(NSNumber *)cardTypeCode;
-(void)setCardTypeCode:(NSNumber *)arg1 ;
-(BOOL)supportsInApp;
-(void)setSupportsInApp:(BOOL)arg1 ;
-(NSString *)cardType;
-(void)setCurrentStatus:(NSString *)arg1 ;
-(NSString *)currentStatus;
-(id)initWithDictionary:(id)arg1 ;
@end

