/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSOptional, VSStoreURLBag;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation {

	NSArray* _unlimitedIdentityProviders;
	VSOptional* _result;
	VSStoreURLBag* _bag;

}

@property (nonatomic,retain) VSStoreURLBag * bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy) NSArray * unlimitedIdentityProviders;              //@synthesize unlimitedIdentityProviders=_unlimitedIdentityProviders - In the implementation block
@property (nonatomic,retain) VSOptional * result;                             //@synthesize result=_result - In the implementation block
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setUnlimitedIdentityProviders:(NSArray *)arg1 ;
-(NSArray *)unlimitedIdentityProviders;
-(id)init;
-(VSOptional *)result;
-(void)executionDidBegin;
@end

