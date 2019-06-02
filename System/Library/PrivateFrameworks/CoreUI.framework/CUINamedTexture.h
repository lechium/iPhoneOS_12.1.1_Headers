/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup {

	double _scale;
	cuintproperties _textureProperties;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaCropped; 
-(BOOL)_cacheRenditionProperties;
-(BOOL)isAlphaCropped;
-(CGRect)alphaCroppedRect;
-(id)textureWithBufferAllocator:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(id)description;
-(BOOL)isOpaque;
-(int)exifOrientation;
@end
