/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MPVolumeDisplaying.h>
#import <libobjc.A.dylib/SFRemoteViewControllerProtocol.h>

@protocol SFBrowserRemoteViewControllerDelegate;
@class NSString;

@interface SFBrowserRemoteViewController : _UIRemoteViewController <MPVolumeDisplaying, SFRemoteViewControllerProtocol> {

	BOOL _isInFullScreen;
	id<SFBrowserRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFBrowserRemoteViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(NSString *)volumeAudioCategory;
-(BOOL)isOnScreenForVolumeDisplay;
-(void)willDismissServiceViewController;
-(void)didLoadWebView;
-(void)didFinishInitialLoad:(BOOL)arg1 ;
-(void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 ;
-(void)executeCustomActivityProxyID:(id)arg1 ;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1 ;
-(void)willOpenURLInHostApplication:(id)arg1 ;
-(void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2 ;
-(void)initialLoadDidRedirectToURL:(id)arg1 ;
-(void)didChangeFullScreen:(BOOL)arg1 ;
-(void)setDelegate:(id<SFBrowserRemoteViewControllerDelegate>)arg1 ;
-(id<SFBrowserRemoteViewControllerDelegate>)delegate;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

