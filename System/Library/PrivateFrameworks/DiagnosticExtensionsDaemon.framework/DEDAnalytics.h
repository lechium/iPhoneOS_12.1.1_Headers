/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DEDAnalytics : NSObject
+(void)finisherDidCompleteWithDuration:(unsigned long long)arg1 uploadedByteCount:(unsigned long long)arg2 usingFinishingMove:(long long)arg3 withState:(long long)arg4 ;
+(void)didCompleteBugSessionWithState:(long long)arg1 ;
+(void)finisherDidStartWithFileCount:(unsigned long long)arg1 expectedByteUploadCount:(unsigned long long)arg2 finishingMove:(long long)arg3 ;
+(void)didCreateBugSessionForApp:(id)arg1 ;
+(void)didStartDaemon;
+(void)extensionDidScheduleExtensionWithIdentifier:(id)arg1 delay:(unsigned long long)arg2 ;
+(void)didStartExtensionWithIdentifier:(id)arg1 ;
+(void)extensionWithIdentifier:(id)arg1 didCompleteWithFileCount:(unsigned long long)arg2 bytesCollected:(unsigned long long)arg3 duration:(unsigned long long)arg4 errorCode:(long long)arg5 ;
+(void)didCheckInDeferredExtensionsWithCount:(unsigned long long)arg1 ;
+(id)log;
@end

