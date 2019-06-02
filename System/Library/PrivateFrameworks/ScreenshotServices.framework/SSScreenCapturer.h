/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSUIServiceServerDelegate.h>
#import <libobjc.A.dylib/SSTestingCoordinatorDelegate.h>

@protocol SSScreenCapturerDelegate;
@class SSSnapshotter, SSDittoRemoteConnection, SSUIServiceServer, SSTestingCoordinator, SSScreenshotsWindow, UIWindow;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate> {

	SSSnapshotter* _snapshotter;
	SSDittoRemoteConnection* _dittoRemoteConnection;
	SSUIServiceServer* _uiServiceServer;
	SSTestingCoordinator* _testingCoordinator;
	SSScreenshotsWindow* _serviceWindow;
	id<SSScreenCapturerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSScreenCapturerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWindow * screenshotsWindow; 
+(id)_currentDisplayLayout;
+(BOOL)shouldUseScreenCapturerForScreenshots;
+(void)playScreenshotSound;
-(void)takeScreenshot;
-(void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2 ;
-(void)server:(id)arg1 receivedRequest:(id)arg2 ;
-(void)_preheatAndTakeScreenshotIfPossibleWithPresentationOptions:(id)arg1 appleInternalOptions:(id)arg2 ;
-(void)takeScreenshotWithPresentationOptions:(id)arg1 ;
-(void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2 ;
-(void)_takeScreenshotWithPresentationOptions:(id)arg1 appleInternalOptions:(id)arg2 ;
-(id)_environmentDescriptionFromImage:(id)arg1 ;
-(void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 ;
-(id)_testingCoordinator;
-(UIWindow *)screenshotsWindow;
-(id)init;
-(void)setDelegate:(id<SSScreenCapturerDelegate>)arg1 ;
-(id<SSScreenCapturerDelegate>)delegate;
@end
