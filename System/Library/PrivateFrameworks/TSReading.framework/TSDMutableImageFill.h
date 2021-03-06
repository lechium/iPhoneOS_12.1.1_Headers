/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageFill.h>

@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill

@property (nonatomic,retain) TSPData * imageData; 
@property (assign,nonatomic) BOOL interpretsUntaggedImageDataAsGeneric; 
@property (assign,nonatomic) int technique; 
@property (nonatomic,copy) TSUColor * tintColor; 
@property (assign,nonatomic) CGSize fillSize; 
-(void)setInterpretsUntaggedImageDataAsGeneric:(BOOL)arg1 ;
-(void)setTechnique:(int)arg1 ;
-(void)setFillSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTintColor:(TSUColor *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setImageData:(TSPData *)arg1 ;
@end

