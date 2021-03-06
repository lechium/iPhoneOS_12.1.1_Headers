/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaControls/MediaControlsEndpointControllerDelegate.h>
#import <MediaControls/MediaControlsRatingActionSheet.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerThemeDelegate.h>
#import <libobjc.A.dylib/MPMediaControlsViewControllerDelegate.h>
#import <MediaControls/MediaControlsMasterVolumeSliderDelegate.h>
#import <MediaControls/MediaControlsCollectionItemViewController.h>

@protocol MediaControlsPanelViewControllerDelegate;
@class UIView, MPAVRoutingViewController, MTVibrantStylingProvider, MediaControlsHeaderView, MediaControlsRoutingCornerView, MediaControlsParentContainerView, MediaControlsVolumeContainerView, NSMutableArray, MPMediaControlsViewController, MPArtworkCatalog, MPVolumeGroupSliderCoordinator, NSString, MediaControlsEndpointController;

@interface MediaControlsPanelViewController : UIViewController <MediaControlsEndpointControllerDelegate, MediaControlsRatingActionSheet, MPAVRoutingViewControllerThemeDelegate, MPMediaControlsViewControllerDelegate, MediaControlsMasterVolumeSliderDelegate, MediaControlsCollectionItemViewController> {

	CGSize _lastKnownSize;
	BOOL _selected;
	BOOL _transitioning;
	BOOL _coverSheetRoutingViewControllerShouldBePresented;
	BOOL _onScreen;
	BOOL _isListeningForResponse;
	UIView* _contentView;
	UIView* _backgroundView;
	MPAVRoutingViewController* _routingViewController;
	id<MediaControlsPanelViewControllerDelegate> _delegate;
	MTVibrantStylingProvider* _vibrantStylingProvider;
	long long _style;
	MediaControlsHeaderView* _headerView;
	MediaControlsRoutingCornerView* _routingCornerView;
	MediaControlsParentContainerView* _parentContainerView;
	MediaControlsVolumeContainerView* _volumeContainerView;
	UIView* _topDividerView;
	UIView* _bottomDividerView;
	NSMutableArray* _secondaryStringComponents;
	MPMediaControlsViewController* _coverSheetRoutingViewController;
	MPArtworkCatalog* _artworkCatalog;
	MPVolumeGroupSliderCoordinator* _groupSliderCoordinator;
	NSString* _label;
	unsigned long long _supportedModes;
	long long _selectedMode;
	MediaControlsEndpointController* _endpointController;
	/*^block*/id _routingCornerViewTappedBlock;

}

