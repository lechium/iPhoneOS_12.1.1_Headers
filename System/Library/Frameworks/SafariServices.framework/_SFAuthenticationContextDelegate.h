/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFAuthenticationContextDelegate <NSObject>
@optional
-(BOOL)authenticationEnabledForContext:(id)arg1;
-(double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1;

@end

