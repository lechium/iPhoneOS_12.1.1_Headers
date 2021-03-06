/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXVideoFill, SXClippingView, SXVideoFillPlayerView, SXImageResource, NSString;

@interface SXVideoFillView : SXFillView <SXViewportChangeListener> {

	SXVideoFill* _videoFill;
	SXClippingView* _clippingView;
	SXVideoFillPlayerView* _playerView;
	SXImageResource* _imageResource;

}

@property (nonatomic,retain) SXClippingView * clippingView;                   //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) SXVideoFillPlayerView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) SXImageResource * imageResource;                 //@synthesize imageResource=_imageResource - In the implementation block
@property (nonatomic,readonly) SXVideoFill * videoFill;                       //@synthesize videoFill=_videoFill - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXVideoFillPlayerView *)playerView;
-(void)setPlayerView:(SXVideoFillPlayerView *)arg1 ;
-(SXClippingView *)clippingView;
-(void)setClippingView:(SXClippingView *)arg1 ;
-(SXImageResource *)imageResource;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithVideoFill:(id)arg1 documentController:(id)arg2 imageViewFactory:(id)arg3 ;
-(SXVideoFill *)videoFill;
-(void)setImageResource:(SXImageResource *)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)play;
-(void)pause;
@end

