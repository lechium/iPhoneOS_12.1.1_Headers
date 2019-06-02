/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DOCHostSourceViewControllerProxy.h>
#import <libobjc.A.dylib/DOCAppearanceProtocol.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol DOCRemoteAppearanceInterface, DOCSourceViewControllerDelegate, DOCServiceSourceViewControllerProxy;
@class _UIResilientRemoteViewContainerViewController, UIViewController, DOCAppearance, UINavigationController, NSArray, DOCConfiguration, NSString;

@interface DOCSourceViewController : UIViewController <DOCHostSourceViewControllerProxy, DOCAppearanceProtocol, UIPopoverPresentationControllerDelegate> {

	_UIResilientRemoteViewContainerViewController* _remoteViewController;
	UIViewController*<DOCRemoteAppearanceInterface> _localViewController;
	DOCAppearance* _lastAppearance;
	BOOL _inPopoverMode;
	BOOL _editing;
	UINavigationController* _internalNavigationController;
	UIViewController* _currentParent;
	id<DOCSourceViewControllerDelegate> _sourceDelegate;
	NSArray* _additionalTrailingNavigationBarButtonItems;
	id<DOCServiceSourceViewControllerProxy> _serviceProxy;
	DOCConfiguration* _configuration;

}

@property (readonly) id<DOCServiceSourceViewControllerProxy> serviceProxy;                           //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) DOCConfiguration * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<DOCSourceViewControllerDelegate> sourceDelegate;              //@synthesize sourceDelegate=_sourceDelegate - In the implementation block
@property (nonatomic,retain) NSArray * additionalTrailingNavigationBarButtonItems;                   //@synthesize additionalTrailingNavigationBarButtonItems=_additionalTrailingNavigationBarButtonItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<DOCServiceSourceViewControllerProxy>)serviceProxy;
-(void)_updateNavigationButtons;
-(id)remoteInterface;
-(id<DOCSourceViewControllerDelegate>)sourceDelegate;
-(void)removeViewController:(id)arg1 ;
-(void)didSelectLocation:(id)arg1 ;
-(void)updatePreferredSize:(CGSize)arg1 ;
-(void)didPickItem:(id)arg1 ;
-(void)currentlySelectedLocationDidChange:(id)arg1 ;
-(void)updateAppearance:(id)arg1 ;
-(NSArray *)additionalTrailingNavigationBarButtonItems;
-(CGSize)_defaultPreferredContentSize;
-(void)updateViewsForParent:(id)arg1 ;
-(void)_toggleEditMode;
-(void)embedViewController:(id)arg1 ;
-(void)_updateDefaultPreferredContentSizeWithSize:(CGSize)arg1 ;
-(void)showLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSourceDelegate:(id<DOCSourceViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(DOCConfiguration *)configuration;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(BOOL)isEditing;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_dismissViewController;
-(id)remoteViewController;
-(void)setAdditionalTrailingNavigationBarButtonItems:(NSArray *)arg1 ;
-(void)_updateAppearance;
@end

