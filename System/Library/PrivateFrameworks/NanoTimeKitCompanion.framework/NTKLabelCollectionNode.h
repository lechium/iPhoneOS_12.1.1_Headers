/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@interface NTKLabelCollectionNode : NTKCollectionNode {

	BOOL _paddedWithZeros;
	unsigned _labels;
	unsigned _start;
	unsigned _multiple;
	unsigned _repeat;
	long long _faceStyle;
	long long _font;
	double _fontSize;
	double _color;
	const NTKLabelPosition* _positions;

}

@property (assign,nonatomic) long long faceStyle;                            //@synthesize faceStyle=_faceStyle - In the implementation block
@property (assign,nonatomic) unsigned labels;                                //@synthesize labels=_labels - In the implementation block
@property (assign,nonatomic) unsigned start;                                 //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) unsigned multiple;                              //@synthesize multiple=_multiple - In the implementation block
@property (assign,nonatomic) unsigned repeat;                                //@synthesize repeat=_repeat - In the implementation block
@property (assign,nonatomic) long long font;                                 //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double fontSize;                                //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL paddedWithZeros;                           //@synthesize paddedWithZeros=_paddedWithZeros - In the implementation block
@property (assign,nonatomic) double color;                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) const NTKLabelPosition* positions;              //@synthesize positions=_positions - In the implementation block
+(void)applyLabelPositions:(const NTKLabelPosition*)arg1 toNodes:(id)arg2 forDevice:(id)arg3 ;
+(void)applyLabelPosition:(const NTKLabelPosition*)arg1 withCenter:(CGPoint)arg2 toNode:(id)arg3 forDevice:(id)arg4 ;
+(void)applyLabelPositions:(const NTKLabelPosition*)arg1 withCenter:(CGPoint)arg2 toNodes:(id)arg3 forDevice:(id)arg4 ;
+(void)applyLabelPosition:(const NTKLabelPosition*)arg1 toNode:(id)arg2 forDevice:(id)arg3 ;
-(id)initForDevice:(id)arg1 ;
-(long long)faceStyle;
-(unsigned)repeat;
-(BOOL)paddedWithZeros;
-(void)updateLabelNodePositions;
-(void)createSubNodes;
-(void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2 ;
-(void)setFaceStyle:(long long)arg1 ;
-(void)colorize:(id)arg1 ;
-(const NTKLabelPosition*)positions;
-(void)setMultiple:(unsigned)arg1 ;
-(void)setRepeat:(unsigned)arg1 ;
-(void)setPaddedWithZeros:(BOOL)arg1 ;
-(void)setPositions:(const NTKLabelPosition*)arg1 ;
-(void)setFont:(long long)arg1 ;
-(long long)font;
-(double)color;
-(void)setColor:(double)arg1 ;
-(double)fontSize;
-(unsigned)start;
-(unsigned)multiple;
-(void)setStart:(unsigned)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setLabels:(unsigned)arg1 ;
-(unsigned)labels;
@end

