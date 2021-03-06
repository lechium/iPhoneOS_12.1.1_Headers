/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TILoginCredential : NSObject <NSCopying> {

	NSString* _username;
	NSString* _password;
	NSString* _site;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * site;                  //@synthesize site=_site - In the implementation block
-(NSString *)site;
-(id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
-(NSString *)password;
@end

