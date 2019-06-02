/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject {

	NSMutableDictionary* _operationsByAttachmentIdentifier;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByAttachmentIdentifier;              //@synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
+(BOOL)needsToDownloadRemoteFileAttachments;
+(id)allUndownloadedLegacyAttachmentsInContext:(id)arg1 ;
+(void)releaseSharedDownloaderIfPossible;
+(void)initializeDownloaderAfterDelayIfNecessary;
+(id)sharedDownloader;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setOperationsByAttachmentIdentifier:(NSMutableDictionary *)arg1 ;
-(void)resumeDownloadsAfterDelay;
-(void)downloadUndownloadedLegacyAttachments;
-(void)downloadRemoteFileForAttachmentObjectID:(id)arg1 ;
-(NSMutableDictionary *)operationsByAttachmentIdentifier;
-(void)downloadRemoteFileForAttachment:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
@end

