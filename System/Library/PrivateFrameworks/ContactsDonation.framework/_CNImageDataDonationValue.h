/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/CNDonationValue.h>

@class NSData;

@interface _CNImageDataDonationValue : CNDonationValue {

	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithImageData:(id)arg1 origin:(id)arg2 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
-(NSData *)imageData;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

