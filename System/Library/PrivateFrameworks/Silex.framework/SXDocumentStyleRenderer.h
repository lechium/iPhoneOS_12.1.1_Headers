/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXDocumentStyleRenderer.h>

@protocol SXDocumentStyleRenderer <NSObject>
@required
-(void)applyStyle:(id)arg1 onView:(id)arg2;

@end


@protocol SXPresentationDelegate, SXDocumentControllerProvider, SXImageViewFactory, SXGradientFactory;
@class SXViewport, UIView, SXGradientFillView, SXImageFillView, SXVideoFillView, NSString;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer> {

	id<SXPresentationDelegate> _presentationDelegate;
	id<SXDocumentControllerProvider> _documentControllerProvider;
	id<SXImageViewFactory> _imageViewFactory;
	SXViewport* _viewport;
	id<SXGradientFactory> _gradientFactory;
	UIView* _topBackgroundView;
	SXGradientFillView* _gradientFillView;
	SXImageFillView* _imageFillView;
	SXVideoFillView* _videoFillView;

}

@property (nonatomic,readonly) id<SXDocumentControllerProvider> documentControllerProvider;              //@synthesize documentControllerProvider=_documentControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                                  //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                                    //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXGradientFactory> gradientFactory;                                    //@synthesize gradientFactory=_gradientFactory - In the implementation block
@property (nonatomic,retain) UIView * topBackgroundView;                                                 //@synthesize topBackgroundView=_topBackgroundView - In the implementation block
@property (nonatomic,retain) SXGradientFillView * gradientFillView;                                      //@synthesize gradientFillView=_gradientFillView - In the implementation block
@property (nonatomic,retain) SXImageFillView * imageFillView;                                            //@synthesize imageFillView=_imageFillView - In the implementation block
@property (nonatomic,retain) SXVideoFillView * videoFillView;                                            //@synthesize videoFillView=_videoFillView - In the implementation block
@property (assign,nonatomic,__weak) id<SXPresentationDelegate> presentationDelegate;                     //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresentationDelegate:(id<SXPresentationDelegate>)arg1 ;
-(SXViewport *)viewport;
-(void)setTopBackgroundView:(UIView *)arg1 ;
-(UIView *)topBackgroundView;
-(id<SXPresentationDelegate>)presentationDelegate;
-(void)applyStyle:(id)arg1 onView:(id)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(id<SXDocumentControllerProvider>)documentControllerProvider;
-(id<SXImageViewFactory>)imageViewFactory;
-(void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2 ;
-(void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2 ;
-(void)applyFillForStyle:(id)arg1 onView:(id)arg2 ;
-(id<SXGradientFactory>)gradientFactory;
-(void)layoutTopBackgroundView;
-(id)viewForFill:(id)arg1 ;
-(id)videoPlayerViewForFill:(id)arg1 ;
-(id)imageViewForFill:(id)arg1 ;
-(id)gradientViewForFill:(id)arg1 ;
-(SXGradientFillView *)gradientFillView;
-(void)setGradientFillView:(SXGradientFillView *)arg1 ;
-(SXImageFillView *)imageFillView;
-(void)setImageFillView:(SXImageFillView *)arg1 ;
-(SXVideoFillView *)videoFillView;
-(void)setVideoFillView:(SXVideoFillView *)arg1 ;
-(id)initWithDocumentControllerProvider:(id)arg1 viewport:(id)arg2 imageViewFactory:(id)arg3 gradientFactory:(id)arg4 ;
@end

