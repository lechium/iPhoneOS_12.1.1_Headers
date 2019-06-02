/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentStyleRenderer.h>

@protocol SXComponentStyleRenderer <NSObject>
@required
-(void)prepareForComponentView:(id)arg1;
-(void)applyComponentStyle;
-(void)componentVisiblityStateDidChange:(long long)arg1;

@end


@protocol SXImageViewFactory, SXGradientFactory;
@class SXComponentStyle, SXDocumentController, SXComponentView, SXGradientFillView, SXImageFillView, SXVideoFillView, UIView, NSString;

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener, SXComponentStyleRenderer> {

	BOOL _didRegisterForDynamicBounds;
	SXComponentStyle* _componentStyle;
	SXDocumentController* _documentController;
	id<SXImageViewFactory> _imageViewFactory;
	id<SXGradientFactory> _gradientFactory;
	SXComponentView* _componentView;
	SXGradientFillView* _gradientFillView;
	SXImageFillView* _imageFillView;
	SXVideoFillView* _videoFillView;
	UIView* _fillClippingView;
	UIView* _borderContainerView;

}

@property (nonatomic,readonly) SXComponentStyle * componentStyle;                      //@synthesize componentStyle=_componentStyle - In the implementation block
@property (nonatomic,readonly) SXDocumentController * documentController;              //@synthesize documentController=_documentController - In the implementation block
@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXGradientFactory> gradientFactory;                  //@synthesize gradientFactory=_gradientFactory - In the implementation block
@property (nonatomic,__weak,readonly) SXComponentView * componentView;                 //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) SXGradientFillView * gradientFillView;                    //@synthesize gradientFillView=_gradientFillView - In the implementation block
@property (nonatomic,retain) SXImageFillView * imageFillView;                          //@synthesize imageFillView=_imageFillView - In the implementation block
@property (nonatomic,retain) SXVideoFillView * videoFillView;                          //@synthesize videoFillView=_videoFillView - In the implementation block
@property (nonatomic,retain) UIView * fillClippingView;                                //@synthesize fillClippingView=_fillClippingView - In the implementation block
@property (nonatomic,retain) UIView * borderContainerView;                             //@synthesize borderContainerView=_borderContainerView - In the implementation block
@property (assign,nonatomic) BOOL didRegisterForDynamicBounds;                         //@synthesize didRegisterForDynamicBounds=_didRegisterForDynamicBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXDocumentController *)documentController;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(SXComponentStyle *)componentStyle;
-(void)prepareForComponentView:(id)arg1 ;
-(void)applyComponentStyle;
-(void)componentVisiblityStateDidChange:(long long)arg1 ;
-(id<SXGradientFactory>)gradientFactory;
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
-(id)initWithComponentStyle:(id)arg1 documentController:(id)arg2 imageViewFactory:(id)arg3 gradientViewFactory:(id)arg4 ;
-(BOOL)didRegisterForDynamicBounds;
-(void)setDidRegisterForDynamicBounds:(BOOL)arg1 ;
-(void)applyFill:(id)arg1 ;
-(UIView *)borderContainerView;
-(void)setBorderContainerView:(UIView *)arg1 ;
-(UIView *)fillClippingView;
-(void)setFillClippingView:(UIView *)arg1 ;
-(SXComponentView *)componentView;
-(void)drawBorder:(id)arg1 ;
@end
