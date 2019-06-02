/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _methodName;
	NSString* _bagKey;
	NSDictionary* _parameters;
	VSAuditToken* _auditToken;

}

@property (nonatomic,copy) NSString * methodName;                    //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                        //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSString *)bagKey;
-(NSString *)methodName;
-(void)setBagKey:(NSString *)arg1 ;
-(void)setMethodName:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(VSAuditToken *)auditToken;
@end
