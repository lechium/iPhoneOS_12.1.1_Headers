/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWebGeolocationPolicyDecider;

@interface _SFGeolocationPermissionManager : NSObject {

	UIWebGeolocationPolicyDecider* _policyDecider;

}
+(id)sharedManager;
-(void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
@end
