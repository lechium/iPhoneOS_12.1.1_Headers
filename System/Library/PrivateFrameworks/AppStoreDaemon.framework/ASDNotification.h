/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ASDNotification : NSObject <NSSecureCoding> {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)notificationWithName:(id)arg1 userInfo:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
@end

