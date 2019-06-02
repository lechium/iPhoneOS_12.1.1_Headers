/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UNSNotificationTopicRecord : NSObject {

	BOOL _supportsAlerts;
	BOOL _supportsBadges;
	BOOL _supportsSounds;
	BOOL _supportsLockScreen;
	BOOL _supportsNotificationCenter;
	BOOL _supportsCarPlay;
	BOOL _supportsCriticalAlerts;
	BOOL _modalAlertStyle;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _displayNameLocalizationKey;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocalizationKey;              //@synthesize displayNameLocalizationKey=_displayNameLocalizationKey - In the implementation block
@property (assign,nonatomic) BOOL supportsAlerts;                              //@synthesize supportsAlerts=_supportsAlerts - In the implementation block
@property (assign,nonatomic) BOOL supportsBadges;                              //@synthesize supportsBadges=_supportsBadges - In the implementation block
@property (assign,nonatomic) BOOL supportsSounds;                              //@synthesize supportsSounds=_supportsSounds - In the implementation block
@property (assign,nonatomic) BOOL supportsLockScreen;                          //@synthesize supportsLockScreen=_supportsLockScreen - In the implementation block
@property (assign,nonatomic) BOOL supportsNotificationCenter;                  //@synthesize supportsNotificationCenter=_supportsNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL supportsCarPlay;                             //@synthesize supportsCarPlay=_supportsCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsCriticalAlerts;                      //@synthesize supportsCriticalAlerts=_supportsCriticalAlerts - In the implementation block
@property (assign,nonatomic) BOOL modalAlertStyle;                             //@synthesize modalAlertStyle=_modalAlertStyle - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDisplayNameLocalizationKey:(NSString *)arg1 ;
-(void)setSupportsBadges:(BOOL)arg1 ;
-(void)setSupportsAlerts:(BOOL)arg1 ;
-(void)setSupportsSounds:(BOOL)arg1 ;
-(void)setSupportsCarPlay:(BOOL)arg1 ;
-(void)setSupportsCriticalAlerts:(BOOL)arg1 ;
-(void)setSupportsLockScreen:(BOOL)arg1 ;
-(void)setSupportsNotificationCenter:(BOOL)arg1 ;
-(NSString *)displayNameLocalizationKey;
-(BOOL)supportsBadges;
-(BOOL)supportsAlerts;
-(BOOL)supportsSounds;
-(BOOL)supportsCarPlay;
-(BOOL)supportsCriticalAlerts;
-(BOOL)modalAlertStyle;
-(BOOL)supportsNotificationCenter;
-(void)setModalAlertStyle:(BOOL)arg1 ;
-(BOOL)supportsLockScreen;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)displayName;
@end