@property (assign,nonatomic) long long style;                                                              //@synthesize style=_style - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                    //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) MediaControlsHeaderView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) MediaControlsRoutingCornerView * routingCornerView;                           //@synthesize routingCornerView=_routingCornerView - In the implementation block
@property (nonatomic,retain) MediaControlsParentContainerView * parentContainerView;                       //@synthesize parentContainerView=_parentContainerView - In the implementation block
@property (nonatomic,retain) MediaControlsVolumeContainerView * volumeContainerView;                       //@synthesize volumeContainerView=_volumeContainerView - In the implementation block
@property (nonatomic,retain) UIView * topDividerView;                                                      //@synthesize topDividerView=_topDividerView - In the implementation block
@property (nonatomic,retain) UIView * bottomDividerView;                                                   //@synthesize bottomDividerView=_bottomDividerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryStringComponents;                                   //@synthesize secondaryStringComponents=_secondaryStringComponents - In the implementation block
@property (nonatomic,retain) MPMediaControlsViewController * coverSheetRoutingViewController;              //@synthesize coverSheetRoutingViewController=_coverSheetRoutingViewController - In the implementation block
@property (assign,nonatomic) BOOL coverSheetRoutingViewControllerShouldBePresented;                        //@synthesize coverSheetRoutingViewControllerShouldBePresented=_coverSheetRoutingViewControllerShouldBePresented - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;                                            //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                              //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) BOOL isListeningForResponse;                                                  //@synthesize isListeningForResponse=_isListeningForResponse - In the implementation block
@property (nonatomic,retain) MPVolumeGroupSliderCoordinator * groupSliderCoordinator;                      //@synthesize groupSliderCoordinator=_groupSliderCoordinator - In the implementation block
@property (nonatomic,copy) NSString * label;                                                               //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long supportedModes;                                            //@synthesize supportedModes=_supportedModes - In the implementation block
@property (assign,nonatomic) long long selectedMode;                                                       //@synthesize selectedMode=_selectedMode - In the implementation block
@property (nonatomic,retain) MediaControlsEndpointController * endpointController;                         //@synthesize endpointController=_endpointController - In the implementation block
@property (nonatomic,copy) id routingCornerViewTappedBlock;                                                //@synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MediaControlsPanelViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;                            //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) MTVibrantStylingProvider * vibrantStylingProvider;                            //@synthesize vibrantStylingProvider=_vibrantStylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * backgroundView;                                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                              //@synthesize selected=_selected - In the implementation block
+(id)panelViewControllerForCoverSheet;
-(void)setTransitioning:(BOOL)arg1 ;
-(id)_route;
-(void)mediaControlsViewControllerDidReceiveInteraction:(id)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(void)routingViewController:(id)arg1 willDisplayCell:(id)arg2 ;
-(void)setGroupSliderCoordinator:(MPVolumeGroupSliderCoordinator *)arg1 ;
-(MPVolumeGroupSliderCoordinator *)groupSliderCoordinator;
-(void)setOnScreen:(BOOL)arg1 ;
-(unsigned long long)supportedModes;
-(void)setSupportedModes:(unsigned long long)arg1 ;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)selectedMode;
-(void)setSelectedMode:(long long)arg1 ;
-(UIView *)topDividerView;
-(UIView *)bottomDividerView;
-(void)headerViewButtonPressed:(id)arg1 ;
-(void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1 ;
-(MediaControlsParentContainerView *)parentContainerView;
-(MediaControlsRoutingCornerView *)routingCornerView;
-(void)setEndpointController:(MediaControlsEndpointController *)arg1 ;
-(MediaControlsEndpointController *)endpointController;
-(void)_routingCornerViewReceivedTap:(id)arg1 ;
-(void)_mediaControlsPanelViewControllerReceivedInteraction:(id)arg1 ;
-(MediaControlsVolumeContainerView *)volumeContainerView;
-(void)_updateHeaderUI;
-(void)_dismissRoutingViewControllerFromCoverSheetIfNeeded;
-(void)_updateSecondaryStringFormat;
-(void)_setRoutingPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateOnScreenForStyle:(long long)arg1 ;
-(void)_updateConfiguration;
-(void)_updateRoutingCornerView;
-(void)_updateRouteNameLabel;
-(NSMutableArray *)secondaryStringComponents;
-(void)_updateControlCenterMetadata:(id)arg1 ;
-(void)_updatePlaceholderArtwork;
-(void)_presentRoutingViewControllerFromCoverSheet;
-(void)setCoverSheetRoutingViewController:(MPMediaControlsViewController *)arg1 ;
-(MPMediaControlsViewController *)coverSheetRoutingViewController;
-(void)setCoverSheetRoutingViewControllerShouldBePresented:(BOOL)arg1 ;
-(BOOL)coverSheetRoutingViewControllerShouldBePresented;
-(void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)endpointControllerDidChangeState:(id)arg1 ;
-(void)endpointControllerDidUpdateRoutingAvailability:(id)arg1 ;
-(void)endpointControllerRouteDidUpdate:(id)arg1 ;
-(void)presentRatingActionSheet:(id)arg1 ;
-(UIEdgeInsets)contentInsetsForRoutingViewController:(id)arg1 ;
-(BOOL)shouldEnableSyncingForSlider:(id)arg1 ;
-(BOOL)slider:(id)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3 ;
-(BOOL)slider:(id)arg1 shouldCancelSnapWithTouch:(id)arg2 ;
-(void)willTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2 ;
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
-(void)setRoutingCornerViewTappedBlock:(id)arg1 ;
-(MPAVRoutingViewController *)routingViewController;
-(void)setRoutingCornerView:(MediaControlsRoutingCornerView *)arg1 ;
-(void)setParentContainerView:(MediaControlsParentContainerView *)arg1 ;
-(void)setVolumeContainerView:(MediaControlsVolumeContainerView *)arg1 ;
-(void)setTopDividerView:(UIView *)arg1 ;
-(void)setBottomDividerView:(UIView *)arg1 ;
-(void)setSecondaryStringComponents:(NSMutableArray *)arg1 ;
-(BOOL)isListeningForResponse;
-(void)setIsListeningForResponse:(BOOL)arg1 ;
-(id)routingCornerViewTappedBlock;
-(MTVibrantStylingProvider *)vibrantStylingProvider;
-(void)setVibrantStylingProvider:(MTVibrantStylingProvider *)arg1 ;
-(void)setDelegate:(id<MediaControlsPanelViewControllerDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id<MediaControlsPanelViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIView *)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(MediaControlsHeaderView *)headerView;
-(void)setHeaderView:(MediaControlsHeaderView *)arg1 ;
-(void)_updateStyle;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(BOOL)isOnScreen;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isTransitioning;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
@end

