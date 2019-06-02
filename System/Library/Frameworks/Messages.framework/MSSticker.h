/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSStickerPrivate.h>

@class NSURL, NSString, NSData, CKImageData, NSError, UIImage;

@interface MSSticker : NSObject <MSStickerPrivate> {

	NSURL* _imageFileURL;
	NSString* _localizedDescription;
	NSData* _data;
	CKImageData* __imageData;
	NSError* __stickerError;
	UIImage* __thumbnail;

}

@property (nonatomic,retain) CKImageData * _imageData;                            //@synthesize _imageData=__imageData - In the implementation block
@property (nonatomic,retain) NSError * _stickerError;                             //@synthesize _stickerError=__stickerError - In the implementation block
@property (nonatomic,retain) UIImage * _thumbnail;                                //@synthesize _thumbnail=__thumbnail - In the implementation block
@property (nonatomic,readonly) NSURL * imageFileURL;                              //@synthesize imageFileURL=_imageFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * data;                                     //@synthesize data=_data - In the implementation block
+(id)MSStickerPreviewCacheKeyForSticker:(id)arg1 ;
+(id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3 ;
-(CKImageData *)_imageData;
-(id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id*)arg4 ;
-(id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3 ;
-(NSURL *)imageFileURL;
-(void)set_stickerError:(NSError *)arg1 ;
-(void)set_imageData:(CKImageData *)arg1 ;
-(NSError *)_stickerError;
-(void)set_thumbnail:(UIImage *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3 ;
-(void)_generateImageData;
-(void)_generateThumbnail;
-(id)accessibilityLabel;
-(NSString *)description;
-(NSString *)localizedDescription;
-(NSData *)data;
-(UIImage *)_thumbnail;
@end

