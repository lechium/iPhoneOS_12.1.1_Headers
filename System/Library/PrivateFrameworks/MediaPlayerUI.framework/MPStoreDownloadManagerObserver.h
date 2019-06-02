/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPStoreDownloadManagerObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1;

@end

