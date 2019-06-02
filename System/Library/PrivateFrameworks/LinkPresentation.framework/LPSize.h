/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPSize : NSObject <NSCopying> {

	LPPointUnit* _width;
	LPPointUnit* _height;

}

@property (nonatomic,retain,readonly) LPPointUnit * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) LPPointUnit * height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGSize asSize; 
-(CGSize)asSize;
-(id)initWithSquareSize:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)width;
-(id)initWithSize:(CGSize)arg1 ;
-(LPPointUnit *)height;
@end
