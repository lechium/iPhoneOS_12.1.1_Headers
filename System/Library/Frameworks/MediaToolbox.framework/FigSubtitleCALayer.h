/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigSubtitleBackdropCALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {

	OpaqueFigSubtitleCALayerInternal* layerInternal;

}

@property (assign,getter=isOverscanSubtitleSupportEnabled,nonatomic) BOOL overscanSubtitleSupportEnabled; 
@property (nonatomic,copy) NSString * captionRenderingStrategy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)setVideosize:(CGSize)arg1 ;
-(void)addAnimations:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationsForKey:(id)arg1 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(BOOL)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(BOOL)arg1 ;
-(NSString *)captionRenderingStrategy;
-(void)setCaptionRenderingStrategy:(NSString *)arg1 ;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithLayer:(id)arg1 ;
-(void)clear;
-(id)actionForKey:(id)arg1 ;
@end

