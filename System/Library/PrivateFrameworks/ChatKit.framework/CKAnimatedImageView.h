/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver> {

	BOOL _automaticallyObserveWindowForAnimationTimer;
	CKAnimatedImage* _animatedImage;
	NSArray* _frames;

}

@property (nonatomic,copy) NSArray * frames;                                                //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                               //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,nonatomic) BOOL automaticallyObserveWindowForAnimationTimer;              //@synthesize automaticallyObserveWindowForAnimationTimer=_automaticallyObserveWindowForAnimationTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)updateAnimationTimerObserving;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(BOOL)automaticallyObserveWindowForAnimationTimer;
-(void)setAutomaticallyObserveWindowForAnimationTimer:(BOOL)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
@end

