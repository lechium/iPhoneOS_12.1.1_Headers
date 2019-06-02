/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VSOptional : NSObject <NSSecureCoding> {

	id _object;

}

@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
+(id)optionalWithObject:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 otherwise:(/*^block*/id)arg2 ;
-(id)forceUnwrapObject;
-(id)unwrapWithFallback:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end

