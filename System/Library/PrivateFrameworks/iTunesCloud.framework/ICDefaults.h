/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSString, NSDictionary, NSNumber, NSDate;

@interface ICDefaults : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (nonatomic,copy) NSString * cloudMediaLibraryUID; 
@property (nonatomic,copy) NSString * defaultStoreFront; 
@property (nonatomic,copy) NSDictionary * cachedSubscriptionStatus; 
@property (nonatomic,copy) NSDictionary * pushNotificationState; 
@property (nonatomic,copy) NSDictionary * mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates; 
@property (nonatomic,copy) NSNumber * lastActiveAccountDSID; 
@property (nonatomic,copy) NSDictionary * lastCookieHeadersForRevokingMusicUserTokens; 
@property (nonatomic,copy) NSString * authServiceClientToken; 
@property (nonatomic,copy) NSDate * authServiceClientTokenExpiration; 
@property (nonatomic,copy) NSNumber * authServiceClientTokenDSID; 
@property (assign,nonatomic) BOOL ignoreExtendedCertificateValidation; 
@property (nonatomic,copy,readonly) NSString * deviceModelOverride; 
@property (nonatomic,copy,readonly) NSNumber * deviceClassOverride; 
@property (nonatomic,copy,readonly) NSNumber * fairPlayDeviceTypeOverride; 
@property (nonatomic,copy,readonly) NSString * productVersionOverride; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatformOverride; 
@property (nonatomic,copy,readonly) NSString * productPlatformOverride; 
@property (nonatomic,readonly) BOOL shouldForceiPhoneBehaviors; 
+(id)standardDefaults;
-(NSDictionary *)cachedSubscriptionStatus;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(BOOL)ignoreExtendedCertificateValidation;
-(NSString *)deviceModelOverride;
-(NSString *)hardwarePlatformOverride;
-(NSNumber *)deviceClassOverride;
-(NSString *)productVersionOverride;
-(NSString *)productPlatformOverride;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(void)setDefaultStoreFront:(NSString *)arg1 ;
-(NSString *)cloudMediaLibraryUID;
-(NSString *)authServiceClientToken;
-(NSDate *)authServiceClientTokenExpiration;
-(NSNumber *)authServiceClientTokenDSID;
-(void)setAuthServiceClientToken:(NSString *)arg1 ;
-(void)setAuthServiceClientTokenExpiration:(NSDate *)arg1 ;
-(void)setAuthServiceClientTokenDSID:(NSNumber *)arg1 ;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(NSDictionary *)pushNotificationState;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSNumber *)lastActiveAccountDSID;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(BOOL)shouldForceiPhoneBehaviors;
-(NSString *)defaultStoreFront;
-(id)init;
-(void)synchronize;
@end
