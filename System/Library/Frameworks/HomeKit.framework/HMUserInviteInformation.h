/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMUserInviteInformation : NSObject {

	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	NSString* _userID;

}

@property (nonatomic,copy,readonly) NSString * userID;                                             //@synthesize userID=_userID - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                          //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed,nonatomic,readonly) BOOL remoteAccessAllowed;              //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
-(id)initWithUser:(id)arg1 administrator:(BOOL)arg2 remoteAccess:(BOOL)arg3 ;
-(NSString *)userID;
-(BOOL)isRemoteAccessAllowed;
-(BOOL)isAdministrator;
-(id)init;
@end
