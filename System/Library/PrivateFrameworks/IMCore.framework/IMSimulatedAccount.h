/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAccount.h>

@class IMHandle;

@interface IMSimulatedAccount : IMAccount {

	IMHandle* _loginHandle;

}

@property (nonatomic,retain) IMHandle * loginHandle;              //@synthesize loginHandle=_loginHandle - In the implementation block
-(BOOL)isConnected;
-(BOOL)supportsRegistration;
-(BOOL)isOperational;
-(void)setLoginHandle:(IMHandle *)arg1 ;
-(IMHandle *)loginHandle;
-(id)loginIMHandle;
@end

