/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest {

	SLFacebookRegistrationInfo* _registrationInfo;

}
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)_urlEncodedString:(id)arg1 ;
-(id)_tokenSecret;
-(void)_prepareRequestForValidation;
-(id)_sha1HashForString:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
@end

