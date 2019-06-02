/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroPlayerViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MoodDelegate.h>
#import <libobjc.A.dylib/DurationDelegate.h>

@class AVPlayer, AVPlayerViewController, MiroCloudDownloader, MovieController, MiroMemory, MoodInfoPanel, DurationsInfoPanel, UICollectionView, NSArray, MiroPosterViewController, UIImage, UIView, UIActivityIndicatorView, NSString, UIProgressView, UILabel;

@interface TVPlayerViewController : MiroPlayerViewController <UIGestureRecognizerDelegate, MoodDelegate, DurationDelegate> {

	BOOL _firstPlayback;
	BOOL _playbackRequested;
	BOOL _aggFirstPlayback;
	BOOL _progressHasDownload;
	int _debugNum;
	int _prefsNum;
	AVPlayer* _instantMoviePlayer;
	AVPlayerViewController* _playerViewController;
	MiroCloudDownloader* _cloudDownloader;
	MovieController* _movieController;
	MiroMemory* _miroMemory;
	MoodInfoPanel* _moodControlVC;
	DurationsInfoPanel* _durationControlVC;
	UICollectionView* _moodSlider;
	NSArray* _durationDisplayNames;
	MiroPosterViewController* _posterViewController;
	UIImage* _poster;
	UIView* _scrimView;
	UIActivityIndicatorView* _spinnerView;
	id _proVideoPeriodicCaller;
	NSString* _initialMood;
	double _initialDuration;
	unsigned long long _startTime;
	UIView* _progressContainer;
	UIProgressView* _progressUIView;
	UILabel* _progressLabel;
	SCD_Struct_Mi1 _teardownTimeofPlayer;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;                        //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (nonatomic,retain) MovieController * movieController;                            //@synthesize movieController=_movieController - In the implementation block
@property (nonatomic,retain) MiroMemory * miroMemory;                                      //@synthesize miroMemory=_miroMemory - In the implementation block
@property (nonatomic,retain) MoodInfoPanel * moodControlVC;                                //@synthesize moodControlVC=_moodControlVC - In the implementation block
@property (nonatomic,retain) DurationsInfoPanel * durationControlVC;                       //@synthesize durationControlVC=_durationControlVC - In the implementation block
@property (nonatomic,retain) UICollectionView * moodSlider;                                //@synthesize moodSlider=_moodSlider - In the implementation block
@property (nonatomic,retain) NSArray * durationDisplayNames;                               //@synthesize durationDisplayNames=_durationDisplayNames - In the implementation block
@property (nonatomic,retain) MiroPosterViewController * posterViewController;              //@synthesize posterViewController=_posterViewController - In the implementation block
@property (nonatomic,retain) UIImage * poster;                                             //@synthesize poster=_poster - In the implementation block
@property (nonatomic,retain) UIView * scrimView;                                           //@synthesize scrimView=_scrimView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                        //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) id proVideoPeriodicCaller;                                    //@synthesize proVideoPeriodicCaller=_proVideoPeriodicCaller - In the implementation block
@property (assign) BOOL firstPlayback;                                                     //@synthesize firstPlayback=_firstPlayback - In the implementation block
@property (assign) BOOL playbackRequested;                                                 //@synthesize playbackRequested=_playbackRequested - In the implementation block
@property (assign) int debugNum;                                                           //@synthesize debugNum=_debugNum - In the implementation block
@property (assign) int prefsNum;                                                           //@synthesize prefsNum=_prefsNum - In the implementation block
@property (assign) BOOL aggFirstPlayback;                                                  //@synthesize aggFirstPlayback=_aggFirstPlayback - In the implementation block
@property (nonatomic,retain) NSString * initialMood;                                       //@synthesize initialMood=_initialMood - In the implementation block
@property (assign,nonatomic) double initialDuration;                                       //@synthesize initialDuration=_initialDuration - In the implementation block
@property (assign) unsigned long long startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (assign) SCD_Struct_Mi1 teardownTimeofPlayer;                                    //@synthesize teardownTimeofPlayer=_teardownTimeofPlayer - In the implementation block
@property (nonatomic,retain) UIView * progressContainer;                                   //@synthesize progressContainer=_progressContainer - In the implementation block
@property (nonatomic,retain) UIProgressView * progressUIView;                              //@synthesize progressUIView=_progressUIView - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                                      //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign) BOOL progressHasDownload;                                               //@synthesize progressHasDownload=_progressHasDownload - In the implementation block
@property (nonatomic,retain) AVPlayer * instantMoviePlayer;                                //@synthesize instantMoviePlayer=_instantMoviePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                //@synthesize playerViewController=_playerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMemory:(id)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(UILabel *)progressLabel;
-(void)setAutoEditor:(id)arg1 ;
-(MovieController *)movieController;
-(void)unRegisterAutoEditor;
-(void)setPosterViewController:(MiroPosterViewController *)arg1 ;
-(MiroPosterViewController *)posterViewController;
-(void)updatePosterImages;
-(void)signalCustomCompositorScheduler:(SCD_Struct_Mi1)arg1 playerRate:(float)arg2 ;
-(void)setProVideoPeriodicCaller:(id)arg1 ;
-(id)proVideoPeriodicCaller;
-(void)destroyAVPlayer;
-(void)setMovieController:(MovieController *)arg1 ;
-(void)createAVPlayer;
-(void)signalCustomCompositorScheduler;
-(void)setCurrentTime:(SCD_Struct_Mi1)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)currentDuration;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(UICollectionView *)moodSlider;
-(void)setMiroMemory:(MiroMemory *)arg1 ;
-(void)setAggFirstPlayback:(BOOL)arg1 ;
-(void)setPlaybackRequested:(BOOL)arg1 ;
-(void)setFirstPlayback:(BOOL)arg1 ;
-(void)setupAggDValues;
-(MiroMemory *)miroMemory;
-(void)_mediaServicesReset:(id)arg1 ;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(void)setProgressHasDownload:(BOOL)arg1 ;
-(void)setProgressContainer:(UIView *)arg1 ;
-(UIView *)progressContainer;
-(NSString *)initialMood;
-(double)initialDuration;
-(AVPlayer *)instantMoviePlayer;
-(void)displayHeroImageAnimated;
-(void)displayHeroImageAnimatedNoScrim;
-(void)_createPosterViewController;
-(UIView *)scrimView;
-(void)setScrimView:(UIView *)arg1 ;
-(UIProgressView *)progressUIView;
-(void)setProgressUIView:(UIProgressView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)_setUpProgressLabel;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(void)setInstantMoviePlayer:(AVPlayer *)arg1 ;
-(void)createAVPlayerVC;
-(DurationsInfoPanel *)durationControlVC;
-(MoodInfoPanel *)moodControlVC;
-(id)theirSpinner;
-(void)createCustomInfoPanelControls;
-(void)setMoodControlVC:(MoodInfoPanel *)arg1 ;
-(long long)indexForMoodID:(id)arg1 ;
-(id)setupDurationDisplayNames;
-(void)setDurationControlVC:(DurationsInfoPanel *)arg1 ;
-(void)_updateDurationLabels;
-(void)setTeardownTimeofPlayer:(SCD_Struct_Mi1)arg1 ;
-(void)_prepareForPlayback;
-(void)hideHeroImageAnimated;
-(void)configureProVideoCallback;
-(BOOL)aggFirstPlayback;
-(void)setInitialDuration:(double)arg1 ;
-(void)_setUIProgressView;
-(BOOL)progressHasDownload;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(BOOL)firstPlayback;
-(void)_displayHeroImageWithScrimView:(BOOL)arg1 ;
-(id)_moodIDForIndexPath:(id)arg1 ;
-(void)setCurrentMoodWithIndexPath:(id)arg1 ;
-(BOOL)_deviceIsRunningInternalOS;
-(int)debugNum;
-(void)setDebugNum:(int)arg1 ;
-(void)_launchAutoEditDebugView:(id)arg1 ;
-(int)prefsNum;
-(void)setPrefsNum:(int)arg1 ;
-(void)setInitialMood:(NSString *)arg1 ;
-(void)moodInfoPanel:(id)arg1 didChangeMood:(id)arg2 ;
-(void)durationInfoPanel:(id)arg1 didChangeDuration:(int)arg2 ;
-(void)_undimOverlayView;
-(void)x_displayHeroImageWithPlayOverlay:(BOOL)arg1 ;
-(void)calculateAndSetProgress:(float)arg1 ;
-(void)startSpinner;
-(void)configurePlaybackViewsAndControllersWithProject:(id)arg1 ;
-(void)destroyAVPlayerAndPersistTimeonDestruction;
-(void)addDebuggingReadyForDisplayView;
-(BOOL)shouldPlay;
-(MiroCloudDownloader *)cloudDownloader;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
-(void)setMoodSlider:(UICollectionView *)arg1 ;
-(NSArray *)durationDisplayNames;
-(void)setDurationDisplayNames:(NSArray *)arg1 ;
-(UIImage *)poster;
-(void)setPoster:(UIImage *)arg1 ;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(BOOL)playbackRequested;
-(SCD_Struct_Mi1)teardownTimeofPlayer;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(float)progress;
-(void)didReceiveMemoryWarning;
-(void)stopSpinner;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end

