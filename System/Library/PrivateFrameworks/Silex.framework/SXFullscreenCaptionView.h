/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SXAutoSizedCanvasControllerDelegate.h>
#import <libobjc.A.dylib/STStandaloneTextLayoutDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SXFullscreenCaptionViewDelegate, SXSmartFieldFactory, SXComponentActionHandler;
@class SXFullscreenCaption, UITapGestureRecognizer, SXAutoSizedCanvasController, STTextTangierDocumentRoot, STStandaloneTextInfo, STStandaloneTextLayout, UIVisualEffectView, UIScrollView, UISwipeGestureRecognizer, SXTextSource, STTextTangierStorage, NSString;

@interface SXFullscreenCaptionView : UIView <SXAutoSizedCanvasControllerDelegate, STStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	int _expansionMode;
	id<SXFullscreenCaptionViewDelegate> _delegate;
	SXFullscreenCaption* _caption;
	unsigned long long _viewIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<SXSmartFieldFactory> _smartFieldFactory;
	id<SXComponentActionHandler> _actionHandler;
	SXAutoSizedCanvasController* _autoSizeCanvasController;
	STTextTangierDocumentRoot* _documentRoot;
	STStandaloneTextInfo* _captionInfo;
	STStandaloneTextLayout* _captionLayout;
	UIVisualEffectView* _backgroundView;
	UIScrollView* _scrollView;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	SXTextSource* _textSource;
	STTextTangierStorage* _textStorage;
	CGSize _fullSize;
	CGRect _temporaryLayoutRect;
	UIEdgeInsets _fullInsets;

}

@property (nonatomic,readonly) id<SXSmartFieldFactory> smartFieldFactory;                         //@synthesize smartFieldFactory=_smartFieldFactory - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) SXAutoSizedCanvasController * autoSizeCanvasController;              //@synthesize autoSizeCanvasController=_autoSizeCanvasController - In the implementation block
@property (nonatomic,retain) STTextTangierDocumentRoot * documentRoot;                            //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,retain) STStandaloneTextInfo * captionInfo;                                  //@synthesize captionInfo=_captionInfo - In the implementation block
@property (nonatomic,retain) STStandaloneTextLayout * captionLayout;                              //@synthesize captionLayout=_captionLayout - In the implementation block
@property (assign,nonatomic) CGRect temporaryLayoutRect;                                          //@synthesize temporaryLayoutRect=_temporaryLayoutRect - In the implementation block
@property (assign,nonatomic) CGSize fullSize;                                                     //@synthesize fullSize=_fullSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fullInsets;                                             //@synthesize fullInsets=_fullInsets - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                       //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeGestureRecognizer;                   //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (nonatomic,retain) SXTextSource * textSource;                                           //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,retain) STTextTangierStorage * textStorage;                                  //@synthesize textStorage=_textStorage - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenCaptionViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXFullscreenCaption * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) unsigned long long viewIndex;                                      //@synthesize viewIndex=_viewIndex - In the implementation block
@property (nonatomic,readonly) int expansionMode;                                                 //@synthesize expansionMode=_expansionMode - In the implementation block
@property (nonatomic,readonly) BOOL expanded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applyStyle:(id)arg1 toStorage:(id)arg2 ;
+(id)_overridePropertiesWithComponentStyle:(id)arg1 storage:(id)arg2 ;
-(SXFullscreenCaption *)caption;
-(void)createBackgroundView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(UISwipeGestureRecognizer *)swipeGestureRecognizer;
-(void)setSwipeGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(void)createScrollView;
-(void)setupGestureRecognizers;
-(void)initializeTangier;
-(int)expansionMode;
-(void)renderCaptionInTangier;
-(void)updateFrameAnimated:(BOOL)arg1 ;
-(SXAutoSizedCanvasController *)autoSizeCanvasController;
-(void)setExpansionMode:(int)arg1 animated:(BOOL)arg2 ;
-(CGRect)frameWithSuperview:(id)arg1 size:(CGSize)arg2 forExpansionMode:(int)arg3 ;
-(UIEdgeInsets)fullInsets;
-(CGSize)fullSize;
-(void)setTemporaryLayoutRect:(CGRect)arg1 ;
-(CGRect)determineFrameInSuperview:(id)arg1 ;
-(STStandaloneTextLayout *)captionLayout;
-(SXTextSource *)textSource;
-(id<SXSmartFieldFactory>)smartFieldFactory;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(void)setCaptionInfo:(STStandaloneTextInfo *)arg1 ;
-(STStandaloneTextInfo *)captionInfo;
-(void)setCaptionLayout:(STStandaloneTextLayout *)arg1 ;
-(CGRect)temporaryLayoutRect;
-(void)handleSwipeGestureRecognizer:(id)arg1 ;
-(void)handleTapGestureRecognizer:(id)arg1 ;
-(BOOL)forceFullExpandsionMode;
-(double)marginForTextLayout:(id)arg1 ;
-(double)widthForTextLayout:(id)arg1 ;
-(CGPoint)positionForTextLayout:(id)arg1 ;
-(id)initWithSmartFieldFactory:(id)arg1 actionHandler:(id)arg2 ;
-(void)updateWithCaption:(id)arg1 forViewIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)viewIndex;
-(void)setAutoSizeCanvasController:(SXAutoSizedCanvasController *)arg1 ;
-(void)setFullSize:(CGSize)arg1 ;
-(void)setFullInsets:(UIEdgeInsets)arg1 ;
-(STTextTangierDocumentRoot *)documentRoot;
-(void)setDocumentRoot:(STTextTangierDocumentRoot *)arg1 ;
-(id<SXComponentActionHandler>)actionHandler;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SXFullscreenCaptionViewDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SXFullscreenCaptionViewDelegate>)delegate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)didMoveToSuperview;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)expanded;
-(STTextTangierStorage *)textStorage;
-(void)setTextStorage:(STTextTangierStorage *)arg1 ;
@end

