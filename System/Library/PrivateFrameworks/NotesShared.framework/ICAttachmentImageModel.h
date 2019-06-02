/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailImage;
-(BOOL)canSaveURL;
-(void)updateFileBasedAttributes;
-(void)addLocation;
-(id)saveURL;
-(id)generateHardLinkURLIfNecessaryForURL:(id)arg1 ;
-(BOOL)canMarkup;
-(void)updateAttachmentSize;
-(BOOL)shouldCropImage;
-(CGAffineTransform)previewImageOrientationTransform;
-(long long)previewImageOrientation;
-(id)previewImageTypeUTI;
-(BOOL)canConvertToHTMLForSharing;
-(id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2 ;
-(BOOL)needsFullSizePreview;
-(BOOL)showThumbnailInNoteList;
-(BOOL)hasPreviews;
-(BOOL)supportsQuickLook;
-(id)previewItemTitle;
@end

