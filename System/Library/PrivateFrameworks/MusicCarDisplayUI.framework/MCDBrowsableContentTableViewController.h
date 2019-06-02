/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MCDPCContainerDelegate.h>
#import <libobjc.A.dylib/MCDErrorViewDelegate.h>

@protocol OS_dispatch_queue;
@class UITableView, MCDNowPlayingButton, NSIndexPath, _UIFilteredDataSource, MPWeakTimer, UIView, NSObject, AVExternalDevice, MCDPCContainer, UIAlertController, NSString;

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate> {

	UITableView* _tableView;
	MCDNowPlayingButton* _nowPlayingButton;
	long long _count;
	NSIndexPath* _selectedNextIndexPath;
	_UIFilteredDataSource* _dataSource;
	NSIndexPath* _reselectIndexPath;
	MPWeakTimer* _loadingTimer;
	MPWeakTimer* _delayTimer;
	UIView* _MCD_tableView;
	NSObject*<OS_dispatch_queue> _serialQueue;
	AVExternalDevice* _externalDevice;
	BOOL _limited;
	BOOL _hasCarScreen;
	BOOL _hasNoBrowsableContent;
	BOOL _didPushToNowPlayingAtLaunch;
	BOOL _hasTabbedBrowsing;
	BOOL _visible;
	BOOL _currentlyPlayingApp;
	BOOL _pushToNowPlaying;
	BOOL _didFinishInitialLoad;
	BOOL _didFinishInitialViewAppear;
	MCDPCContainer* _container;
	NSIndexPath* _selectedIndexPath;
	UIView* _placeholderView;
	UIAlertController* _alertController;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;                    //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                  //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;                         //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlayingApp;                         //@synthesize currentlyPlayingApp=_currentlyPlayingApp - In the implementation block
@property (nonatomic,retain) MPWeakTimer * loadingTimer;                       //@synthesize loadingTimer=_loadingTimer - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) BOOL pushToNowPlaying;                            //@synthesize pushToNowPlaying=_pushToNowPlaying - In the implementation block
@property (nonatomic,retain) MCDPCContainer * container;                       //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                        //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialViewAppear;                  //@synthesize didFinishInitialViewAppear=_didFinishInitialViewAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainer:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(UIView *)placeholderView;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldLimitLists;
-(void)_nowPlayingDidChange:(id)arg1 ;
-(void)_appRegisteredForContent:(id)arg1 ;
-(void)_clearTableViewSelectionAnimated:(BOOL)arg1 ;
-(void)_updateNowPlayingButtonVisibility;
-(void)setDidFinishInitialViewAppear:(BOOL)arg1 ;
-(void)_showTimeoutScreen;
-(void)_replacePlaceholderViewWithView:(id)arg1 ;
-(void)_showLoadingScreen;
-(BOOL)currentlyPlayingApp;
-(void)_displayErrorAlertController:(id)arg1 ;
-(MPWeakTimer *)loadingTimer;
-(void)setLoadingTimer:(MPWeakTimer *)arg1 ;
-(void)_clearLoadingActivity;
-(void)setPushToNowPlaying:(BOOL)arg1 ;
-(id)initWithContainer:(id)arg1 tabbedBrowsing:(BOOL)arg2 ;
-(void)_displayLoadingActivity;
-(BOOL)didFinishInitialLoad;
-(void)reloadTable;
-(void)setCurrentlyPlayingApp:(BOOL)arg1 ;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(BOOL)pushToNowPlaying;
-(void)_pushToNowPlaying:(BOOL)arg1 ;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
-(void)container:(id)arg1 didInvalidateIndicies:(id)arg2 ;
-(void)containerDidChangeCount:(id)arg1 ;
-(void)errorViewDidTapButton:(id)arg1 ;
-(BOOL)didFinishInitialViewAppear;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(BOOL)isVisible;
-(UIAlertController *)alertController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewDidLoad;
-(MCDPCContainer *)container;
-(void)setContainer:(MCDPCContainer *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
@end

