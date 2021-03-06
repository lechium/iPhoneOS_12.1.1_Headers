/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormDataController.h>
#import <libobjc.A.dylib/_SFAuthenticationContextDelegate.h>

@class _SFAutoFillAuthenticationCache, _SFAuthenticationContext, NSString;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate> {

	_SFAutoFillAuthenticationCache* _autoFillAuthenticationCache;
	_SFAuthenticationContext* _autoFillAuthenticationContext;

}

@property (nonatomic,readonly) _SFAutoFillAuthenticationCache * autoFillAuthenticationCache;              //@synthesize autoFillAuthenticationCache=_autoFillAuthenticationCache - In the implementation block
@property (nonatomic,readonly) _SFAuthenticationContext * autoFillAuthenticationContext;                  //@synthesize autoFillAuthenticationContext=_autoFillAuthenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(_SFAutoFillAuthenticationCache *)autoFillAuthenticationCache;
-(_SFAuthenticationContext *)autoFillAuthenticationContext;
-(BOOL)authenticationEnabledForContext:(id)arg1 ;
-(double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1 ;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1 ;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg1 ;
-(void)_authenticationContextInvalidated:(id)arg1 ;
@end

