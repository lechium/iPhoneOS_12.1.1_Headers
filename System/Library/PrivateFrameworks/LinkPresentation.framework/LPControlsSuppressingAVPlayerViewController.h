/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlayerViewController.h>

@class LPFullScreenVideoViewController;

@interface LPControlsSuppressingAVPlayerViewController : AVPlayerViewController {

	/*^block*/id _readyForDisplayCallback;
	LPFullScreenVideoViewController* _fullScreenController;

}

@property (assign,nonatomic,__weak) LPFullScreenVideoViewController * fullScreenController;              //@synthesize fullScreenController=_fullScreenController - In the implementation block
-(id)initWithPlayerLayerView:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didBeginSlideToDismissTransition;
-(LPFullScreenVideoViewController *)fullScreenController;
-(void)setFullScreenController:(LPFullScreenVideoViewController *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

