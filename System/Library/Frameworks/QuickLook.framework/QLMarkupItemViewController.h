/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/MarkupViewControllerDelegate.h>
#import <libobjc.A.dylib/PDFViewDelegate.h>

@class QLMUViewController, NSNumber, QLDelegateProxy, NSString;

@interface QLMarkupItemViewController : QLItemViewController <MarkupViewControllerDelegate, PDFViewDelegate> {

	long long _lastSavedEditNumber;
	BOOL _showingSignatureView;
	BOOL _hasChangesToUndo;
	BOOL _hasChangesToRedo;
	QLMUViewController* _markupViewController;
	NSNumber* _shouldAllowEditingContents;
	double _topInset;
	QLDelegateProxy* _pdfDocumentDelegateProxy;

}

@property (nonatomic,retain) NSNumber * shouldAllowEditingContents;                   //@synthesize shouldAllowEditingContents=_shouldAllowEditingContents - In the implementation block
@property (assign) double topInset;                                                   //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,retain) QLMUViewController * markupViewController;               //@synthesize markupViewController=_markupViewController - In the implementation block
@property (nonatomic,retain) QLDelegateProxy * pdfDocumentDelegateProxy;              //@synthesize pdfDocumentDelegateProxy=_pdfDocumentDelegateProxy - In the implementation block
@property (assign,nonatomic) BOOL hasChangesToUndo;                                   //@synthesize hasChangesToUndo=_hasChangesToUndo - In the implementation block
@property (assign,nonatomic) BOOL hasChangesToRedo;                                   //@synthesize hasChangesToRedo=_hasChangesToRedo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controllerWantsToShowShareSheet:(id)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(id)registeredKeyCommands;
-(BOOL)canPinchToDismiss;
-(id)toolbarButtonsForTraitCollection:(id)arg1 ;
-(BOOL)canShowToolBar;
-(void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareForActionSheetPresentation;
-(void)setHasChangesToUndo:(BOOL)arg1 ;
-(void)setHasChangesToRedo:(BOOL)arg1 ;
-(void)showingSignatureView:(BOOL)arg1 ;
-(NSNumber *)shouldAllowEditingContents;
-(void)enableMarkupMode:(BOOL)arg1 ;
-(BOOL)needsToSaveChanges;
-(void)_saveChanges;
-(void)updateMarkupEdgeInsets:(BOOL)arg1 resetScrollViewZoomScaleToMinimum:(BOOL)arg2 ;
-(void)_saveChangesWithHostCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateToolbarVisibilityAnimated:(BOOL)arg1 ;
-(void)documentDidUnlock:(id)arg1 ;
-(void)setShouldAllowEditingContents:(NSNumber *)arg1 ;
-(QLDelegateProxy *)pdfDocumentDelegateProxy;
-(void)setPdfDocumentDelegateProxy:(QLDelegateProxy *)arg1 ;
-(BOOL)hasChangesToUndo;
-(BOOL)hasChangesToRedo;
-(void)setMarkupViewController:(QLMUViewController *)arg1 ;
-(QLMUViewController *)markupViewController;
-(void)setTopInset:(double)arg1 ;
-(double)topInset;
@end

