/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>
#import <TSReading/TSDTilingLayerDelegate.h>

@class CALayer, NSString;

@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate> {

	CALayer* _equationLayer;

}

@property (nonatomic,retain) CALayer * equationLayer;               //@synthesize equationLayer=_equationLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)clipRect;
-(void)screenScaleDidChange;
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(CALayer *)equationLayer;
-(void)setEquationLayer:(CALayer *)arg1 ;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)willBeRemoved;
@end

