/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSData;

@interface PLJPEGDataImage : UIImage {

	NSData* _plData;
	CVBufferRef _pixelBuffer;

}
+(id)pl_imageWithStoredJPEGData:(id)arg1 ;
-(id)pl_imageJPEGData;
-(void)dealloc;
-(CGImageRef)CGImage;
@end

