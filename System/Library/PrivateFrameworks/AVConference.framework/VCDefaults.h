/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSNumber;

@interface VCDefaults : NSObject {

	int _forceCaptureWidth;
	int _forceCaptureHeight;
	int _forceEncodeWidth;
	int _forceEncodeHeight;
	int _forceEncodeFramerate;
	int _forceFramerate;
	int _forceBitrate;
	int _forceVideoPayload;
	int _forceRecvVideoPayload;
	int _forceKeyFrameInterval;

}

@property (readonly) BOOL forceScreenHWI; 
@property (readonly) BOOL forceHWI; 
@property (readonly) BOOL forceMultiwayHWI; 
@property (readonly) BOOL forceDisableThermal; 
@property (readonly) int forceCaptureWidth; 
@property (readonly) int forceCaptureHeight; 
@property (readonly) int forceEncodeFramerate; 
@property (readonly) int forceEncodeWidth; 
@property (readonly) int forceEncodeHeight; 
@property (readonly) int forceFramerate; 
@property (readonly) int forceBitrate; 
@property (readonly) int forceVideoPayload; 
@property (readonly) int forceRecvVideoPayload; 
@property (readonly) int forceKeyFrameInterval; 
@property (readonly) BOOL forceARCapture; 
@property (readonly) BOOL forceMirroredCapture; 
@property (readonly) BOOL forceEnablePearlCamera; 
@property (readonly) BOOL enableBitstreamCapture; 
@property (readonly) int enable2vuyCapture; 
@property (readonly) BOOL enableVPBLogging; 
@property (readonly) int enableTxSourceYuvDump; 
@property (readonly) BOOL enableTxBitstreamDump; 
@property (readonly) BOOL enableRecvBitstreamDump; 
@property (readonly) BOOL enablePacketLogging; 
@property (readonly) BOOL disableVAD; 
@property (readonly) int bundleAudio; 
@property (readonly) BOOL audioRecordingEnabled; 
@property (readonly) int forceAudioPayload; 
@property (readonly) int forceAudioBitrate; 
@property (readonly) int forceAudioPacketsPerBundle; 
@property (readonly) int forceAudioHardwareSampleRate; 
@property (readonly) float forceAudioPowerThreshold; 
@property (readonly) int forceAudioPowerTimeInterval; 
@property (readonly) BOOL forceDisableAudioPowerSpectrumRegister; 
@property (readonly) BOOL forceUseFloat; 
@property (readonly) int forceAudioChannelCount; 
@property (readonly) BOOL disableRed; 
@property (readonly) int forceRedNumPayloads; 
@property (readonly) int forceRedMaxDelay; 
@property (readonly) BOOL useSBR; 
@property (readonly) unsigned aacBlockSize; 
@property (readonly) int forceVideoStreamResolution; 
@property (readonly) int forceVideoStreamTxMaxBitrate; 
@property (readonly) int forceVideoStreamTxMinBitrate; 
@property (readonly) int forceVideoStreamFramerate; 
@property (readonly) int forceVideoStreamKeyFrameInterval; 
@property (readonly) int forceVideoStreamRxMaxBitrate; 
@property (readonly) int forceVideoStreamRxMinBitrate; 
@property (readonly) BOOL videoStreamRateControlDumpEnabled; 
@property (readonly) int videoStreamRateControlAlgorithm; 
@property (readonly) BOOL cannedReplayEnabled; 
@property (readonly) BOOL forceDisableMediaQueue; 
@property (readonly) BOOL mediaQueueDumpEnabled; 
@property (readonly) BOOL rateControlDumpEnabled; 
@property (readonly) BOOL rateControlLogEnabled; 
@property (readonly) int rateControlForceTxCap; 
@property (readonly) int rateControlForceRxCap; 
@property (readonly) int rateControlForceTxRate; 
@property (readonly) int rateControlForceRxRate; 
@property (readonly) int redundancyControlForceVideoRedundancyPercentage; 
@property (readonly) int max2GRate; 
@property (readonly) BOOL forceIPv6; 
@property (readonly) NSNumber * enableiRATSuggestion; 
@property (readonly) int localWRMLinkType; 
@property (readonly) float pauseHeartbeatInterval; 
@property (readonly) int extraPayloads; 
@property (readonly) int encodingScore; 
@property (readonly) BOOL canDecodeHD; 
@property (readonly) BOOL shouldDisplayVideoInfoLayer; 
@property (readonly) BOOL momentsUserPreferenceEnabled; 
@property (readonly) BOOL dumpMediaBlob; 
@property (readonly) unsigned maxActiveVideoEncoders; 
@property (readonly) unsigned maxActiveVideoDecoders; 
@property (readonly) BOOL forceEVSWideBand; 
@property (readonly) BOOL forceMuteAtStart; 
@property (readonly) BOOL forceDisableVideoDegraded; 
@property (readonly) BOOL forceDisableMediaStalled; 
@property (readonly) unsigned minParticipantCountSendVoiceActiveOnly; 
@property (readonly) BOOL forceDisableMediaEncryption; 
@property (readonly) BOOL forceDisableReporting; 
@property (readonly) BOOL forceFECRepairStream; 
@property (readonly) unsigned forceVisibilityIndex; 
@property (readonly) BOOL forceDisableMediaPriority; 
@property (readonly) unsigned char audioPriorityDecaySlow; 
@property (readonly) unsigned char audioPriorityDecayFast; 
@property (readonly) unsigned char audioPriorityRampUpSpeed; 
@property (readonly) float audioVoiceDetectionSensitivity; 
@property (readonly) unsigned silenceLevelMovingAveragePeriod; 
@property (readonly) unsigned char forceAudioPriorityValue; 
@property (readonly) BOOL forceAudioPriorityEnabled; 
@property (readonly) unsigned multiwayAudioNetworkBitrateCapWifi; 
@property (readonly) unsigned multiwayAudioNetworkBitrateCapCellular; 
@property (readonly) unsigned multiwayVideoNetworkBitrateCapWifi; 
@property (readonly) unsigned multiwayVideoNetworkBitrateCapCellular; 
@property (readonly) unsigned prominenceActiveProbabilityThreshold; 
@property (readonly) unsigned prominenceInactiveProbabilityThreshold; 
@property (readonly) unsigned prominenceActiveAccumulationThreshold; 
@property (readonly) unsigned prominenceInactiveAccumulationThreshold; 
@property (readonly) BOOL forceDisableFaceZoom; 
@property (readonly) BOOL forceDynamicEffectsFramerate; 
@property (readonly) float depthFrameRateMultiplier; 
@property (readonly) BOOL forceDisableMessageEncryption; 
+(double)getDoubleValueForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
+(long long)integerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
+(BOOL)booleanValueForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
+(BOOL)booleanValueForKey:(CFStringRef)arg1 ;
+(long long)integerValueForKey:(CFStringRef)arg1 ;
+(id)sharedInstance;
-(int)forceAudioChannelCount;
-(int)forceAudioHardwareSampleRate;
-(BOOL)rateControlDumpEnabled;
-(BOOL)rateControlLogEnabled;
-(int)rateControlForceTxCap;
-(int)rateControlForceTxRate;
-(int)rateControlForceRxCap;
-(int)rateControlForceRxRate;
-(BOOL)useSBR;
-(int)redundancyControlForceVideoRedundancyPercentage;
-(BOOL)forceDisableMessageEncryption;
-(int)forceAudioPayload;
-(unsigned)aacBlockSize;
-(BOOL)forceDisableAudioPowerSpectrumRegister;
-(BOOL)forceEVSWideBand;
-(BOOL)audioRecordingEnabled;
-(int)forceAudioPowerTimeInterval;
-(float)forceAudioPowerThreshold;
-(int)enable2vuyCapture;
-(BOOL)forceFECRepairStream;
-(unsigned)prominenceActiveAccumulationThreshold;
-(unsigned)prominenceActiveProbabilityThreshold;
-(unsigned)prominenceInactiveAccumulationThreshold;
-(unsigned)prominenceInactiveProbabilityThreshold;
-(BOOL)forceDisableVideoDegraded;
-(unsigned)multiwayVideoNetworkBitrateCapWifi;
-(unsigned)multiwayVideoNetworkBitrateCapCellular;
-(BOOL)forceDisableFaceZoom;
-(int)localWRMLinkType;
-(NSNumber *)enableiRATSuggestion;
-(float)pauseHeartbeatInterval;
-(BOOL)disableRed;
-(BOOL)forceHWI;
-(int)forceVideoPayload;
-(int)forceRecvVideoPayload;
-(int)forceBitrate;
-(int)forceCaptureWidth;
-(int)forceCaptureHeight;
-(int)forceFramerate;
-(int)forceEncodeWidth;
-(int)forceEncodeHeight;
-(BOOL)forceScreenHWI;
-(int)forceEncodeFramerate;
-(int)max2GRate;
-(int)forceAudioPacketsPerBundle;
-(BOOL)disableVAD;
-(BOOL)momentsUserPreferenceEnabled;
-(BOOL)forceIPv6;
-(BOOL)enablePacketLogging;
-(BOOL)forceMirroredCapture;
-(BOOL)forceDynamicEffectsFramerate;
-(float)depthFrameRateMultiplier;
-(BOOL)forceEnablePearlCamera;
-(BOOL)forceMultiwayHWI;
-(BOOL)shouldOverrideEffectsFramerate:(unsigned*)arg1 ;
-(BOOL)forceDisableReporting;
-(BOOL)forceDisableMediaQueue;
-(BOOL)forceDisableMediaPriority;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)mediaQueueDumpEnabled;
-(unsigned)minParticipantCountSendVoiceActiveOnly;
-(BOOL)forceMuteAtStart;
-(unsigned char)audioPriorityRampUpSpeed;
-(unsigned char)audioPriorityDecaySlow;
-(unsigned char)audioPriorityDecayFast;
-(float)audioVoiceDetectionSensitivity;
-(unsigned)silenceLevelMovingAveragePeriod;
-(unsigned char)forceAudioPriorityValue;
-(BOOL)forceAudioPriorityEnabled;
-(unsigned)maxActiveVideoEncoders;
-(int)encodingScore;
-(BOOL)canDecodeHD;
-(BOOL)dumpMediaBlob;
-(int)forceKeyFrameInterval;
-(int)videoStreamRateControlAlgorithm;
-(BOOL)videoStreamRateControlDumpEnabled;
-(BOOL)forceDisableThermal;
-(BOOL)cannedReplayEnabled;
-(unsigned)forceThermalLevelFramerate:(unsigned)arg1 ;
-(int)forceAudioBitrate;
-(int)forceVideoStreamResolution;
-(int)forceVideoStreamTxMaxBitrate;
-(int)forceVideoStreamTxMinBitrate;
-(int)forceVideoStreamFramerate;
-(int)forceVideoStreamKeyFrameInterval;
-(int)forceVideoStreamRxMaxBitrate;
-(int)forceVideoStreamRxMinBitrate;
-(BOOL)enableVPBLogging;
-(BOOL)enableBitstreamCapture;
-(BOOL)enableRecvBitstreamDump;
-(BOOL)shouldDisplayVideoInfoLayer;
-(int)forceRedMaxDelay;
-(int)forceRedNumPayloads;
-(void)seperateString:(id)arg1 ;
-(BOOL)forceARCapture;
-(int)enableTxSourceYuvDump;
-(BOOL)enableTxBitstreamDump;
-(int)extraPayloads;
-(int)bundleAudio;
-(BOOL)forceUseFloat;
-(unsigned)forceVisibilityIndex;
-(BOOL)enableAudioDumpParticipantRemote:(BOOL)arg1 ;
-(BOOL)enableAudioDumpParticipantLocal:(BOOL)arg1 ;
-(unsigned)multiwayAudioNetworkBitrateCapWifi;
-(unsigned)multiwayAudioNetworkBitrateCapCellular;
-(BOOL)forceDisableMediaStalled;
-(BOOL)forceDisableMediaEncryption;
-(id)init;
-(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
