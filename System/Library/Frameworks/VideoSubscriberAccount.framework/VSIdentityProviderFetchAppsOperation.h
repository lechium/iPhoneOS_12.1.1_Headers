/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSAuditToken, NSOperationQueue;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation {

	VSOptional* _identityProviderID;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSOptional * identityProviderID;              //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)setResult:(VSOptional *)arg1 ;
-(VSOptional *)identityProviderID;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(id)init;
-(void)cancel;
-(VSOptional *)result;
-(VSAuditToken *)auditToken;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
@end

