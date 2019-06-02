/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLDetailItemViewController.h>

@protocol QLDownloadingItemViewControllerDelegate;
@class QLRoundProgressView, QLDetailItemViewControllerState, UIImageView, UIImage, QLItem;

@interface QLDownloadingItemViewController : QLDetailItemViewController {

	BOOL _downloading;
	BOOL _downloaded;
	BOOL _didDisappear;
	id _progressSubscriber;
	QLRoundProgressView* _progressView;
	QLDetailItemViewControllerState* _readyForDownloadState;
	QLDetailItemViewControllerState* _cancelableDownloadingState;
	QLDetailItemViewControllerState* _nonCancelableDownloadingState;
	QLDetailItemViewControllerState* _completedDownloadState;
	QLDetailItemViewControllerState* _previewLoadingState;
	UIImageView* _downloadImageView;
	UIImage* _cloudImage;
	QLItem* _previewItem;
	BOOL _showsLoadingPreviewSpinner;
	id<QLDownloadingItemViewControllerDelegate> _downloadingDelegate;

}

@property (assign,nonatomic) BOOL downloaded;                                                                     //@synthesize downloaded=_downloaded - In the implementation block
@property (nonatomic,readonly) QLRoundProgressView * progressView;                                                //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<QLDownloadingItemViewControllerDelegate> downloadingDelegate;              //@synthesize downloadingDelegate=_downloadingDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingPreviewSpinner;                                                     //@synthesize showsLoadingPreviewSpinner=_showsLoadingPreviewSpinner - In the implementation block
-(void)performAction;
-(QLRoundProgressView *)progressView;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsLoadingPreviewSpinner:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDownloadingDelegate:(id<QLDownloadingItemViewControllerDelegate>)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)_startDownload:(BOOL)arg1 ;
-(BOOL)shouldAutoDownloadInNetworkState:(unsigned long long)arg1 downloadSize:(id)arg2 ;
-(void)_updateFileSizeWithProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_toggleDownload:(BOOL)arg1 ;
-(void)_stopDownload:(BOOL)arg1 ;
-(void)_startDownloadOperation;
-(void)_setDownloading:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_presentConnectivityAlert;
-(id<QLDownloadingItemViewControllerDelegate>)downloadingDelegate;
-(BOOL)showsLoadingPreviewSpinner;
-(void)setDownloaded:(BOOL)arg1 ;
-(BOOL)downloaded;
-(void)viewDidLoad;
@end

