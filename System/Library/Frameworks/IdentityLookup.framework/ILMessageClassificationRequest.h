/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IdentityLookup/ILClassificationRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding> {

	NSArray* _messageCommunications;

}

@property (nonatomic,copy,readonly) NSArray * messageCommunications;              //@synthesize messageCommunications=_messageCommunications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithMessageCommunications:(id)arg1 ;
-(NSArray *)messageCommunications;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

