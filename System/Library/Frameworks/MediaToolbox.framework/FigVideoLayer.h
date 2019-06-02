/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(void)notificationBarrier;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(BOOL)isVideoLayerBeingServiced;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(id)initWithLayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end

