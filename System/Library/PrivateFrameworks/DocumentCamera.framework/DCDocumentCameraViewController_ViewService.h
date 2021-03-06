/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <DocumentCamera/DCDocumentCameraViewController.h>
#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>
#import <libobjc.A.dylib/DCDocumentCameraPublicViewController.h>

@class _UIResilientRemoteViewContainerViewController, DCDocumentCameraViewServiceSession, BKSAccelerometer, DCDocumentCameraRemoteViewController, NSString;

@interface DCDocumentCameraViewController_ViewService : DCDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController> {

	_UIResilientRemoteViewContainerViewController* _childViewController;
	DCDocumentCameraViewServiceSession* _viewServiceSession;
	BKSAccelerometer* _accelerometer;

}

@property (setter=setChildViewController:,nonatomic,retain) _UIResilientRemoteViewContainerViewController * childViewController;                      //@synthesize childViewController=_childViewController - In the implementation block
@property (getter=viewServiceViewController,nonatomic,readonly) id<DCDocumentCameraViewServiceViewController> viewServiceViewController; 
@property (getter=remoteViewController,nonatomic,readonly) DCDocumentCameraRemoteViewController * remoteViewController; 
@property (nonatomic,retain) DCDocumentCameraViewServiceSession * viewServiceSession;                                                                 //@synthesize viewServiceSession=_viewServiceSession - In the implementation block
@property (nonatomic,retain) BKSAccelerometer * accelerometer;                                                                                        //@synthesize accelerometer=_accelerometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCancel;
-(_UIResilientRemoteViewContainerViewController *)childViewController;
-(void)setChildViewController:(_UIResilientRemoteViewContainerViewController *)arg1 ;
-(BKSAccelerometer *)accelerometer;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(void)setAccelerometer:(BKSAccelerometer *)arg1 ;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setViewServiceSession:(DCDocumentCameraViewServiceSession *)arg1 ;
-(DCDocumentCameraViewServiceSession *)viewServiceSession;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)viewDidLoad;
-(id)initWithDelegate:(id)arg1 ;
-(DCDocumentCameraRemoteViewController *)remoteViewController;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
@end

