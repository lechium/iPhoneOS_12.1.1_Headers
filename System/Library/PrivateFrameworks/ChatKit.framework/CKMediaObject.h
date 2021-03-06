/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@protocol CKFileTransfer, OS_dispatch_group;
@class NSURL, NSString, NSObject, NSData, NSDictionary;

@interface CKMediaObject : NSObject <QLPreviewItem> {

	BOOL _isFromMe;
	BOOL _suppressPreviewForUnknownSender;
	id<CKFileTransfer> _transfer;
	NSURL* _cachedHighQualityFileURL;
	NSObject*<OS_dispatch_group> _highQualityFetchInProgressGroup;

}

@property (nonatomic,copy,readonly) NSString * previewFilenameExtension; 
@property (nonatomic,retain) id<CKFileTransfer> transfer;                                               //@synthesize transfer=_transfer - In the implementation block
@property (nonatomic,retain) NSURL * cachedHighQualityFileURL;                                          //@synthesize cachedHighQualityFileURL=_cachedHighQualityFileURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> highQualityFetchInProgressGroup;              //@synthesize highQualityFetchInProgressGroup=_highQualityFetchInProgressGroup - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                                             //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL suppressPreviewForUnknownSender;                                      //@synthesize suppressPreviewForUnknownSender=_suppressPreviewForUnknownSender - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,copy,readonly) NSString * transferGUID; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,readonly) int mediaType; 
@property (nonatomic,readonly) BOOL canShareItem; 
@property (nonatomic,readonly) BOOL needsAnimation; 
@property (nonatomic,readonly) BOOL generatePreviewOutOfProcess; 
@property (nonatomic,readonly) BOOL validatePreviewFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)iconCache;
+(id)UTITypes;
+(BOOL)shouldScaleUpPreview;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(BOOL)shouldShadePreview;
+(id)fallbackFilenamePrefix;
+(id)mediaClasses;
+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
-(id)fileManager;
-(int)mediaType;
-(BOOL)isFromMe;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(NSString *)UTIType;
-(BOOL)canShareItem;
-(id)pasteboardItem;
-(BOOL)suppressPreviewForUnknownSender;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)composeImagesForEntryContentViewWidth:(double)arg1 ;
-(id<CKFileTransfer>)transfer;
-(BOOL)shouldShowViewer;
-(BOOL)needsAnimation;
-(BOOL)canExport;
-(void)export:(id)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(NSString *)transferGUID;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 ;
-(BOOL)generatePreviewOutOfProcess;
-(void)setTransfer:(id<CKFileTransfer>)arg1 ;
-(void)setSuppressPreviewForUnknownSender:(BOOL)arg1 ;
-(NSDictionary *)transcoderUserInfo;
-(NSObject*<OS_dispatch_group>)highQualityFetchInProgressGroup;
-(void)fetchHighQualityFile:(/*^block*/id)arg1 ;
-(NSURL *)cachedHighQualityFileURL;
-(void)setHighQualityFetchInProgressGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setCachedHighQualityFileURL:(NSURL *)arg1 ;
-(BOOL)validatePreviewFormat;
-(BOOL)isPromisedItem;
-(BOOL)transcoderPreviewGenerationFailed;
-(NSString *)previewFilenameExtension;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(BOOL)isPreviewable;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(Class)coloredBalloonViewClass;
-(BOOL)shouldBeQuickLooked;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewDispatchCache;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 ;
-(id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(char)arg3 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
-(Class)previewBalloonViewClass;
-(void)cacheAndPersistPreview:(id)arg1 orientation:(char)arg2 ;
-(BOOL)shouldShowDisclosure;
-(id)fileSizeString;
-(id)downloadProgressImage;
-(id)downloadProgressString;
-(Class)inlineStickerBalloonViewClass;
-(BOOL)validPreviewExistsAtURL:(id)arg1 ;
-(void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 ;
-(id)ASTCDataFromImage:(id)arg1 ;
-(id)JPEGDataFromImage:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)title;
-(id)subtitle;
-(id)icon;
-(NSURL *)previewItemURL;
-(NSURL *)fileURL;
-(NSData *)data;
-(id)location;
-(NSString *)filename;
-(NSString *)mimeType;
@end

