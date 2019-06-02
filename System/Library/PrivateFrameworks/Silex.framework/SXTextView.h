/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/STTextTangierRepAccessibilityDataSource.h>
#import <libobjc.A.dylib/TSDRepDirectLayerHosting.h>
#import <libobjc.A.dylib/STTextCanvasRenderSource.h>

@protocol SXTextViewDelegate, STTextTangierRepAccessibilityElement;
@class SXTextLayouter, SXTextSource, STTextTangierContainerInfo, STTextTangierFlowRep, TSDLayoutController, CALayer, TSDCanvas, NSString;

@interface SXTextView : UIView <STTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, STTextCanvasRenderSource> {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	BOOL _mightBeVisuallyMisplaced;
	SXTextLayouter* _textLayouter;
	id<SXTextViewDelegate> _delegate;
	SXTextSource* _textSource;
	STTextTangierContainerInfo* _textInfo;
	STTextTangierFlowRep*<STTextTangierRepAccessibilityElement> _rep;
	TSDLayoutController* _layoutController;
	CALayer* _repContainerLayer;
	CALayer* _overlayContainerLayer;
	TSDCanvas* _canvas;
	CGRect _frameInCanvas;
	CGRect _parentFrame;

}

@property (nonatomic,readonly) TSDLayoutController * layoutController;                                            //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) CALayer * repContainerLayer;                                                         //@synthesize repContainerLayer=_repContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * overlayContainerLayer;                                                     //@synthesize overlayContainerLayer=_overlayContainerLayer - In the implementation block
@property (assign,nonatomic,__weak) TSDCanvas * canvas;                                                           //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic,__weak) STTextTangierFlowRep*<STTextTangierRepAccessibilityElement> rep;              //@synthesize rep=_rep - In the implementation block
@property (nonatomic,retain) SXTextLayouter * textLayouter;                                                       //@synthesize textLayouter=_textLayouter - In the implementation block
@property (assign,nonatomic,__weak) id<SXTextViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXTextSource * textSource;                                                         //@synthesize textSource=_textSource - In the implementation block
@property (assign,nonatomic) CGRect parentFrame;                                                                  //@synthesize parentFrame=_parentFrame - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                                                   //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                                                                //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (nonatomic,readonly) STTextTangierContainerInfo * textInfo;                                             //@synthesize textInfo=_textInfo - In the implementation block
@property (assign,nonatomic) BOOL mightBeVisuallyMisplaced;                                                       //@synthesize mightBeVisuallyMisplaced=_mightBeVisuallyMisplaced - In the implementation block
@property (assign,nonatomic) CGRect frameInCanvas;                                                                //@synthesize frameInCanvas=_frameInCanvas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)parentFrame;
-(void)setIsSelectable:(BOOL)arg1 ;
-(SXTextSource *)textSource;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(void)setTextLayouter:(SXTextLayouter *)arg1 ;
-(STTextTangierContainerInfo *)textInfo;
-(void)setFrameInCanvas:(CGRect)arg1 ;
-(void)setParentFrame:(CGRect)arg1 ;
-(SXTextLayouter *)textLayouter;
-(void)setMightBeVisuallyMisplaced:(BOOL)arg1 ;
-(BOOL)mightBeVisuallyMisplaced;
-(CGRect)frameInCanvas;
-(void)_updateOverlayTransform;
-(BOOL)accessibilityRepIsSelectable:(id)arg1 ;
-(id)accessibilityCustomRotorMembershipForRep:(id)arg1 ;
-(void)setRepContainerLayer:(CALayer *)arg1 ;
-(CALayer *)overlayContainerLayer;
-(void)setOverlayContainerLayer:(CALayer *)arg1 ;
-(TSDLayoutController *)layoutController;
-(void)directLayerhostUpdateTopLevelTilingLayers:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostUpdateWithContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostUpdateOverlayLayers:(id)arg1 forRep:(id)arg2 ;
-(void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg1 forRep:(id)arg2 ;
-(CALayer *)repContainerLayer;
-(id)infoGeometry;
-(STTextTangierFlowRep*<STTextTangierRepAccessibilityElement>)rep;
-(void)setRep:(STTextTangierFlowRep*<STTextTangierRepAccessibilityElement>)arg1 ;
-(BOOL)shouldHyphenate;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(NSString *)description;
-(void)setDelegate:(id<SXTextViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(id<SXTextViewDelegate>)delegate;
-(void)invalidate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(TSDCanvas *)canvas;
-(void)setCanvas:(TSDCanvas *)arg1 ;
-(BOOL)isSelectable;
@end

