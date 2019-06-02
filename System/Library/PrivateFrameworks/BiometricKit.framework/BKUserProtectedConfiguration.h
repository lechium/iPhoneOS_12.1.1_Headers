/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface BKUserProtectedConfiguration : NSObject {

	NSNumber* _unlockEnabled;
	NSNumber* _identificationEnabled;
	NSNumber* _loginEnabled;
	NSNumber* _applePayEnabled;
	NSNumber* _attentionDetectionEnabled;

}

@property (nonatomic,retain) NSNumber * unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(void)setAttentionDetectionEnabled:(NSNumber *)arg1 ;
-(NSNumber *)attentionDetectionEnabled;
-(NSNumber *)unlockEnabled;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 effective:(BOOL)arg2 ;
-(NSNumber *)identificationEnabled;
-(NSNumber *)loginEnabled;
-(NSNumber *)applePayEnabled;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(void)setApplePayEnabled:(NSNumber *)arg1 ;
-(id)dictionary;
@end

