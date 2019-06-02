/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SFSafariPasswordCredential;
@class NSString, NSDate;

@interface SFSafariCredential : NSObject <NSSecureCoding> {

	NSString* _user;
	NSString* _password;
	NSString* _site;
	NSDate* _creationDate;
	id<SFSafariPasswordCredential> _externalCredential;

}

@property (nonatomic,readonly) id<SFSafariPasswordCredential> externalCredential;              //@synthesize externalCredential=_externalCredential - In the implementation block
@property (nonatomic,readonly) NSString * user;                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                                                //@synthesize site=_site - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
+(BOOL)supportsSecureCoding;
-(id)initWithExternalCredential:(id)arg1 ;
-(NSDate *)creationDate;
-(id<SFSafariPasswordCredential>)externalCredential;
-(NSString *)site;
-(id)initWithUser:(id)arg1 password:(id)arg2 site:(id)arg3 creationDate:(id)arg4 ;
-(NSString *)user;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isExternal;
-(NSString *)password;
@end

