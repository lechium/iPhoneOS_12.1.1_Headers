/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCRawImage : NSObject {

	CGImageRef _imageRef;
	char* _data;
	long long _width;
	long long _height;
	long long _bytesPerPixel;

}

@property (assign,nonatomic) char* data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long width;                      //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long bytesPerPixel;              //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,retain) CGImageRef imageRef;                  //@synthesize imageRef=_imageRef - In the implementation block
+(id)rawImageForImage:(CGImageRef)arg1 ;
-(long long)bytesPerPixel;
-(void)setBytesPerPixel:(long long)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
-(void)dealloc;
-(long long)width;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)height;
-(char*)data;
-(void)setData:(char*)arg1 ;
-(CGImageRef)imageRef;
@end

