/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUGLTexture;

@interface NUGLSampler : NSObject {

	unsigned _wrapMode;
	unsigned _minificationFilter;
	unsigned _magnificationFilter;
	NUGLTexture* _texture;

}

@property (nonatomic,readonly) NUGLTexture * texture;                   //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) unsigned wrapMode;                         //@synthesize wrapMode=_wrapMode - In the implementation block
@property (assign,nonatomic) unsigned minificationFilter;               //@synthesize minificationFilter=_minificationFilter - In the implementation block
@property (assign,nonatomic) unsigned magnificationFilter;              //@synthesize magnificationFilter=_magnificationFilter - In the implementation block
-(unsigned)wrapMode;
-(unsigned)minificationFilter;
-(unsigned)magnificationFilter;
-(NUGLTexture *)texture;
-(id)initWithTexture:(id)arg1 ;
-(void)setWrapMode:(unsigned)arg1 ;
-(id)init;
-(id)description;
-(void)setMinificationFilter:(unsigned)arg1 ;
-(void)setMagnificationFilter:(unsigned)arg1 ;
@end

