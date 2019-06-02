/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SXPresentableContact : NSObject {

	NSString* _email;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) NSString * email;                    //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(NSString *)email;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithEmail:(id)arg1 ;
-(NSString *)phoneNumber;
@end

