/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CDPStateHandlerResult : NSObject {

	BOOL _cloudDataProtectionEnabled;
	BOOL _shouldCompleteSignIn;
	unsigned long long _peeriCloudKeychainState;
	NSError* _error;

}

@property (assign) BOOL cloudDataProtectionEnabled;                         //@synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled - In the implementation block
@property (assign) BOOL shouldCompleteSignIn;                               //@synthesize shouldCompleteSignIn=_shouldCompleteSignIn - In the implementation block
@property (assign) unsigned long long peeriCloudKeychainState;              //@synthesize peeriCloudKeychainState=_peeriCloudKeychainState - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 error:(id)arg3 ;
+(id)successResult;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 peeriCloudKeychainState:(unsigned long long)arg3 error:(id)arg4 ;
-(void)setShouldCompleteSignIn:(BOOL)arg1 ;
-(void)setCloudDataProtectionEnabled:(BOOL)arg1 ;
-(BOOL)shouldCompleteSignIn;
-(BOOL)cloudDataProtectionEnabled;
-(unsigned long long)peeriCloudKeychainState;
-(void)setPeeriCloudKeychainState:(unsigned long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

