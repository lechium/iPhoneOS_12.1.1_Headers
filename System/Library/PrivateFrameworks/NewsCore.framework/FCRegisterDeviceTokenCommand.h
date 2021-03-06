/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCRegisterDeviceTokenCommand : FCCommand {

	NSString* _userID;
	NSString* _deviceToken;
	NSString* _storefrontID;

}

@property (nonatomic,copy) NSString * userID;                    //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;               //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;              //@synthesize storefrontID=_storefrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceToken;
-(NSString *)storefrontID;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(id)initWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

