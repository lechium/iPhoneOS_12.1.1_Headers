/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CloudServicesError : NSObject
+(id)sanitizedError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3 ;
+(long long)codeForNSError:(id)arg1 ;
+(long long)codeForErrno:(long long)arg1 ;
+(id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3 ;
@end

