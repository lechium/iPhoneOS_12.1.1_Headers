/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DDParsecHostVCInterface.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol DDParsecCollectionDelegate;
@class DDParsecRemoteCollectionViewController, UIVisualEffectView, NSString, DDScannerResult, NSDictionary, UITapGestureRecognizer, NSArray;

@interface DDParsecCollectionViewController : UINavigationController <DDParsecHostVCInterface, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	DDParsecRemoteCollectionViewController* _remoteViewController;
	BOOL _previewMode;
	BOOL _sheetMode;
	UIVisualEffectView* _blurView;
	NSString* _queryString;
	NSRange _queryRange;
	DDScannerResult* _result;
	NSDictionary* _context;
	BOOL _showingError;
	BOOL _showingFTE;
	UITapGestureRecognizer* _tapGesture;
	long long _previousStatusBarStyle;
	/*^block*/id _dismissCompletionHandler;
	long long _style;
	NSArray* _actions;
	id<DDParsecCollectionDelegate> _parsecDelegate;

}

@property (copy) NSArray * actions;                                            //@synthesize actions=_actions - In the implementation block
@property (__weak) id<DDParsecCollectionDelegate> parsecDelegate;              //@synthesize parsecDelegate=_parsecDelegate - In the implementation block
@property (copy) id dismissCompletionHandler;                                  //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (assign,nonatomic) long long style;                                  //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appWillEnterForeground;
-(void)appDidEnterBackground;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)showError:(id)arg1 ;
-(void)interactionEndedWithPunchout:(BOOL)arg1 ;
-(void)setSheetMode:(BOOL)arg1 ;
-(void)showingErrorView:(BOOL)arg1 ;
-(void)showingFTE:(BOOL)arg1 ;
-(void)openParsecURL:(id)arg1 ;
-(void)getStatusBarHidden:(/*^block*/id)arg1 ;
-(void)openTrailerPunchout:(id)arg1 ;
-(void)fetchRemoteViewControllerWithValidInput:(BOOL)arg1 ;
-(id)_blurEffect;
-(void)updateVisualMode;
-(void)_interactionEnded;
-(id)_blurEffectWithTraitCollection:(id)arg1 ;
-(void)doneButtonPressed:(id)arg1 punchout:(BOOL)arg2 ;
-(void)presentRemoteCollection:(id)arg1 ;
-(void)replaceControllerWithController:(id)arg1 ;
-(id<DDParsecCollectionDelegate>)parsecDelegate;
-(id)initWithResult:(DDResultRef)arg1 context:(id)arg2 ;
-(void)setParsecDelegate:(id<DDParsecCollectionDelegate>)arg1 ;
-(void)showSpinner;
-(void)doneButtonPressed:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(NSArray *)actions;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id)previewActionItems;
-(void)setActions:(NSArray *)arg1 ;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
@end
