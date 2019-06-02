/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDataSource.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDelegate.h>

@protocol MCDPlayableContentQueueManagerDelegate;
@class UITableView, MPRequestResponseController, UIAlertController, AVExternalDevice, UIImage, MPArtworkCatalog, MCDPCModel, NSString;

@interface MCDPlayableContentPlaybackManager : NSObject <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate> {

	BOOL _limitedUI;
	BOOL _seeking;
	UITableView* _tableView;
	MPRequestResponseController* _requestController;
	UIAlertController* _alertController;
	id<MCDPlayableContentQueueManagerDelegate> _delegate;
	AVExternalDevice* _externalDevice;
	UIImage* _albumArtwork;
	MPArtworkCatalog* _artworkCatalog;
	MCDPCModel* _model;
	long long _playingItemIndex;
	long long _totalItemCount;

}

@property (nonatomic,retain) MPRequestResponseController * requestController;                         //@synthesize requestController=_requestController - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                           //@synthesize seeking=_seeking - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                     //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<MCDPlayableContentQueueManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                                       //@synthesize externalDevice=_externalDevice - In the implementation block
@property (nonatomic,retain) UIImage * albumArtwork;                                                  //@synthesize albumArtwork=_albumArtwork - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;                                       //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (nonatomic,retain) MCDPCModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long playingItemIndex;                                              //@synthesize playingItemIndex=_playingItemIndex - In the implementation block
@property (assign,nonatomic) long long totalItemCount;                                                //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                                                          //@synthesize limitedUI=_limitedUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)setLimitedUI:(BOOL)arg1 ;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(long long)totalItemCount;
-(MPRequestResponseController *)requestController;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(void)setRequestController:(MPRequestResponseController *)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(BOOL)limitedUI;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(void)setModel:(MCDPCModel *)arg1 ;
-(void)setTotalItemCount:(long long)arg1 ;
-(void)_performRequest;
-(AVExternalDevice *)externalDevice;
-(void)_processArtwork;
-(id)initWithDelegate:(id)arg1 model:(id)arg2 ;
-(void)beginRequestObservation;
-(void)endRequestObservation;
-(id)_setupRequest;
-(id)_songForIndexPath:(id)arg1 ;
-(long long)playingItemIndex;
-(id)_currentlyPlayingSong;
-(void)setAlbumArtwork:(UIImage *)arg1 ;
-(id)_currentlyPlayingItem;
-(long long)_numberOfItemsInPlaybackQueue;
-(void)_updateTrackQueueIndex;
-(void)modelResponseDidInvalidate:(id)arg1 ;
-(id)_adjustedIndexPathForPlaybackQueue:(id)arg1 ;
-(UIImage *)albumArtwork;
-(double)_jumpBackwardInterval;
-(id)_skipIntervalButtonImageForInterval:(double)arg1 ;
-(double)_jumpForwardInterval;
-(void)_handleHamburgerActionSheet;
-(void)_performChangeRequest:(id)arg1 ;
-(id)_alertActionForFeedbackCommand:(id)arg1 fallbackTitle:(id)arg2 ;
-(id)nowPlayingViewControllerGetPlaybackRate:(id)arg1 ;
-(id)artistTextForNowPlayingController:(id)arg1 ;
-(id)albumTextForNowPlayingController:(id)arg1 ;
-(id)titleForNowPlayingController:(id)arg1 ;
-(id)backgroundArtForNowPlayingController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1 ;
-(SCD_Struct_MC0)durationSnapshotForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1 ;
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1 ;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5 ;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2 ;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3 ;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1 ;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1 ;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1 ;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1 ;
-(void)nowPlayingViewControllerChangePlaybackRate:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg1 ;
-(void)nowPlayingViewControllerMore:(id)arg1 ;
-(void)setPlayingItemIndex:(long long)arg1 ;
-(void)setDelegate:(id<MCDPlayableContentQueueManagerDelegate>)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id<MCDPlayableContentQueueManagerDelegate>)delegate;
-(UIAlertController *)alertController;
-(UITableView *)tableView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(MCDPCModel *)model;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
@end

