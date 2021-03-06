/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCameraViewfinderSession.h>

@protocol FigCameraViewfinderSessionRemoteObject;
@class FigStateMachine;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {

	id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
	unsigned _state;
	FigStateMachine* _stateMachine;

}
-(void)_setupStateMachine;
-(void)openPreviewStreamWithOptions:(id)arg1 ;
-(void)closePreviewStream;
-(void)_clientDisconnectedFromServer;
-(id)_initWithRemoteViewfinderSession:(id)arg1 delegateStorage:(id)arg2 ;
-(void)_previewStreamDidOpen;
-(void)_previewStreamDidCloseWithStatus:(int)arg1 ;
-(void)_serverDied;
-(void)dealloc;
@end

