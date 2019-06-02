/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPLErrors : NSObject
+(id)cplErrorWithCode:(long long)arg1 description:(id)arg2 ;
+(id)unknownError;
+(id)incorrectMachineStateErrorWithReason:(id)arg1 ;
+(id)versionMismatchError;
+(id)invalidClientCacheErrorWithReason:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 ;
+(id)posixErrorForURL:(id)arg1 ;
+(id)incorrectParametersErrorForParameter:(id)arg1 ;
+(id)invalidScopeErrorWithScopedIdentifier:(id)arg1 ;
+(id)invalidScopeErrorWithScopeIdentifier:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 ;
+(id)cplErrorWithCode:(long long)arg1 description:(id)arg2 arguments:(char*)arg3 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(char*)arg5 ;
+(id)underlyingErrorWithReason:(id)arg1 ;
+(id)notImplementedError;
+(id)invalidScopeErrorWithScopeIndex:(long long)arg1 ;
+(id)unknownPrimaryScope;
+(id)transportErrorFromTransportError:(id)arg1 ;
+(id)libraryClosedError;
+(id)invalidCloudCacheErrorWithReason:(id)arg1 ;
+(id)invalidDaemonErrorWithConnectionError:(id)arg1 ;
+(id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(char*)arg4 ;
+(id)missingError;
+(id)errorsForIdentifiers:(id)arg1 error:(id)arg2 ;
+(id)unsafeResources:(id)arg1 withError:(id)arg2 resourceStorage:(id)arg3 ;
+(id)operationCancelledError;
@end
