/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DOCHostTargetSelectionBrowserViewControllerProxy.h>
#import <libobjc.A.dylib/DOCAppearanceProtocol.h>

@protocol DOCRemoteAppearanceInterface, DOCServiceTargetSelectionBrowserViewControllerProxy, DOCTargetSelectionBrowserViewControllerDelegate;
@class _UIResilientRemoteViewContainerViewController, UIViewController, DOCConfiguration, NSArray, DOCAppearance, NSString;

@interface DOCTargetSelectionBrowserViewController : UINavigationController <DOCHostTargetSelectionBrowserViewControllerProxy, DOCAppearanceProtocol> {

	_UIResilientRemoteViewContainerViewController* _remoteViewController;
	UIViewController*<DOCRemoteAppearanceInterface> _localViewController;
	DOCConfiguration* _configuration;
	id<DOCServiceTargetSelectionBrowserViewControllerProxy> _serviceProxy;
	NSArray* _urls;
	NSArray* _items;
	DOCAppearance* _lastAppearance;
	id<DOCTargetSelectionBrowserViewControllerDelegate> _targetSelectionDelegate;

}

@property (assign,nonatomic,__weak) id<DOCTargetSelectionBrowserViewControllerDelegate> targetSelectionDelegate;              //@synthesize targetSelectionDelegate=_targetSelectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateNavigationBar;
-(void)_cancelButtonPressed:(id)arg1 ;
-(id)remoteInterface;
-(void)cancelPresentation;
-(void)filesExportedAtURLs:(id)arg1 ;
-(void)updateAppearance:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 items:(id)arg2 ;
-(id)initForExportingWithConfiguration:(id)arg1 ;
-(void)setTargetSelectionDelegate:(id<DOCTargetSelectionBrowserViewControllerDelegate>)arg1 ;
-(void)_dismissWithBlock:(/*^block*/id)arg1 ;
-(void)notifyDelegateOfCancellation;
-(id<DOCTargetSelectionBrowserViewControllerDelegate>)targetSelectionDelegate;
-(id)initWithConfiguration:(id)arg1 urls:(id)arg2 ;
-(void)viewDidLoad;
-(id)remoteViewController;
-(void)dismissViewController;
-(void)setURLs:(id)arg1 ;
@end

