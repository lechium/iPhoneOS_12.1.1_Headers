/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DOCHostInfoViewControllerProxy.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/DOCAppearanceProtocol.h>

@protocol DOCRemoteAppearanceInterface, DOCServiceInfoViewControllerProxy;
@class _UIResilientRemoteViewContainerViewController, UIViewController, DOCConfiguration, DOCItem, DOCAppearance, NSString;

@interface DOCInfoViewController : UINavigationController <DOCHostInfoViewControllerProxy, UIPopoverPresentationControllerDelegate, DOCAppearanceProtocol> {

	_UIResilientRemoteViewContainerViewController* _remoteViewController;
	UIViewController*<DOCRemoteAppearanceInterface> _localViewController;
	DOCConfiguration* _configuration;
	id<DOCServiceInfoViewControllerProxy> _serviceProxy;
	DOCItem* _item;
	DOCAppearance* _lastAppearance;
	BOOL _showTagsOnly;
	BOOL _inPopoverMode;

}

@property (assign,nonatomic) BOOL inPopoverMode;                    //@synthesize inPopoverMode=_inPopoverMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePreferredContentSize:(CGSize)arg1 ;
-(id)remoteInterface;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)updateAppearance:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 items:(id)arg2 showTagsOnly:(BOOL)arg3 ;
-(void)_updateForPresentation;
-(void)setInPopoverMode:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 items:(id)arg2 ;
-(BOOL)inPopoverMode;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id)remoteViewController;
-(void)dismissViewController;
@end

