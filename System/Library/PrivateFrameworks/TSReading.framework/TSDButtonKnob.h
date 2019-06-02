/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDKnob.h>

@class TSUImage;

@interface TSDButtonKnob : TSDKnob {

	TSUImage* mImage;
	BOOL mEnabled;
	BOOL mHighlighted;

}

@property (nonatomic,retain) TSUImage * image; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(double*)arg3 ;
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5 ;
-(id)initWithImage:(id)arg1 tag:(unsigned long long)arg2 onRep:(id)arg3 ;
-(void)p_updateLayerImage;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setImage:(TSUImage *)arg1 ;
-(TSUImage *)image;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)knobImage;
@end

