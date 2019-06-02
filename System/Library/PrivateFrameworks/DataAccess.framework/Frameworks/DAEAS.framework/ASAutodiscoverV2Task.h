/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary;

@interface ASAutodiscoverV2Task : ASTask {

	NSString* _emailAddress;
	NSMutableDictionary* _accountInfo;
	BOOL _addEmptyBearer;
	BOOL _discoverOAuthEndpoint;
	NSString* _easEndPoint;

}
-(double)timeoutInterval;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)contentType;
-(BOOL)processContext:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)_url;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
-(id)_OAuthURLFromResponseData:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)loadRequest:(id)arg1 ;
@end

