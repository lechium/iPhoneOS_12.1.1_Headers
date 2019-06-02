/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationStaticContentProviding.h>

@protocol NCNotificationStaticContentProvidingDelegate;
@class NSArray, NSString, NSDate, NSTimeZone, UIImage, NCNotificationRequest;

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding> {

	id<NCNotificationStaticContentProvidingDelegate> _delegate;
	NSArray* _overriddenActions;
	NCNotificationRequest* _notificationRequest;

}

@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                   //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationStaticContentProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (getter=isDateAllDay,nonatomic,readonly) BOOL dateAllDay; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSString * primaryText; 
@property (nonatomic,copy,readonly) NSString * primarySubtitleText; 
@property (nonatomic,copy,readonly) NSString * secondaryText; 
@property (nonatomic,copy,readonly) NSString * summaryText; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,copy,readonly) id cancelAction; 
@property (nonatomic,copy,readonly) id clearAction; 
@property (nonatomic,copy,readonly) id closeAction; 
@property (nonatomic,copy,readonly) id defaultAction; 
@property (nonatomic,readonly) NSArray * interfaceActions; 
@property (nonatomic,readonly) unsigned long long messageNumberOfLines; 
@property (nonatomic,readonly) BOOL showsTextInputOnAppearance; 
@property (nonatomic,readonly) unsigned long long coalesceCount; 
@property (nonatomic,copy) NSArray * overriddenActions;                                                     //@synthesize overriddenActions=_overriddenActions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentActions; 
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(NSArray *)interfaceActions;
-(NSArray *)currentActions;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(BOOL)isDateAllDay;
-(NSString *)primarySubtitleText;
-(NSString *)summaryText;
-(id)clearAction;
-(id)closeAction;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(BOOL)showsTextInputOnAppearance;
-(NSArray *)overriddenActions;
-(/*^block*/id)_actionForNotificationAction:(id)arg1 ;
-(unsigned long long)coalesceCount;
-(void)setOverriddenActions:(NSArray *)arg1 ;
-(id)_appBundleIdentifer;
-(id)init;
-(void)setDelegate:(id<NCNotificationStaticContentProvidingDelegate>)arg1 ;
-(NSString *)title;
-(id<NCNotificationStaticContentProvidingDelegate>)delegate;
-(id)cancelAction;
-(NSDate *)date;
-(NSArray *)icons;
-(NSTimeZone *)timeZone;
-(UIImage *)thumbnail;
-(id)defaultAction;
@end

