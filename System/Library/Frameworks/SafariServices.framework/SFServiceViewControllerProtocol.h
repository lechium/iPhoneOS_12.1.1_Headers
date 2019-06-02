/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFServiceViewControllerProtocol <NSObject>
@required
-(void)setDisplayMode:(long long)arg1;
-(void)setPreferredBarTintColor:(id)arg1;
-(void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
-(void)setDismissButtonStyle:(long long)arg1;
-(void)loadURL:(id)arg1;
-(void)setPreferredControlTintColor:(id)arg1;
-(void)repostNotificationInViewService:(id)arg1;
-(void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
-(void)setIsRunningTransitionAnimation:(BOOL)arg1;
-(void)didDetectRemoteViewControllerViewIsHidden;
-(void)didDetectUserInteractionFromHostApp;
-(void)openCurrentURLInSafari;
-(void)updateScrollViewIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2;
-(void)setConfiguration:(id)arg1;

@end
