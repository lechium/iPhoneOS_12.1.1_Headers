/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OACredential;

@interface OAURLRequestSigner : NSObject {

	OACredential* _credential;
	int _signatureMethod;

}

@property (assign,nonatomic) int signatureMethod;              //@synthesize signatureMethod=_signatureMethod - In the implementation block
-(id)signatureMethodString;
-(id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(BOOL)arg3 ;
-(id)oauthNonce;
-(id)timestamp:(id)arg1 ;
-(id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2 ;
-(Class)signer;
-(id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3 ;
-(void)setSignatureMethod:(int)arg1 ;
-(id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(id)initWithCredential:(id)arg1 ;
-(id)signedURLRequestWithRequest:(id)arg1 ;
-(int)signatureMethod;
-(void)dealloc;
@end

