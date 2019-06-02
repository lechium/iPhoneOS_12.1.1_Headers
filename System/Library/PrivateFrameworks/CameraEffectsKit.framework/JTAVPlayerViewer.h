/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayer, NSString;


@protocol JTAVPlayerViewer <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (assign,nonatomic,__weak) id<JTAVPlayerViewerDelegate> playerViewDelegate; 
@required
-(NSString *)videoGravity;
-(CGRect)videoBounds;
-(CGSize)displaySize;
-(AVPlayer *)player;
-(void)setPlayer:(id)arg1;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(id)arg1;
-(id<JTAVPlayerViewerDelegate>)playerViewDelegate;
-(void)setPlayerViewDelegate:(id)arg1;

@end
