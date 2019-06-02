/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;
	NSString* _alertTitle;
	NSString* _alertMessage;

}

@property (nonatomic,retain) GKPlayerCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL loginDisabled;                           //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) BOOL passwordChangeRequired;                  //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                    //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkAccountsUI;                //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
@property (nonatomic,retain) NSString * alertTitle;                        //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,retain) NSString * alertMessage;                      //@synthesize alertMessage=_alertMessage - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerCredential *)credential;
-(BOOL)loginDisabled;
-(void)setAlertMessage:(NSString *)arg1 ;
-(NSString *)alertMessage;
-(void)setLoginDisabled:(BOOL)arg1 ;
-(BOOL)passwordChangeRequired;
-(void)setPasswordChangeRequired:(BOOL)arg1 ;
-(NSURL *)passwordChangeURL;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(BOOL)shouldShowLinkAccountsUI;
-(void)setShouldShowLinkAccountsUI:(BOOL)arg1 ;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(void)dealloc;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)alertTitle;
@end

