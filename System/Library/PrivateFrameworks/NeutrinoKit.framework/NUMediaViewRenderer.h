/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue, NURenderStatistics;
#import <NeutrinoKit/NeutrinoKit-Structs.h>
@class NUSurfaceRenderClient, NULivePhotoRenderClient, NUVideoRenderClient, UIView, NUCoalescer, NSObject, NUResponse, NUComposition, NUColorSpace, NUPixelFormat, NUMediaView, NSArray, NUAVPlayerController, AVComposition;

@interface NUMediaViewRenderer : NSObject {

	NUSurfaceRenderClient* _zoomClient;
	NUSurfaceRenderClient* _backfillClient;
	NULivePhotoRenderClient* _livePhotoClient;
	NUVideoRenderClient* _videoClient;
	UIView* _livePhotoView;
	NUCoalescer* _livePhotoUpdateCoalescer;
	NUCoalescer* _videoUpdateCoalescer;
	BOOL _canRenderVideoLive;
	int _videoRenderInFlightCount;
	NSObject*<OS_dispatch_group> _renderGroup;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NUResponse* _zoomRenderResponse;
	NUResponse* _backfillRenderResponse;
	CGRect _lastZoomRect;
	double _lastZoomScale;
	double _lastZoomRenderTime;
	id<NURenderStatistics> _lastZoomRenderStatistics;
	id<NURenderStatistics> _lastBackfillRenderStatictics;
	BOOL _isPanning;
	BOOL _isZooming;
	BOOL __videoEnabled;
	NUComposition* _composition;
	NUColorSpace* _colorSpace;
	NUPixelFormat* _pixelFormat;
	NUMediaView* _mediaView;
	double _backingScale;
	NSArray* _pipelineFilters;
	double _maximumZoomScale;
	NUAVPlayerController* _nuAVPlayerController;
	unsigned long long _displayType;
	unsigned long long _computedDisplayType;
	AVComposition* _previousVideo;

}

@property (assign,setter=_setVideoEnabled:,getter=_isVideoEnabled,nonatomic) BOOL _videoEnabled;              //@synthesize _videoEnabled=__videoEnabled - In the implementation block
@property (nonatomic,retain) AVComposition * previousVideo;                                                   //@synthesize previousVideo=_previousVideo - In the implementation block
@property (nonatomic,copy) NUComposition * composition;                                                       //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                                                       //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,retain) NUPixelFormat * pixelFormat;                                                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,__weak,readonly) NUMediaView * mediaView;                                                //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic) double backingScale;                                                             //@synthesize backingScale=_backingScale - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;                                                         //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (getter=isZoomedToFit,nonatomic,readonly) BOOL zoomedToFit; 
@property (assign,nonatomic) double maximumZoomScale;                                                         //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (readonly) BOOL isReady; 
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled; 
@property (nonatomic,readonly) NUAVPlayerController * nuAVPlayerController;                                   //@synthesize nuAVPlayerController=_nuAVPlayerController - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;                                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) unsigned long long computedDisplayType;                                        //@synthesize computedDisplayType=_computedDisplayType - In the implementation block
+(BOOL)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 ;
-(NUPixelFormat *)pixelFormat;
-(void)setPixelFormat:(NUPixelFormat *)arg1 ;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(NSArray *)pipelineFilters;
-(NUComposition *)composition;
-(BOOL)isReady;
-(NUMediaView *)mediaView;
-(void)setBackingScale:(double)arg1 ;
-(BOOL)isZoomedToFit;
-(CGPoint)convertPoint:(CGPoint)arg1 toImageFromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromImageToView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromImageToView:(id)arg2 ;
-(id)initWithMediaView:(id)arg1 ;
-(void)beginZooming;
-(void)endZooming;
-(void)beginPanning;
-(void)endPanning;
-(NUAVPlayerController *)nuAVPlayerController;
-(void)_withComposition:(id)arg1 visitRenderClient:(/*^block*/id)arg2 ;
-(void)_updateDisplayForMediaType:(long long)arg1 ;
-(void)_updateImageRenderForComposition:(id)arg1 ;
-(void)_updateVideoComposition:(id)arg1 ;
-(void)_coalesceUpdateVideoComposition:(id)arg1 ;
-(void)_coalesceUpdateLivePhotoComposition:(id)arg1 ;
-(void)_beginAnimating;
-(void)_endAnimating;
-(void)_updateBackfillLayerWithLatestRenderResponse;
-(void)_updateROILayerWithLatestRenderResponse;
-(CGRect)_scrollBounds;
-(id)_backfillRenderRequestForComposition:(id)arg1 ;
-(/*^block*/id)_videoFrameImageRenderResponseHandler;
-(id)_zoomRenderRequestForComposition:(id)arg1 ;
-(/*^block*/id)_zoomRenderResponseHandler;
-(/*^block*/id)_backfillRenderResponseHandler;
-(void)_updateROILayerWithRenderResponse:(id)arg1 ;
-(void)_updateBackfillLayerWithRenderResponse:(id)arg1 ;
-(id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2 ;
-(void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2 ;
-(void)_setDisplayType:(unsigned long long)arg1 ;
-(void)_addFullExtentConstraintsForView:(id)arg1 ;
-(void)_updateLivePhotoWithResponse:(id)arg1 ;
-(unsigned long long)computedDisplayType;
-(void)_updateVideoViewLayoutWithGeometry:(id)arg1 ;
-(void)setPreviousVideo:(AVComposition *)arg1 ;
-(id)cacheVideoRenderFilter;
-(void)_updateVideoWithResult:(id)arg1 ;
-(void)_updateLivePhotoComposition:(id)arg1 ;
-(id)_livePhotoFromResponse:(id)arg1 ;
-(double)_targetZoomScale;
-(CGRect)_zoomTargetRect;
-(id)_regionPolicyForZoomTargetRect:(CGRect)arg1 ;
-(id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3 ;
-(double)_lastRenderDuration;
-(void)_setVideoEnabled:(BOOL)arg1 ;
-(BOOL)_isVideoEnabled;
-(CGRect)convertRect:(CGRect)arg1 toImageFromView:(id)arg2 ;
-(id)renderClient;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoViewDidBeginScrubbing:(id)arg1 ;
-(void)livePhotoViewDidEndScrubbing:(id)arg1 ;
-(BOOL)isVideoEnabled;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(void)wait;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(double)backingScale;
-(void)updateComposition:(id)arg1 ;
-(AVComposition *)previousVideo;
-(id)init;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)maximumZoomScale;
-(NUColorSpace *)colorSpace;
-(unsigned long long)displayType;
-(CGSize)targetSize;
@end

