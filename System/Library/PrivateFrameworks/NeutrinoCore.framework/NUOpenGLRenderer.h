/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderer.h>

@class NSString, NUGLContext;

@interface NUOpenGLRenderer : NURenderer {

	NSString* _rendererString;
	NSString* _versionString;
	NUGLContext* _glContext;

}

@property (nonatomic,readonly) NUGLContext * glContext;              //@synthesize glContext=_glContext - In the implementation block
-(id)initWithGLContext:(id)arg1 options:(id)arg2 ;
-(id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3 ;
-(id)renderDestinationForSurface:(id)arg1 owner:(id)arg2 ;
-(id)initWithCIContext:(id)arg1 ;
-(id)_textureForSurface:(id)arg1 owner:(id)arg2 ;
-(void)_renderImage:(id)arg1 toTexture:(id)arg2 bounds:(SCD_Struct_NU6)arg3 withColorSpace:(id)arg4 ;
-(NUGLContext *)glContext;
-(id)name;
@end

