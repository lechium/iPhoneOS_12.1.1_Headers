/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUSurfaceRenderResult.h>

@protocol NUSurfaceImage;
@class NSString, NURegion, NUImageGeometry;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult> {

	id<NUSurfaceImage> _image;

}

@property (retain) id<NUSurfaceImage> image;                         //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
-(NSString *)debugDescription;
-(void)setImage:(id<NUSurfaceImage>)arg1 ;
-(id<NUSurfaceImage>)image;
@end

