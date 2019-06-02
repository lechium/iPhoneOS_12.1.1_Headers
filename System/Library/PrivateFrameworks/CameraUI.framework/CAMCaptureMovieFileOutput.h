/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVCaptureMovieFileOutput.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, AVCaptureFileOutputRecordingDelegate;
@class CAMCaptureEngine, NSObject, NSMutableDictionary, NSMutableArray, NSDictionary, NSString;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate> {

	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __userInfoQueue;
	NSMutableDictionary* __userInfoBySettingsID;
	NSMutableArray* __removeOnCompletionSettingsIDs;
	NSDictionary* _currentUserInfo;
	NSDictionary* _userInfoForNextCapture;
	id<AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                   //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _userInfoQueue;                                //@synthesize _userInfoQueue=__userInfoQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _userInfoBySettingsID;                                //@synthesize _userInfoBySettingsID=__userInfoBySettingsID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _removeOnCompletionSettingsIDs;                            //@synthesize _removeOnCompletionSettingsIDs=__removeOnCompletionSettingsIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * currentUserInfo;                                                 //@synthesize currentUserInfo=_currentUserInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForNextCapture;                                          //@synthesize userInfoForNextCapture=_userInfoForNextCapture - In the implementation block
@property (assign,nonatomic,__weak) id<AVCaptureFileOutputRecordingDelegate> wrappedDelegate;              //@synthesize wrappedDelegate=_wrappedDelegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)setWrappedDelegate:(id<AVCaptureFileOutputRecordingDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)_userInfoQueue;
-(NSDictionary *)currentUserInfo;
-(void)setCurrentUserInfo:(NSDictionary *)arg1 ;
-(void)setUserInfoForNextCapture:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfoForNextCapture;
-(NSMutableDictionary *)_userInfoBySettingsID;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(NSMutableArray *)_removeOnCompletionSettingsIDs;
-(id<AVCaptureFileOutputRecordingDelegate>)wrappedDelegate;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithEngine:(id)arg1 ;
@end

