/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NCNotificationAction;


@protocol NCNotificationCustomContent <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) id<NCNotificationCustomContentDelegate> delegate; 
@property (nonatomic,readonly) NSString * contentExtensionIdentifier; 
@property (assign,nonatomic,__weak) NCNotificationAction * presentationSourceAction; 
@optional
-(void)preserveInputViews;
-(BOOL)restoreInputViews;
-(NCNotificationAction *)presentationSourceAction;
-(void)setPresentationSourceAction:(id)arg1;
-(void)loadAudioAccessoryView;
-(NSString *)contentExtensionIdentifier;
-(void)playAudioMessage;
-(id)cancelTouches;

@required
-(BOOL)didReceiveNotificationRequest:(id)arg1;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2;
-(unsigned long long)customContentLocation;
-(BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
-(BOOL)defaultContentHidden;
-(BOOL)overridesDefaultTitle;
-(BOOL)allowManualDismiss;
-(void)setDelegate:(id)arg1;
-(NSString *)title;
-(id<NCNotificationCustomContentDelegate>)delegate;
-(BOOL)userInteractionEnabled;

@end

