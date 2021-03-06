/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVRXDeviceAuthenticationChallenge : NSObject {

	/*^block*/id _continuation;
	long long _challengeType;
	NSString* _codeToEnterOnDevice;

}

@property (nonatomic,readonly) long long challengeType;                          //@synthesize challengeType=_challengeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeToEnterOnDevice;              //@synthesize codeToEnterOnDevice=_codeToEnterOnDevice - In the implementation block
+(id)_challengeWithCodeToEnterLocally:(/*^block*/id)arg1 ;
+(id)_challengeWithCodeToEnterOnDevice:(id)arg1 ;
-(NSString *)codeToEnterOnDevice;
-(long long)challengeType;
-(void)userEnteredCodeLocally:(id)arg1 ;
-(void)cancel;
-(id)_init;
@end

