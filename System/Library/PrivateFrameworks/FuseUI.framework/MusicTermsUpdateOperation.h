/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSError, NSString;

@interface MusicTermsUpdateOperation : SSVComplexOperation {

	NSError* _error;
	BOOL _hasAcceptedLatestTerms;
	unsigned long long _latestStoreTermsVersion;
	NSString* _termsContentText;
	unsigned long long _acceptedStoreTermsVersion;
	NSString* _termsContext;

}

@property (nonatomic,readonly) unsigned long long acceptedStoreTermsVersion;              //@synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsContext;                              //@synthesize termsContext=_termsContext - In the implementation block
@property (nonatomic,readonly) unsigned long long latestStoreTermsVersion;                //@synthesize latestStoreTermsVersion=_latestStoreTermsVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsContentText; 
@property (nonatomic,readonly) BOOL hasAcceptedLatestTerms; 
-(unsigned long long)acceptedStoreTermsVersion;
-(unsigned long long)latestStoreTermsVersion;
-(BOOL)hasAcceptedLatestTerms;
-(NSString *)termsContentText;
-(id)initWithAcceptedStoreTermsVersion:(unsigned long long)arg1 termsContext:(id)arg2 ;
-(BOOL)_runRequestWithTermsCheckURL:(id)arg1 allowingAuthentication:(BOOL)arg2 returningError:(id*)arg3 termsContentText:(id*)arg4 hasAcceptedLatestTerms:(BOOL*)arg5 latestStoreTermsVersion:(unsigned long long*)arg6 ;
-(BOOL)_authenticateReturningError:(id*)arg1 ;
-(NSString *)termsContext;
-(void)main;
-(id)error;
@end

