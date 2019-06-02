/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARInternalSessionObserver.h>
#import <ARKit/ARReplaySensorDelegate.h>

@protocol OS_dispatch_queue, ARQATracerDelegate;
@class NSMutableDictionary, NSMutableData, NSOutputStream, NSObject, NSString, UILabel, ARScreenRecording;

@interface ARQATracer : NSObject <ARInternalSessionObserver, ARReplaySensorDelegate> {

	unsigned long long _frameIndex;
	BOOL _isTracing;
	NSMutableDictionary* _traceHeader;
	NSMutableData* _dataBuffer;
	NSOutputStream* _framesStreamToFile;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _forceQuitApp;
	BOOL _recordScreen;
	id<ARQATracerDelegate> _delegate;
	NSString* _traceOutputFilePath;
	UILabel* _replayFrameLabel;
	ARScreenRecording* _screenRecorder;
	CGPoint _offset;

}

@property (nonatomic,retain) NSString * traceOutputFilePath;                      //@synthesize traceOutputFilePath=_traceOutputFilePath - In the implementation block
@property (nonatomic,retain) UILabel * replayFrameLabel;                          //@synthesize replayFrameLabel=_replayFrameLabel - In the implementation block
@property (nonatomic,retain) ARScreenRecording * screenRecorder;                  //@synthesize screenRecorder=_screenRecorder - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                      //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL forceQuitApp;                                   //@synthesize forceQuitApp=_forceQuitApp - In the implementation block
@property (assign,nonatomic) BOOL recordScreen;                                   //@synthesize recordScreen=_recordScreen - In the implementation block
@property (assign,nonatomic,__weak) id<ARQATracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
-(void)start:(id)arg1 ;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)createTraceOutputDirectory;
-(void)setTraceOutputFilePath:(NSString *)arg1 ;
-(NSString *)traceOutputFilePath;
-(void)setRecordScreen:(BOOL)arg1 ;
-(void)setForceQuitApp:(BOOL)arg1 ;
-(void)writeStringToOutputStream:(id)arg1 ;
-(void)receiveDefaults;
-(void)addFrameLabel:(id)arg1 ;
-(UILabel *)replayFrameLabel;
-(BOOL)recordScreen;
-(void)setScreenRecorder:(ARScreenRecording *)arg1 ;
-(ARScreenRecording *)screenRecorder;
-(void)writeJSONObjectToStream:(id)arg1 prefix:(id)arg2 ;
-(void)flushDataBufferToFile;
-(BOOL)forceQuitApp;
-(void)setReplayFrameLabel:(UILabel *)arg1 ;
-(void)replaySensorDidFinishReplayingData;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<ARQATracerDelegate>)arg1 ;
-(id<ARQATracerDelegate>)delegate;
-(void)stop;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(void)update:(id)arg1 ;
@end
