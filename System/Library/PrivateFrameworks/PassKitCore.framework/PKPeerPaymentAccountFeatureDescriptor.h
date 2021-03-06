/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSArray;

@interface PKPeerPaymentAccountFeatureDescriptor : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _maximumAmount;
	NSString* _merchantIdentifier;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;

}

@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumAmount;                        //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumAmount;                        //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                          //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                            //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;              //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1 ;
-(void)setMinimumAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaximumAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSArray *)supportedNetworks;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(unsigned long long)merchantCapabilities;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(NSDecimalNumber *)maximumAmount;
-(NSDecimalNumber *)minimumAmount;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

