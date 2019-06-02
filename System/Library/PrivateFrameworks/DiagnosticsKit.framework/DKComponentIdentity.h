/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DKCanonicalVersion, NSString, NSSet;

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _domain;
	DKCanonicalVersion* _version;
	NSSet* _resources;

}

@property (nonatomic,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) DKCanonicalVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * resources;                         //@synthesize resources=_resources - In the implementation block
+(id)componentIdentityWithDomain:(NSString*)arg1 version:(NSString*)arg2 resources:(NSSet*)arg3 ;
+(id)componentIdentityWithType:(NSString*)arg1 identifier:(NSString*)arg2 version:(NSString*)arg3 resources:(NSSet*)arg4 ;
+(BOOL)supportsSecureCoding;
-(NSSet *)resources;
-(BOOL)isNewerThan:(id)arg1 ;
-(id)initWithDomain:(NSString*)arg1 version:(NSString*)arg2 resources:(NSSet*)arg3 ;
-(id)initWithType:(NSString*)arg1 identifier:(NSString*)arg2 version:(NSString*)arg3 resources:(NSSet*)arg4 ;
-(BOOL)isEqualToComponentIdentity:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(DKCanonicalVersion *)version;
-(NSString *)domain;
@end

