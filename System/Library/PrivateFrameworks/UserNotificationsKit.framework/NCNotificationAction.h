/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol NCNotificationActionRunner;
@class NSString, NSURL, NSDictionary;

@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSString* _identifier;
	NSString* _title;
	unsigned long long _activationMode;
	NSURL* _launchURL;
	NSString* _launchBundleID;
	unsigned long long _behavior;
	NSDictionary* _behaviorParameters;
	id<NCNotificationActionRunner> _actionRunner;
	BOOL _requiresAuthentication;
	BOOL _destructiveAction;
	BOOL _shouldDismissNotification;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long activationMode;                              //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                         //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchBundleID;                                 //@synthesize launchBundleID=_launchBundleID - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior;                                    //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * behaviorParameters;                         //@synthesize behaviorParameters=_behaviorParameters - In the implementation block
@property (nonatomic,readonly) id<NCNotificationActionRunner> actionRunner;                    //@synthesize actionRunner=_actionRunner - In the implementation block
@property (getter=isSystemAction,nonatomic,readonly) BOOL systemAction; 
@property (nonatomic,readonly) BOOL requiresAuthentication;                                    //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (getter=isDestructiveAction,nonatomic,readonly) BOOL destructiveAction;              //@synthesize destructiveAction=_destructiveAction - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismissNotification;                                 //@synthesize shouldDismissNotification=_shouldDismissNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresAuthentication;
-(id)initWithNotificationAction:(id)arg1 ;
-(NSURL *)launchURL;
-(BOOL)isSystemAction;
-(BOOL)shouldDismissNotification;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)launchBundleID;
-(NSDictionary *)behaviorParameters;
-(BOOL)isDestructiveAction;
-(id<NCNotificationActionRunner>)actionRunner;
-(NSString *)identifier;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)activationMode;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)behavior;
@end

