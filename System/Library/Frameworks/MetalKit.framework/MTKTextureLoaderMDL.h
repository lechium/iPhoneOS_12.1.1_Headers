/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class MDLTexture;

@interface MTKTextureLoaderMDL : MTKTextureLoaderData {

	MDLTexture* _texture;
	MTLPixelFormatInfo _pixelFormatInfo;

}
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(BOOL)determineFormatFromChannelEncoding:(long long)arg1 channelCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end
