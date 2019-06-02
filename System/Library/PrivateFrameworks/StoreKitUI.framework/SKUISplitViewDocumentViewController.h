/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUINavigationDocumentDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class UIViewController, UISplitViewController, SKUISplitViewTemplateElement, SKUINavigationDocumentController, NSString;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController> {

	UIViewController* _delayingPresentationViewController;
	UISplitViewController* _splitViewController;
	SKUISplitViewTemplateElement* _templateElement;
	SKUINavigationDocumentController* _leftNavigationDocumentController;
	SKUINavigationDocumentController* _rightNavigationDocumentController;

}

@property (nonatomic,retain) SKUINavigationDocumentController * leftNavigationDocumentController;               //@synthesize leftNavigationDocumentController=_leftNavigationDocumentController - In the implementation block
@property (nonatomic,retain) SKUINavigationDocumentController * rightNavigationDocumentController;              //@synthesize rightNavigationDocumentController=_rightNavigationDocumentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)_defaultBackgroundColor;
-(void)documentDidUpdate:(id)arg1 ;
-(id)leftBarButtonItemsForDocument:(id)arg1 ;
-(void)delayPresentationIfNeededForParentViewController:(id)arg1 ;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
-(void)_reloadSplitViewControllers;
-(BOOL)_isFullyPopulated;
-(void)_skui_endDelayingPresentation;
-(void)navigationDocumentStackDidChange:(id)arg1 ;
-(SKUINavigationDocumentController *)leftNavigationDocumentController;
-(void)setLeftNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(SKUINavigationDocumentController *)rightNavigationDocumentController;
-(void)setRightNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(void)dealloc;
-(void)loadView;
@end

