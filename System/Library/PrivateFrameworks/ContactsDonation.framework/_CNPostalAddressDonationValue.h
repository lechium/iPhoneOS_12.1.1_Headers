/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/CNDonationValue.h>

@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue : CNDonationValue {

	CNPostalAddress* _postalAddress;
	long long _style;
	NSString* _label;

}

@property (nonatomic,copy,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
-(CNPostalAddress *)postalAddress;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(long long)style;
-(NSString *)label;
@end
