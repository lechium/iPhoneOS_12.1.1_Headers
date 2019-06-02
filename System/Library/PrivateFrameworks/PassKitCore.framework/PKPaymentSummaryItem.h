/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _useDarkColor;
	NSString* _label;
	NSDecimalNumber* _amount;
	unsigned long long _type;
	NSString* _localizedAmount;

}

@property (nonatomic,retain) NSString * localizedAmount;              //@synthesize localizedAmount=_localizedAmount - In the implementation block
@property (assign,nonatomic) BOOL useDarkColor;                       //@synthesize useDarkColor=_useDarkColor - In the implementation block
@property (nonatomic,copy) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                  //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long type;                 //@synthesize type=_type - In the implementation block
+(id)itemWithProtobuf:(id)arg1 ;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3 ;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(long long)version;
-(id)protobuf;
-(void)setLocalizedAmount:(NSString *)arg1 ;
-(void)setUseDarkColor:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentSummaryItem:(id)arg1 ;
-(NSString *)localizedAmount;
-(BOOL)useDarkColor;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)label;
-(id)dictionaryRepresentation;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
@end
