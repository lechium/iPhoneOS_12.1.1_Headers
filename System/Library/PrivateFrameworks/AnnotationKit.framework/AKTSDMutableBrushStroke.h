/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKTSDBrushStroke.h>

@class UIColor, NSString;

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke {

	int join;
	UIColor* color;
	double width;
	double miterLimit;
	NSString* strokeName;

}

@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) NSString * strokeName; 
-(int)join;
-(void)setJoin:(int)arg1 ;
-(NSString *)strokeName;
-(void)setStrokeName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
@end

