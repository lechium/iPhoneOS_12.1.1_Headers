/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMCameraCaptureDelegate.h>

@protocol CAMCameraReviewViewController;
@class NSMutableArray, UIViewController, NSString;

@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate> {

	NSMutableArray* __pendingAssetsForReview;
	UIViewController*<CAMCameraReviewViewController> _cachedReviewViewController;

}

@property (nonatomic,readonly) NSMutableArray * _pendingAssetsForReview;                                                                                                                         //@synthesize _pendingAssetsForReview=__pendingAssetsForReview - In the implementation block
@property (setter=_setCachedReviewViewController:,getter=_cachedReviewViewController,nonatomic,retain) UIViewController*<CAMCameraReviewViewController> cachedReviewViewController;              //@synthesize cachedReviewViewController=_cachedReviewViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<CAMCameraReviewViewController> cameraReviewViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cameraReviewViewControllerClass;
+(id)reviewAssetForPhoto:(id)arg1 withProperties:(id)arg2 ;
+(id)reviewAssetForLivePhoto:(id)arg1 withProperties:(id)arg2 ;
+(id)reviewAssetForAVAsset:(id)arg1 audioMix:(id)arg2 properties:(id)arg3 ;
-(void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5 ;
-(id)_cachedReviewViewController;
-(NSMutableArray *)_pendingAssetsForReview;
-(void)_setCachedReviewViewController:(id)arg1 ;
-(UIViewController*<CAMCameraReviewViewController>)cameraReviewViewController;
-(id)init;
@end

