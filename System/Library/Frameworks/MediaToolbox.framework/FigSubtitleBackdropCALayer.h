/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {

	OpaqueFigSubtitleBackdropCALayerInternal* bdLayerInternal;

}
-(BOOL)shouldEnableBackdropLayer;
-(void)updateBackdropLayer;
-(void)updateWindowOpacity:(double)arg1 ;
-(void)updateHDRContentState:(BOOL)arg1 ;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setNeedsLayout;
-(void)setBounds:(CGRect)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)setContents:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
@end
