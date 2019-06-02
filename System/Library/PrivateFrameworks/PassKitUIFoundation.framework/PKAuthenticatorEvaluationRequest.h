/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class NSString, NSNumber, NSData;

@interface PKAuthenticatorEvaluationRequest : NSObject {

	BOOL _assumeUserIntentAvailable;
	NSString* _reason;
	NSString* _processName;
	NSNumber* _processIdentifier;
	NSString* _PINTitle;
	NSNumber* _PINLength;
	NSData* _externalizedContext;
	SecAccessControlRef _accessControlRef;
	long long _policy;

}

@property (nonatomic,readonly) long long policy;                                //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * processName;                              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy) NSNumber * processIdentifier;                        //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * PINTitle;                                 //@synthesize PINTitle=_PINTitle - In the implementation block
@property (nonatomic,copy) NSNumber * PINLength;                                //@synthesize PINLength=_PINLength - In the implementation block
@property (nonatomic,retain) NSData * externalizedContext;                      //@synthesize externalizedContext=_externalizedContext - In the implementation block
@property (assign,nonatomic) SecAccessControlRef accessControlRef;              //@synthesize accessControlRef=_accessControlRef - In the implementation block
@property (assign,nonatomic) BOOL assumeUserIntentAvailable;                    //@synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(SecAccessControlRef)accessControlRef;
-(long long)policy;
-(NSNumber *)PINLength;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)PINTitle;
-(BOOL)assumeUserIntentAvailable;
-(void)setPINTitle:(NSString *)arg1 ;
-(void)setPINLength:(NSNumber *)arg1 ;
-(NSData *)externalizedContext;
-(void)setExternalizedContext:(NSData *)arg1 ;
-(void)setAccessControlRef:(SecAccessControlRef)arg1 ;
-(void)setAssumeUserIntentAvailable:(BOOL)arg1 ;
-(void)setProcessIdentifier:(NSNumber *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(id)initWithPolicy:(long long)arg1 ;
-(NSString *)processName;
-(NSNumber *)processIdentifier;
@end
