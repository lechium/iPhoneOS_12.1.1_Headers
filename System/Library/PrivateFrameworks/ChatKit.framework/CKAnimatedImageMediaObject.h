/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject
+(id)UTITypes;
+(Class)__ck_attachmentItemClass;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(BOOL)needsAnimation;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)validatePreviewFormat;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(id)generateThumbnailsForWidth:(double)arg1 isSticker:(BOOL)arg2 orientation:(char)arg3 ;
-(id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(char)arg2 ;
-(id)generateAndPersistAnimatedPreviewFromImageData:(id)arg1 forWidth:(double)arg2 withTransferGUID:(id)arg3 isSticker:(BOOL)arg4 ;
-(id)notificationCenter;
-(/*^block*/id)imageEdgeEnhancementBlockIfNecessary;
-(id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 imageData:(id)arg3 isSticker:(BOOL)arg4 orientation:(char)arg5 ;
-(id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2 isSticker:(BOOL)arg3 ;
-(id)animatedImageForWidth:(double)arg1 ;
-(void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(char)arg3 ;
@end

