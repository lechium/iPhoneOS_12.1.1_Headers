/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface SBKResponseStatus : NSObject {

	BOOL _isRecoverable;
	BOOL _isError;
	BOOL _shouldFileRadar;
	BOOL _isPuntedError;
	long long _statusCode;
	NSString* _consoleDescription;

}

@property (readonly) long long statusCode;                            //@synthesize statusCode=_statusCode - In the implementation block
@property (copy,readonly) NSString * consoleDescription;              //@synthesize consoleDescription=_consoleDescription - In the implementation block
@property (readonly) NSError * requestError; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isRecoverable;                              //@synthesize isRecoverable=_isRecoverable - In the implementation block
@property (readonly) BOOL isError;                                    //@synthesize isError=_isError - In the implementation block
@property (readonly) BOOL shouldFileRadar;                            //@synthesize shouldFileRadar=_shouldFileRadar - In the implementation block
@property (readonly) BOOL isGenericError; 
@property (readonly) BOOL isUnsupportedClient; 
@property (readonly) BOOL isAuthenticationError; 
@property (readonly) BOOL isValidationError; 
@property (readonly) BOOL isPuntedError;                              //@synthesize isPuntedError=_isPuntedError - In the implementation block
+(id)responseStatusForStatusCodeNumber:(id)arg1 ;
-(BOOL)isSuccess;
-(BOOL)isRecoverable;
-(NSError *)requestError;
-(NSString *)consoleDescription;
-(BOOL)isAuthenticationError;
-(BOOL)isUnsupportedClient;
-(BOOL)isGenericError;
-(BOOL)isValidationError;
-(BOOL)isPuntedError;
-(BOOL)shouldFileRadar;
-(id)initWithStatus:(long long)arg1 isRecoverable:(BOOL)arg2 isError:(BOOL)arg3 consoleDescription:(id)arg4 shouldFileRadar:(BOOL)arg5 ;
-(BOOL)isError;
-(long long)statusCode;
@end

