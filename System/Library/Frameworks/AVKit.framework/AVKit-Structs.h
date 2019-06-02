/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct NSDirectionalEdgeInsets {
	double top;
	double leading;
	double bottom;
	double trailing;
} NSDirectionalEdgeInsets;

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	BOOL playerViewControllerWillStartPictureInPicture;
	BOOL playerViewControllerDidStartPictureInPicture;
	BOOL playerViewController_failedToStartPictureInPictureWithError;
	BOOL playerViewControllerWillStopPictureInPicture;
	BOOL playerViewControllerDidStopPictureInPicture;
	BOOL playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart;
	BOOL playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler;
	BOOL playerViewController_shouldExitFullScreenWithReason;
	BOOL playerViewControllerMetricsCollectionEventOccured;
	BOOL playerViewControllerWillTransitionToVisibilityOfPlaybackControlsWithAnimationCoordinator;
} SCD_Struct_AV5;

typedef struct {
	BOOL pictureInPictureViewControllerViewDidAppear;
	BOOL pictureInPictureViewControllerViewWillDisappear;
} SCD_Struct_AV6;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL pictureInPictureControllerWillStartPictureInPicture;
	BOOL pictureInPictureControllerDidStartPictureInPicture;
	BOOL pictureInPictureController_failedToStartPictureInPictureWithError;
	BOOL pictureInPictureControllerWillStopPictureInPicture;
	BOOL pictureInPictureControllerDidStopPictureInPicture;
	BOOL pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler;
} SCD_Struct_AV9;

typedef struct CGColor* CGColorRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV11;

