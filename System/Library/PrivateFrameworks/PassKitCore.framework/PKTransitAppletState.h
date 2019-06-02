/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDecimalNumber, NSString, NSDate, NSArray, PKFelicaTransitAppletState;

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _blacklisted;
	BOOL _needsStationProcessing;
	NSNumber* _historySequenceNumber;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSString* _currency;
	NSDate* _expirationDate;
	NSArray* _enrouteTransitTypes;

}

@property (nonatomic,readonly) PKFelicaTransitAppletState * felicaState; 
@property (assign,getter=isBlacklisted,nonatomic) BOOL blacklisted;                   //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,copy) NSNumber * historySequenceNumber;                          //@synthesize historySequenceNumber=_historySequenceNumber - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                                 //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                                 //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,copy) NSString * currency;                                       //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSArray * enrouteTransitTypes;                             //@synthesize enrouteTransitTypes=_enrouteTransitTypes - In the implementation block
@property (assign,nonatomic) BOOL needsStationProcessing;                             //@synthesize needsStationProcessing=_needsStationProcessing - In the implementation block
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
+(BOOL)supportsSecureCoding;
-(NSArray *)enrouteTransitTypes;
-(void)setEnrouteTransitTypes:(NSArray *)arg1 ;
-(void)addEnrouteTransitType:(id)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(id)updatedEnrouteTransitTypesFromExistingTypes:(id)arg1 newTypes:(id)arg2 ;
-(BOOL)needsStationProcessing;
-(void)setNeedsStationProcessing:(BOOL)arg1 ;
-(NSNumber *)historySequenceNumber;
-(void)setHistorySequenceNumber:(NSNumber *)arg1 ;
-(void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id*)arg4 ephemeralTransaction:(id*)arg5 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 ;
-(PKFelicaTransitAppletState *)felicaState;
-(NSNumber *)loyaltyBalance;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransactions:(id*)arg3 ;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)isInStation;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg1 ;
-(BOOL)isBlacklisted;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

