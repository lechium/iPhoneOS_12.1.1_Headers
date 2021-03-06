/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLPixelImageBuffer.h>

@interface BLCVPixelImageBuffer : BLPixelImageBuffer {

	CVBufferRef _pixelBuffer;
	CGContextRef _cgcontext;

}
-(CVBufferRef)pixelBuffer;
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(void)renderCIImage:(id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(CGContextRef)cgcontext;
-(id)ciImage;
-(void)dealloc;
@end

