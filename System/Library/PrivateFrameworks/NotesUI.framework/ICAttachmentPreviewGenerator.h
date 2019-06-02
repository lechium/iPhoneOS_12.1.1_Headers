/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICProgressIndicatorTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class ICAttachmentPreviewGeneratorOperationQueue, NSMapTable, NSMutableSet, NSMutableDictionary, ICProgressIndicatorTracker, NSObject, NSString;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate> {

	AB _shouldGenerateAttachmentsWhenReachable;
	ICAttachmentPreviewGeneratorOperationQueue* _asyncGeneratorQueue;
	ICAttachmentPreviewGeneratorOperationQueue* _costlyGeneratorQueue;
	ICAttachmentPreviewGeneratorOperationQueue* _generatorQueue;
	NSMapTable* _lastOperationForAttachmentID;
	NSMutableSet* _attachmentIDsPending;
	NSMutableDictionary* _attachmentIDsProgress;
	ICProgressIndicatorTracker* _progressTracker;
	unsigned long long _previewGenerationState;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSObject*<OS_dispatch_queue> _previewProgressQueue;

}

@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * asyncGeneratorQueue;               //@synthesize asyncGeneratorQueue=_asyncGeneratorQueue - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * costlyGeneratorQueue;              //@synthesize costlyGeneratorQueue=_costlyGeneratorQueue - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * generatorQueue;                    //@synthesize generatorQueue=_generatorQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * lastOperationForAttachmentID;                                      //@synthesize lastOperationForAttachmentID=_lastOperationForAttachmentID - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentIDsPending;                                            //@synthesize attachmentIDsPending=_attachmentIDsPending - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attachmentIDsProgress;                                    //@synthesize attachmentIDsProgress=_attachmentIDsProgress - In the implementation block
@property (nonatomic,retain) ICProgressIndicatorTracker * progressTracker;                                   //@synthesize progressTracker=_progressTracker - In the implementation block
@property (assign) unsigned long long previewGenerationState;                                                //@synthesize previewGenerationState=_previewGenerationState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewQueue;                                      //@synthesize previewQueue=_previewQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewProgressQueue;                              //@synthesize previewProgressQueue=_previewProgressQueue - In the implementation block
@property (assign,nonatomic) AB shouldGenerateAttachmentsWhenReachable;                                      //@synthesize shouldGenerateAttachmentsWhenReachable=_shouldGenerateAttachmentsWhenReachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGenerator;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)setPreviewQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(ICProgressIndicatorTracker *)progressTracker;
-(void)setProgressTracker:(ICProgressIndicatorTracker *)arg1 ;
-(void)generatePreviewsIfNeeded;
-(void)enableAutomaticPreviewGeneration;
-(ICAttachmentPreviewGeneratorOperationQueue *)costlyGeneratorQueue;
-(BOOL)isPreviewGenerationSupported;
-(unsigned long long)previewGenerationState;
-(void)setPreviewGenerationState:(unsigned long long)arg1 ;
-(NSMutableSet *)attachmentIDsPending;
-(void)generatePendingPreviews;
-(void)attachmentNeedsPreviewGenerationNotification:(id)arg1 ;
-(void)generatePreviewIfNeededForAttachment:(id)arg1 ;
-(ICAttachmentPreviewGeneratorOperationQueue *)generatorQueue;
-(ICAttachmentPreviewGeneratorOperationQueue *)asyncGeneratorQueue;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentWillBeDeleted:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(NSMapTable *)lastOperationForAttachmentID;
-(NSObject*<OS_dispatch_queue>)previewProgressQueue;
-(NSMutableDictionary *)attachmentIDsProgress;
-(void)generatePendingPreviewForAttachment:(id)arg1 ;
-(void)setShouldGenerateAttachmentsWhenReachable:(AB)arg1 ;
-(void)progressIndicatorTrackerStartAnimation;
-(void)progressIndicatorTrackerStopAnimation;
-(void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1 ;
-(void)cancelGenerationOfPendingPreviews;
-(void)disableAutomaticPreviewGeneration;
-(void)operationComplete:(id)arg1 ;
-(void)setProgress:(id)arg1 forObjectID:(id)arg2 ;
-(id)progressForObjectID:(id)arg1 ;
-(void)cancelIfNeededForAttachment:(id)arg1 ;
-(void)setAsyncGeneratorQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setCostlyGeneratorQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setGeneratorQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setLastOperationForAttachmentID:(NSMapTable *)arg1 ;
-(void)setAttachmentIDsPending:(NSMutableSet *)arg1 ;
-(void)setAttachmentIDsProgress:(NSMutableDictionary *)arg1 ;
-(void)setPreviewProgressQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AB)shouldGenerateAttachmentsWhenReachable;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)suspend;
@end

