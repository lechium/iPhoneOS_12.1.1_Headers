/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
+(BOOL)_isCloudKitErrorDomain:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(long long)_code;
-(BOOL)isPartialError;
-(id)_allPartialErrors;
-(BOOL)isUnrecoverableDecryptionError;
-(BOOL)isManateeNotAvailableError;
-(BOOL)isChangeTokenExpired;
-(BOOL)isNetworkUnavailable;
-(BOOL)isInitializationTimeOutError;
-(BOOL)isPCSError;
-(BOOL)isKeychainSyncingInProgress;
-(id)initWithError:(id)arg1 ;
@end

