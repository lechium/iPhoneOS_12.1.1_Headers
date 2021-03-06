/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface VSFailable : NSObject <NSSecureCoding> {

	long long _kind;
	id _object;
	NSError* _error;

}

@property (assign,nonatomic) long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSError * error;               //@synthesize error=_error - In the implementation block
+(Class)objectClass;
+(id)failableWithObject:(id)arg1 ;
+(id)failableWithError:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id)arg1 ;
-(void)unwrapObject:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)object;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

