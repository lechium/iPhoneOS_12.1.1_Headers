/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSArray, NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam {

	long long _dataType;
	long long _status;
	NSArray* _clientErrors;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;                  //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * clientErrors;              //@synthesize clientErrors=_clientErrors - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 clientErrors:(id)arg4 ;
-(void)setClientErrors:(NSArray *)arg1 ;
-(NSArray *)clientErrors;
-(void)setDataType:(long long)arg1 ;
-(long long)dataType;
-(id)description;
-(long long)status;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setStatus:(long long)arg1 ;
@end

