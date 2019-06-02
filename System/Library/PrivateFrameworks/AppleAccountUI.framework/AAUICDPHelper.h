/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface AAUICDPHelper : NSObject {

	UIViewController* _presentingViewController;
	BOOL _forceInline;

}

@property (assign,nonatomic) BOOL forceInline;                                                  //@synthesize forceInline=_forceInline - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(id)cdpContextForPrimaryAccount;
+(id)helperWithPresenter:(id)arg1 ;
+(id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1 ;
+(id)cdpContextForAccount:(id)arg1 ;
-(id)cdpStateControllerForPrimaryAccount;
-(void)setForceInline:(BOOL)arg1 ;
-(id)cdpStateControllerWithContext:(id)arg1 ;
-(BOOL)forceInline;
-(UIViewController *)presentingViewController;
@end

