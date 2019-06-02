/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MiroMemory, Project, MovieController, NSDate, NSOperationQueue;

@interface MiroAutoEditor : NSObject {

	BOOL _shouldBuildMovieController;
	BOOL _shouldSave;
	BOOL _topLevelCancel;
	float _downloadProgress;
	float _progress;
	int _downloadPolicy;
	MiroMemory* _memory;
	Project* _project;
	long long _remainingAssetsToDownload;
	MovieController* _movieController;
	id _observer;
	/*^block*/id _downloadCompleted;
	NSDate* _prepareStartedTime;
	NSDate* _tapStartedTime;
	double _autoEditStartedTimePPT;
	double _autoEditFinishedTimePPT;
	double _uiDidLoadTimePPT;
	double _uiDidAppearTimePPT;
	double _playbackStartedTimePPT;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) MiroMemory * memory;                            //@synthesize memory=_memory - In the implementation block
@property (retain) Project * project;                                        //@synthesize project=_project - In the implementation block
@property (assign) long long remainingAssetsToDownload;                      //@synthesize remainingAssetsToDownload=_remainingAssetsToDownload - In the implementation block
@property (assign) float downloadProgress;                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) float progress;                                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) id<MiroSequence> sequence; 
@property (assign) BOOL shouldBuildMovieController;                          //@synthesize shouldBuildMovieController=_shouldBuildMovieController - In the implementation block
@property (retain) MovieController * movieController;                        //@synthesize movieController=_movieController - In the implementation block
@property (assign) BOOL shouldSave;                                          //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign) int downloadPolicy;                                       //@synthesize downloadPolicy=_downloadPolicy - In the implementation block
@property (assign) BOOL topLevelCancel;                                      //@synthesize topLevelCancel=_topLevelCancel - In the implementation block
@property (nonatomic,retain) id observer;                                    //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) id downloadCompleted;                             //@synthesize downloadCompleted=_downloadCompleted - In the implementation block
@property (retain) NSDate * prepareStartedTime;                              //@synthesize prepareStartedTime=_prepareStartedTime - In the implementation block
@property (retain) NSDate * tapStartedTime;                                  //@synthesize tapStartedTime=_tapStartedTime - In the implementation block
@property (assign) double autoEditStartedTimePPT;                            //@synthesize autoEditStartedTimePPT=_autoEditStartedTimePPT - In the implementation block
@property (assign) double autoEditFinishedTimePPT;                           //@synthesize autoEditFinishedTimePPT=_autoEditFinishedTimePPT - In the implementation block
@property (assign) double uiDidLoadTimePPT;                                  //@synthesize uiDidLoadTimePPT=_uiDidLoadTimePPT - In the implementation block
@property (assign) double uiDidAppearTimePPT;                                //@synthesize uiDidAppearTimePPT=_uiDidAppearTimePPT - In the implementation block
@property (assign) double playbackStartedTimePPT;                            //@synthesize playbackStartedTimePPT=_playbackStartedTimePPT - In the implementation block
+(id)sharedInstanceForPregenerate;
-(void)updateProgress:(float)arg1 ;
-(int)downloadPolicy;
-(void)setDownloadPolicy:(int)arg1 ;
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(void)cancelAutoEdit;
-(id)initWithMemory:(id)arg1 shouldBuildMovieController:(BOOL)arg2 ;
-(void)setPrepareStartedTime:(NSDate *)arg1 ;
-(void)performAutoEditWithCompletionHandler:(/*^block*/id)arg1 ;
-(MovieController *)movieController;
-(NSDate *)prepareStartedTime;
-(void)pregenerateMemory:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(Project *)project;
-(void)setMovieController:(MovieController *)arg1 ;
-(double)autoEditStartedTimePPT;
-(double)uiDidLoadTimePPT;
-(double)autoEditFinishedTimePPT;
-(double)playbackStartedTimePPT;
-(double)uiDidAppearTimePPT;
-(BOOL)isAutoEditing;
-(BOOL)topLevelCancel;
-(void)performAutoEdit;
-(void)setShouldSave:(BOOL)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(id)assetMediaType:(id)arg1 itemStart:(double)arg2 itemDuration:(double)arg3 ;
-(id)durationsForAsset:(id)arg1 itemDuration:(double)arg2 ;
-(void)setDownloadCompleted:(id)arg1 ;
-(id)downloadCompleted;
-(void)setTapStartedTime:(NSDate *)arg1 ;
-(void)setUiDidLoadTimePPT:(double)arg1 ;
-(void)setUiDidAppearTimePPT:(double)arg1 ;
-(void)setPlaybackStartedTimePPT:(double)arg1 ;
-(NSDate *)tapStartedTime;
-(id)_returnTextDebugAsString;
-(void)performPersist;
-(id)initForPregenerate;
-(void)_autoEditMemory:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_downloadSongForPregenrateWithMemory:(id)arg1 ;
-(void)_logMemoryStuff:(id)arg1 ;
-(void)fetchAndPrintAssets:(id)arg1 andMemory:(id)arg2 ;
-(void)logFreeze:(id)arg1 message:(id)arg2 ;
-(void)setTopLevelCancel:(BOOL)arg1 ;
-(void)setAutoEditStartedTimePPT:(double)arg1 ;
-(void)setAutoEditFinishedTimePPT:(double)arg1 ;
-(void)setRemainingAssetsToDownload:(long long)arg1 ;
-(BOOL)shouldNotifyProgress;
-(id)_printDataForAssetAsString:(id)arg1 andPickInfo:(id)arg2 ;
-(long long)remainingAssetsToDownload;
-(BOOL)shouldBuildMovieController;
-(void)setShouldBuildMovieController:(BOOL)arg1 ;
-(BOOL)shouldSave;
-(void)updateProject:(id)arg1 ;
-(void)updateMovieController:(id)arg1 ;
-(void)updateDownloadProgress:(float)arg1 ;
-(void)updateRemainingAssetsToDownload:(long long)arg1 ;
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(float)progress;
-(void)_cancel;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)isBusy;
-(id<MiroSequence>)sequence;
-(void)setSequence:(id<MiroSequence>)arg1 ;
@end

