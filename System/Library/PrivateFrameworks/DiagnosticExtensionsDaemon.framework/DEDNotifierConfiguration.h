/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary;

@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding> {

	BOOL _userNotificationShouldPlaySound;
	BOOL _followupUseSpringboardNotification;
	NSString* _hostAppIdentifier;
	NSString* _localizedNotificationTitle;
	NSString* _localizedNotificationBody;
	NSString* _reviewActionLabel;
	NSString* _sendActionLabel;
	NSString* _followupUniqueIdentifier;
	double _followupFrequency;
	NSURL* _followupReviewActionURL;
	NSURL* _followupSendActionURL;
	NSDictionary* _followupReviewActionUserInfo;
	NSDictionary* _followupSendActionUserInfo;
	NSString* _followupLocalizedTitle;
	NSString* _followupLocalizedInformativeText;
	NSString* _followupExtensionIdentifier;
	NSURL* _followupNotificationActionURL;
	NSString* _followupNotificationActionTitle;

}

@property (retain) NSString * hostAppIdentifier;                             //@synthesize hostAppIdentifier=_hostAppIdentifier - In the implementation block
@property (retain) NSString * localizedNotificationTitle;                    //@synthesize localizedNotificationTitle=_localizedNotificationTitle - In the implementation block
@property (retain) NSString * localizedNotificationBody;                     //@synthesize localizedNotificationBody=_localizedNotificationBody - In the implementation block
@property (retain) NSString * reviewActionLabel;                             //@synthesize reviewActionLabel=_reviewActionLabel - In the implementation block
@property (retain) NSString * sendActionLabel;                               //@synthesize sendActionLabel=_sendActionLabel - In the implementation block
@property (assign) BOOL userNotificationShouldPlaySound;                     //@synthesize userNotificationShouldPlaySound=_userNotificationShouldPlaySound - In the implementation block
@property (retain) NSString * followupUniqueIdentifier;                      //@synthesize followupUniqueIdentifier=_followupUniqueIdentifier - In the implementation block
@property (assign) double followupFrequency;                                 //@synthesize followupFrequency=_followupFrequency - In the implementation block
@property (retain) NSURL * followupReviewActionURL;                          //@synthesize followupReviewActionURL=_followupReviewActionURL - In the implementation block
@property (retain) NSURL * followupSendActionURL;                            //@synthesize followupSendActionURL=_followupSendActionURL - In the implementation block
@property (retain) NSDictionary * followupReviewActionUserInfo;              //@synthesize followupReviewActionUserInfo=_followupReviewActionUserInfo - In the implementation block
@property (retain) NSDictionary * followupSendActionUserInfo;                //@synthesize followupSendActionUserInfo=_followupSendActionUserInfo - In the implementation block
@property (retain) NSString * followupLocalizedTitle;                        //@synthesize followupLocalizedTitle=_followupLocalizedTitle - In the implementation block
@property (retain) NSString * followupLocalizedInformativeText;              //@synthesize followupLocalizedInformativeText=_followupLocalizedInformativeText - In the implementation block
@property (retain) NSString * followupExtensionIdentifier;                   //@synthesize followupExtensionIdentifier=_followupExtensionIdentifier - In the implementation block
@property (assign) BOOL followupUseSpringboardNotification;                  //@synthesize followupUseSpringboardNotification=_followupUseSpringboardNotification - In the implementation block
@property (retain) NSURL * followupNotificationActionURL;                    //@synthesize followupNotificationActionURL=_followupNotificationActionURL - In the implementation block
@property (retain) NSString * followupNotificationActionTitle;               //@synthesize followupNotificationActionTitle=_followupNotificationActionTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(BOOL)supportsSecureCoding;
-(NSString *)hostAppIdentifier;
-(NSString *)localizedNotificationTitle;
-(NSString *)localizedNotificationBody;
-(NSString *)reviewActionLabel;
-(NSString *)sendActionLabel;
-(BOOL)userNotificationShouldPlaySound;
-(NSString *)followupUniqueIdentifier;
-(double)followupFrequency;
-(NSURL *)followupReviewActionURL;
-(NSURL *)followupSendActionURL;
-(NSString *)followupLocalizedTitle;
-(NSString *)followupLocalizedInformativeText;
-(NSString *)followupExtensionIdentifier;
-(BOOL)followupUseSpringboardNotification;
-(NSURL *)followupNotificationActionURL;
-(NSString *)followupNotificationActionTitle;
-(id)initWithHostAppIdentifier:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationBody:(id)arg3 ;
-(void)setHostAppIdentifier:(NSString *)arg1 ;
-(void)setLocalizedNotificationTitle:(NSString *)arg1 ;
-(void)setLocalizedNotificationBody:(NSString *)arg1 ;
-(void)setReviewActionLabel:(NSString *)arg1 ;
-(void)setSendActionLabel:(NSString *)arg1 ;
-(void)setUserNotificationShouldPlaySound:(BOOL)arg1 ;
-(void)setFollowupUniqueIdentifier:(NSString *)arg1 ;
-(void)setFollowupFrequency:(double)arg1 ;
-(void)setFollowupReviewActionURL:(NSURL *)arg1 ;
-(void)setFollowupSendActionURL:(NSURL *)arg1 ;
-(NSDictionary *)followupReviewActionUserInfo;
-(void)setFollowupReviewActionUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)followupSendActionUserInfo;
-(void)setFollowupSendActionUserInfo:(NSDictionary *)arg1 ;
-(void)setFollowupLocalizedTitle:(NSString *)arg1 ;
-(void)setFollowupLocalizedInformativeText:(NSString *)arg1 ;
-(void)setFollowupExtensionIdentifier:(NSString *)arg1 ;
-(void)setFollowupUseSpringboardNotification:(BOOL)arg1 ;
-(void)setFollowupNotificationActionURL:(NSURL *)arg1 ;
-(void)setFollowupNotificationActionTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

