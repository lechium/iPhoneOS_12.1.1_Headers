/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIImage, NSIndexPath, NSString;

@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIImage* _thumbnailImage;
	NSIndexPath* _indexPath;
	double _duration;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;               //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL presenting;                       //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(UIImage *)thumbnailImage;
-(id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)presenting;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(double)duration;
-(BOOL)_shouldCrossFadeNavigationBar;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
@end

