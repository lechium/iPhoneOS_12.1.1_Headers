/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKVideoControllerDelegate <NSObject>
@optional
-(void)videoPlayerControllerIsReadyToPlay:(id)arg1;
-(void)videoPlayerController:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;

@required
-(void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;

@end

