/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(CFStringRef)getContentID;
-(void)setReLayout;
-(void)handleNeedsLayoutNotification;
-(void)setContent:(CFDictionaryRef)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)finalize;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)layoutSublayers;
@end

