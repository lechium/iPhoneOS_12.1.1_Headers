/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, NSTimer;

@interface PBBridgeReportCodeView : UIView {

	NSMutableArray* _frames;
	NSTimer* _animationTimer;
	long long _frameIndex;

}

@property (nonatomic,retain) NSMutableArray * frames;               //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;              //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic) long long frameIndex;                  //@synthesize frameIndex=_frameIndex - In the implementation block
-(void)addFrame:(id)arg1 ;
-(NSTimer *)animationTimer;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(long long)frameIndex;
-(void)setFrameIndex:(long long)arg1 ;
-(void)playAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(NSMutableArray *)frames;
-(void)setFrames:(NSMutableArray *)arg1 ;
-(void)_tick:(id)arg1 ;
@end

