/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Head : _Geometry {

	float _width;
	float _height;
	float _curHeadTilt;
	float _curHeadX;
	int _inAnimation;
	NSMutableArray* _texs;
	NSMutableArray* _blinkTexs;
	GLKVector2 _bone;
	GLKVector2 _offset;

}

@property (assign,nonatomic) float width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSMutableArray * texs;                   //@synthesize texs=_texs - In the implementation block
@property (nonatomic,retain) NSMutableArray * blinkTexs;              //@synthesize blinkTexs=_blinkTexs - In the implementation block
@property (assign,nonatomic) _GLKVector2 bone;                        //@synthesize bone=_bone - In the implementation block
@property (assign,nonatomic) _GLKVector2 offset;                      //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) float curHeadTilt;                       //@synthesize curHeadTilt=_curHeadTilt - In the implementation block
@property (assign,nonatomic) float curHeadX;                          //@synthesize curHeadX=_curHeadX - In the implementation block
@property (assign,nonatomic) int inAnimation;                         //@synthesize inAnimation=_inAnimation - In the implementation block
-(NSMutableArray *)texs;
-(void)setTexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)blinkTexs;
-(void)setBlinkTexs:(NSMutableArray *)arg1 ;
-(_GLKVector2)bone;
-(void)setBone:(_GLKVector2)arg1 ;
-(float)curHeadTilt;
-(void)setCurHeadTilt:(float)arg1 ;
-(float)curHeadX;
-(void)setCurHeadX:(float)arg1 ;
-(int)inAnimation;
-(void)setInAnimation:(int)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(float)height;
-(_GLKVector2)offset;
-(void)setOffset:(_GLKVector2)arg1 ;
@end

