/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSString, NSArray;

@interface DKDGLFrameBufferTextureConfig : NSObject {

	BOOL _isTextureNameGenerated;
	int _GLInternalFormat;
	unsigned _GLFormat;
	unsigned _GLType;
	unsigned _attachment;
	NSString* _name;
	NSArray* _textureParameters;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (getter=LInternalFormat,nonatomic,readonly) int GLInternalFormat;              //@synthesize GLInternalFormat=_GLInternalFormat - In the implementation block
@property (getter=LFormat,nonatomic,readonly) unsigned GLFormat;                         //@synthesize GLFormat=_GLFormat - In the implementation block
@property (getter=LType,nonatomic,readonly) unsigned GLType;                             //@synthesize GLType=_GLType - In the implementation block
@property (nonatomic,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned attachment;                                      //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) NSArray * textureParameters;                              //@synthesize textureParameters=_textureParameters - In the implementation block
+(id)textureConfigWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 textureParameters:(id)arg6 name:(id)arg7 ;
+(id)textureConfigWithSize:(CGSize)arg1 attachment:(unsigned)arg2 textureParameters:(id)arg3 name:(id)arg4 ;
+(id)textureConfigWithSize:(CGSize)arg1 textureParameters:(id)arg2 name:(id)arg3 ;
+(id)textureConfigWithSize:(CGSize)arg1 name:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 internalFormat:(int)arg2 format:(unsigned)arg3 type:(unsigned)arg4 attachment:(unsigned)arg5 textureParameters:(id)arg6 name:(id)arg7 ;
-(int)GLInternalFormat;
-(unsigned)GLFormat;
-(unsigned)GLType;
-(NSArray *)textureParameters;
-(CGSize)size;
-(void)dealloc;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)attachment;
@end

