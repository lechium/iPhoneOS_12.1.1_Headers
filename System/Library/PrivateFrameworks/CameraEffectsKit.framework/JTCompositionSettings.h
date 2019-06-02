/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSObject;

@interface JTCompositionSettings : NSObject {

	int _timeScale;
	int _frameRate;
	NSObject*<OS_dispatch_queue> _queue;
	CGSize _renderSize;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int timeScale;                                   //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) int frameRate;                                   //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) CGSize renderSize;                               //@synthesize renderSize=_renderSize - In the implementation block
+(id)sharedInstance;
-(CGSize)renderSize;
-(int)frameRate;
-(void)setFrameRate:(int)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
