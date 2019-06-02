/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCAPNConfiguration : NSObject {

	NSString* _name;
	NSString* _username;
	NSString* _password;
	NSString* _proxyServer;
	NSNumber* _proxyPort;
	NSString* _authenticationType;
	NSNumber* _defaultProtocolMask;
	NSNumber* _allowedProtocolMask;
	NSNumber* _allowedProtocolMaskInRoaming;
	NSNumber* _allowedProtocolMaskInDomesticRoaming;

}

@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                                       //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;                                         //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain) NSString * authenticationType;                                //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,retain) NSNumber * defaultProtocolMask;                               //@synthesize defaultProtocolMask=_defaultProtocolMask - In the implementation block
@property (nonatomic,retain) NSNumber * allowedProtocolMask;                               //@synthesize allowedProtocolMask=_allowedProtocolMask - In the implementation block
@property (nonatomic,retain) NSNumber * allowedProtocolMaskInRoaming;                      //@synthesize allowedProtocolMaskInRoaming=_allowedProtocolMaskInRoaming - In the implementation block
@property (nonatomic,retain) NSNumber * allowedProtocolMaskInDomesticRoaming;              //@synthesize allowedProtocolMaskInDomesticRoaming=_allowedProtocolMaskInDomesticRoaming - In the implementation block
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 outError:(id*)arg2 ;
-(NSString *)authenticationType;
-(id)localizedAuthenticationType;
-(NSString *)proxyServer;
-(NSNumber *)defaultProtocolMask;
-(NSNumber *)allowedProtocolMask;
-(NSNumber *)allowedProtocolMaskInRoaming;
-(NSNumber *)allowedProtocolMaskInDomesticRoaming;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setDefaultProtocolMask:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMask:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMaskInRoaming:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMaskInDomesticRoaming:(NSNumber *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(NSNumber *)proxyPort;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSString *)username;
-(NSString *)password;
@end
