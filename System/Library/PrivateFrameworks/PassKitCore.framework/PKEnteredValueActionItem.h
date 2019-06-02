/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSArray, NSString, NSDictionary;

@interface PKEnteredValueActionItem : NSObject <NSSecureCoding> {

	BOOL _maxAmountIncludesLocalBalance;
	NSDecimalNumber* _minLoadAmount;
	NSDecimalNumber* _maxLoadAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;
	NSArray* _defaultSuggestions;
	NSString* _currency;
	NSDictionary* _serviceProviderData;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadAmount;                 //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadAmount;                 //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadedBalance;              //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadedBalance;              //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions;                    //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
@property (nonatomic,readonly) BOOL maxAmountIncludesLocalBalance;                   //@synthesize maxAmountIncludesLocalBalance=_maxAmountIncludesLocalBalance - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                             //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderData;              //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minAmount; 
@property (nonatomic,copy,readonly) NSDecimalNumber * maxAmount; 
+(BOOL)supportsSecureCoding;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(NSDecimalNumber *)minAmount;
-(NSDecimalNumber *)maxAmount;
-(BOOL)maxAmountIncludesLocalBalance;
-(NSString *)currency;
-(NSArray *)defaultSuggestions;
-(NSDictionary *)serviceProviderData;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

