/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject {

	HDProfile* _profile;
	NSMutableArray* _requests;
	NSMutableArray* _completions;
	BOOL _didStartTransaction;
	NSString* _bundleIdentifier;
	NSUUID* _sessionIdentifier;
	/*^block*/id _sessionCompletion;

}

@property (nonatomic,copy) id sessionCompletion;                              //@synthesize sessionCompletion=_sessionCompletion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)addRequest:(id)arg1 ;
-(void)beginPromptTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)endPromptTransactionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2 ;
-(void)beginPromptSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)sessionDescriptor;
-(void)timeoutExpired;
-(id)sessionCompletion;
-(void)setSessionCompletion:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)requestCount;
-(NSUUID *)sessionIdentifier;
@end

