/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NDAnalyticsEnvelopeTracker <NSObject>
@required
-(void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;
-(void)registerEnvelopesAsCreated:(id)arg1;
-(void)registerEnvelopesAsSubmittedToUploader:(id)arg1;
-(void)registerEnvelopesAsReceivedByUploader:(id)arg1;
-(void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1;
-(void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1;
-(void)registerEnvelopeContentTypesAsUploaded:(id)arg1;
-(void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3;

@end

