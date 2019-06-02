/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AADeviceProvisioningSession : NSObject {

	NSString* _dsid;
	unsigned long long _dsidNumber;
	OpaqueCFHTTPCookieStorageRef _cookieStorageRef;

}
-(void)addProvisioningInfoToAARequest:(id)arg1 ;
-(void)setCookieStorageRef:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(BOOL)arg2 ;
-(id)deviceProvisioningInfo;
-(void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(BOOL)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(int)synchronizeProvisioningWithData:(id)arg1 ;
-(int)eraseProvisioning;
-(int)provisionDeviceWithData:(id)arg1 ;
-(id)init;
@end

