/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding> {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,copy) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToPKServiceProviderPurchaseData:(id)arg1 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

