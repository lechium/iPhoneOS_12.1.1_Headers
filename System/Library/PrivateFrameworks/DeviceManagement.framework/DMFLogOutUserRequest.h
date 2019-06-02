/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFLogOutUserRequest : DMFTaskRequest {

	BOOL _forceLogout;

}

@property (assign,nonatomic) BOOL forceLogout;              //@synthesize forceLogout=_forceLogout - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(BOOL)forceLogout;
-(void)setForceLogout:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
@end

