/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <Foundation/NSBlockOperation.h>

@class NSString, NSCache, NSMutableArray, NSManagedObjectID, ICAttachmentPreviewImageLoader, NSURL;

@interface ICAttachmentThumbnailOperation : NSBlockOperation {

	BOOL _attachmentPropertiesCaptured;
	BOOL _showAsFileIcon;
	BOOL _isMovie;
	NSString* _cacheKey;
	double _scale;
	NSCache* _cache;
	/*^block*/id _fallbackBlock;
	/*^block*/id _processingBlock;
	NSMutableArray* _completionBlocks;
	NSManagedObjectID* _attachmentID;
	ICAttachmentPreviewImageLoader* _attachmentPreviewImageLoader;
	NSURL* _mediaURL;
	unsigned long long _imageScaling;
	CGSize _minSize;

}

@property (assign,nonatomic) CGSize minSize;                                                             //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) double scale;                                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                                            //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                                                        //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                                                             //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
@property (nonatomic,copy) id processingBlock;                                                           //@synthesize processingBlock=_processingBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                          //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * attachmentID;                                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (assign,nonatomic) BOOL attachmentPropertiesCaptured;                                          //@synthesize attachmentPropertiesCaptured=_attachmentPropertiesCaptured - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewImageLoader * attachmentPreviewImageLoader;              //@synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                                           //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                                            //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) BOOL showAsFileIcon;                                                        //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) BOOL isMovie;                                                               //@synthesize isMovie=_isMovie - In the implementation block
-(BOOL)isMovie;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(void)setFallbackBlock:(id)arg1 ;
-(void)setProcessingBlock:(id)arg1 ;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(void)capturePropertiesFromAttachment:(id)arg1 ;
-(void)setAttachmentPreviewImageLoader:(ICAttachmentPreviewImageLoader *)arg1 ;
-(void)setShowAsFileIcon:(BOOL)arg1 ;
-(ICAttachmentPreviewImageLoader *)attachmentPreviewImageLoader;
-(void)setIsMovie:(BOOL)arg1 ;
-(void)setAttachmentPropertiesCaptured:(BOOL)arg1 ;
-(BOOL)attachmentPropertiesCaptured;
-(NSManagedObjectID *)attachmentID;
-(id)fallbackBlock;
-(id)processingBlock;
-(BOOL)showAsFileIcon;
-(id)initWithAttachment:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 fallbackBlock:(/*^block*/id)arg8 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)main;
-(NSMutableArray *)completionBlocks;
-(NSString *)cacheKey;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(CGSize)minSize;
-(void)setMinSize:(CGSize)arg1 ;
@end

