/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class FigDelegateStorage, FigStateMachine;

@interface FigCameraViewfinderStream : NSObject {

	FigDelegateStorage* _delegateStorage;
	FigStateMachine* _stateMachine;
	OpaqueFigEndpointRef _endpoint;
	OpaqueFigEndpointStreamRef _stream;
	OpaqueFigVirtualDisplaySourceRef _displaySource;
	id _endpointsChangedNotificationToken;
	id _streamsChangedNotificationToken;

}
+(void)initialize;
-(void)_setupStateMachine;
-(void)openWithDestination:(id)arg1 ;
-(int)enqueueVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleEndpointsChanged:(id)arg1 ;
-(void)_handleStreamsChanged:(id)arg1 ;
-(void)_setEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)close;
@end
