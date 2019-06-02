/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWAudioSourceRecordingReadinessDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSArray, NSString;

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate> {

	opaqueCMSessionRef _CMSession;
	CFStringRef _CMSessionAudioMode;
	BOOL _configuresSession;
	BOOL _doEndInterruption;
	BOOL _useDecoupledIO;
	BOOL _isAppAudioSession;
	BOOL _didBeginInterruption;
	SCD_Struct_BW44 _clientAuditToken;
	BOOL _clientAuditTokenIsValid;
	int _clientPID;
	OpaqueCMClockRef _clock;
	opaqueCMFormatDescriptionRef _formatDescription;
	unsigned _pullDuration;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _auSubType;
	opaqueCMSimpleQueueRef _renderProcErrorQueue;
	opaqueCMSimpleQueueRef _inactiveBuffersQueue;
	opaqueCMSimpleQueueRef _activeBuffersQueue;
	unsigned long long _nextExpectedHostTime;
	SCD_Struct_BW2 _nextExpectedSampleTime;
	SCD_Struct_BW2 _ioprocTimeStampDeltaLimit;
	SCD_Struct_BW2 _prevPTS;
	unsigned _prevNumFrames;
	NSObject*<OS_dispatch_queue> _generateSamplesDispatchQueue;
	BOOL _streamStarted;
	BOOL _streamInterrupted;
	BOOL _levelMeteringEnabled;
	int _audioLevelUnits;
	SCD_Struct_BW2 _latencyOffset;
	BOOL _selectsMicForFrontCamera;
	NSObject*<OS_dispatch_source> _silenceTimer;
	long long _auRenderCount;
	long long _silenceFramesGeneratedSinceLastAURenderProc;
	TimestampedAudioBufferList* _currentSilenceBuffer;
	NSObject*<OS_dispatch_queue> _cmSessionOrientationLockQueue;
	NSObject*<OS_dispatch_queue> _preparedToRecordHandlerCallbackQueue;

}

@property (nonatomic,readonly) NSArray * audioLevels; 
@property (nonatomic,readonly) BOOL didBeginInterruption;              //@synthesize didBeginInterruption=_didBeginInterruption - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                         //@synthesize streamInterrupted=_streamInterrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_desiredSampleRate;
+(id)audioSourceNodeWithAttributes:(id)arg1 clock:(OpaqueCMClockRef)arg2 CMSession:(opaqueCMSessionRef)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 ;
+(void)initialize;
-(id)nodeSubType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(OpaqueCMClockRef)clock;
-(BOOL)didBeginInterruption;
-(NSArray *)audioLevels;
-(int)_setCMSessionAudioModeAndSelectMic:(BOOL*)arg1 ;
-(BOOL)_cmSessionBooleanPropertyIsTrue:(CFStringRef)arg1 ;
-(int)_updatePullFormatDescription;
-(int)_setCMSessionPropertyWithKey:(CFStringRef)arg1 value:(void*)arg2 ;
-(void)_generateSilenceIfNeeded;
-(void)makeOutputsLiveIfNeeded;
-(id)_initWithAttributes:(id)arg1 clock:(OpaqueCMClockRef)arg2 CMSession:(opaqueCMSessionRef)arg3 configureSession:(BOOL)arg4 doEndInterruption:(BOOL)arg5 clientToken:(id)arg6 clientPID:(int)arg7 clientVersionOfLinkedSDK:(unsigned)arg8 ;
-(int)_setupAudioUnit;
-(int)_deactivateCMSessionIfNecessary:(BOOL*)arg1 ;
-(int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(BOOL*)arg2 ;
-(int)_selectMicForAudioRoute:(id)arg1 ;
-(int)_getAudioDevicePullFrames:(unsigned*)arg1 ;
-(int)_generatePullBuffers;
-(unsigned)_audioCombinedLatency;
-(opaqueCMSampleBufferRef)_createSampleBufferForTimestampedAudioBufferList:(TimestampedAudioBufferList*)arg1 ;
-(void)_setupPrepareToRecordStateWithFlags:(unsigned)arg1 ;
-(void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unprepareForRecording;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(BOOL)levelMeteringEnabled;
-(void)setLevelMeteringEnabled:(BOOL)arg1 ;
-(BOOL)selectsMicForFrontCamera;
-(void)setSelectsMicForFrontCamera:(BOOL)arg1 ;
-(CFStringRef)CMSessionAudioMode;
-(void)setCMSessionAudioMode:(CFStringRef)arg1 ;
-(void)_generateSamples;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)dealloc;
@end

