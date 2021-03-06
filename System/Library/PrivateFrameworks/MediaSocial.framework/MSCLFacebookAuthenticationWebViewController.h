/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MSCLOAuthWebViewController.h>

@class NSString, NSArray;

@interface MSCLFacebookAuthenticationWebViewController : MSCLOAuthWebViewController {

	NSString* _clientID;
	NSArray* _writePermissions;

}

@property (nonatomic,copy,readonly) NSString * clientID;                     //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writePermissions;              //@synthesize writePermissions=_writePermissions - In the implementation block
+(id)_authenticationURLWithClientID:(id)arg1 permissions:(id)arg2 ;
+(id)authTokenFromRedirectURL:(id)arg1 ;
-(NSString *)clientID;
-(id)initWithClientID:(id)arg1 writePermissions:(id)arg2 ;
-(NSArray *)writePermissions;
@end

