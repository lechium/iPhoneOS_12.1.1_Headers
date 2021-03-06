/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICAttachmentPreviewImageUI.h>

@protocol OS_dispatch_queue;
@class NSObject, NSData, NSDate, ICAttachment, NSString;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject <ICAttachmentPreviewImageUI> {

	NSObject*<OS_dispatch_queue> _fileQueue;
	unsigned long long _imageID;

}

@property (nonatomic,retain) NSData * encryptedMetadata; 
@property (nonatomic,retain) NSData * cryptoMetadataInitializationVector; 
@property (nonatomic,retain) NSData * cryptoMetadataTag; 
@property (assign,nonatomic) unsigned long long imageID;                               //@synthesize imageID=_imageID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> fileQueue;                           //@synthesize fileQueue=_fileQueue - In the implementation block
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) BOOL versionOutOfDate; 
@property (nonatomic,retain) NSDate * modifiedDate; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (assign,nonatomic) BOOL scaleWhenDrawing; 
@property (nonatomic,retain) NSData * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)purgeAllAttachmentPreviewImagesInContext:(id)arg1 ;
+(void)purgeAllPreviewImageFiles;
+(void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)previewImageDirectoryURL;
+(id)previewImageURLsForIdentifier:(id)arg1 ;
+(id)fileGlobalQueue;
+(id)fileQueueGroup;
+(void)purgePreviewImageFilesForIdentifiers:(id)arg1 ;
+(long long)updateFileWriteCounterBy:(long long)arg1 identifier:(id)arg2 ;
+(void)waitUntilAllFileWritesAreFinished;
+(id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 ;
+(id)allAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2 ;
+(id)newAttachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2 ;
+(id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2 ;
+(id)attachmentPreviewImageIdentifiersForAccount:(id)arg1 ;
+(id)visibleAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)concurrentFileLoadLimitSemaphore;
-(void)setMetadata:(NSData *)arg1 ;
-(void)prepareForDeletion;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)willTurnIntoFault;
-(BOOL)shouldSyncToCloud;
-(void)invalidateCache;
-(id)ic_loggingValues;
-(void)deleteFromLocalDatabase;
-(void)saveAndClearDecryptedData;
-(id)parentEncryptableObject;
-(void)invalidateOrientedImage;
-(void)setImageData:(id)arg1 withSize:(CGSize)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeItemAtURL:(id)arg1 ;
-(id)encryptedPreviewImageURL;
-(void)invalidateImage;
-(BOOL)makeSurePreviewImageDirectoryExists:(id*)arg1 ;
-(BOOL)writeEncryptedImageFromData:(id)arg1 ;
-(void)updateFlagToExcludeFromBackup;
-(id)previewImagePathExtension;
-(void)createOrientedPreviewIfNeeded;
-(void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(BOOL)arg1 ;
-(id)_decryptedImageData;
-(BOOL)imageIsValid;
-(BOOL)imageIsWriting;
-(void)saveScaledImageFromImageSrc:(CGImageSourceRef)arg1 typeUTI:(CFStringRef)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAnyPNGPreviewImageFiles;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(void)setImageID:(unsigned long long)arg1 ;
-(id)orientedPreviewImageURL;
-(CGAffineTransform)orientedImageTransform;
-(id)previewImageURL;
-(id)decryptedImageData;
-(NSObject*<OS_dispatch_queue>)fileQueue;
-(unsigned long long)imageID;
-(id)orientedPreviewImageURLWithoutCreating;
-(void)updateFlagToExcludeFromBackupForURL:(id)arg1 touchFileIfNecessary:(BOOL)arg2 ;
-(BOOL)needsToBeFetchedFromCloud;
-(BOOL)needsInitialFetchFromCloud;
-(CGSize)size;
-(NSData *)metadata;
@end

