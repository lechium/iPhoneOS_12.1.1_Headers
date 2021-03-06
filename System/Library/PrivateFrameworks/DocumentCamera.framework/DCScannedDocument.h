/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSURL;

@interface DCScannedDocument : NSObject {

	NSString* _title;
	NSMutableArray* _docInfos;
	NSURL* _scannedDocumentImageDirectoryURL;

}

@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * docInfos;                               //@synthesize docInfos=_docInfos - In the implementation block
@property (nonatomic,readonly) NSURL * scannedDocumentImageDirectoryURL;              //@synthesize scannedDocumentImageDirectoryURL=_scannedDocumentImageDirectoryURL - In the implementation block
@property (readonly) unsigned long long numberOfScans; 
@property (readonly) unsigned long long pageCount; 
+(id)scannedDocumentsFolderURL;
+(void)initialize;
-(BOOL)saveToURL:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)docInfos;
-(id)getImage:(id)arg1 ;
-(BOOL)deleteImage:(id)arg1 ;
-(void)replaceContentsWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 ;
-(void)deleteAllImages;
-(BOOL)copyImagesFromDocInfoCollection:(id)arg1 imageCache:(id)arg2 ;
-(id)pListURL:(id)arg1 ;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
-(id)copyImageForLoading:(id)arg1 fromFolderURL:(id)arg2 ;
-(id)copyImageForSaving:(id)arg1 toFolderURL:(id)arg2 ;
-(BOOL)makeSureScanDirectoryExists:(id*)arg1 ;
-(id)URLForImageWithUUID:(id)arg1 ;
-(id)URLForImageInFolder:(id)arg1 withUUID:(id)arg2 ;
-(id)imageOfPageAtIndex:(unsigned long long)arg1 ;
-(id)copyImageAtURL:(id)arg1 ;
-(NSURL *)scannedDocumentImageDirectoryURL;
-(id)getImageURL:(id)arg1 ;
-(id)initWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 ;
-(unsigned long long)numberOfScans;
-(id)imageForScanAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)pageCount;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
@end

