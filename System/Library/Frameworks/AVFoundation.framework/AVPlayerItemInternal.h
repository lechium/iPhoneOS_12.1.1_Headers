/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVPlayerItemDelegate, NSObjectNSCopying, AVLoggingIdentifier;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSURL, NSObject, AVWeakReference, AVPropertyStorage, NSArray, AVAsset, NSMutableArray, NSMutableDictionary, AVAudioMix, NSError, NSDictionary, NSString, NSDate, AVPlayerItem, AVPlayerConnection, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVPlayerItemInternal : NSObject {

	NSURL* URL;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReference;
	AVPropertyStorage* propertyStorage;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> figPlaybackItemAccessorQueue;
	NSObject*<OS_dispatch_queue> seekQueue;
	OpaqueFigSimpleMutexRef seekIDMutex;
	OpaqueVTPixelBufferAttributesMediatorRef pixelBufferAttributeMediator;
	OpaqueCMTimebaseRef proxyTimebase;
	NSArray* automaticallyLoadedAssetKeys;
	BOOL wasInitializedWithURL;
	AVAsset* asset;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSArray* cachedTracks;
	NSArray* tracks;
	NSMutableArray* syncLayers;
	NSArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
	NSMutableDictionary* itemLegibleOutputsForKeys;
	NSMutableDictionary* itemMetadataOutputsForKeys;
	BOOL suppressesVideoLayers;
	OpaqueCMTimebaseRef loopingTimebase;
	OpaqueCMTimebaseRef figTimebase;
	BOOL didBecomeReadyForInspectionOfTracks;
	BOOL didBecomeReadyForInspectionOfPresentationSize;
	BOOL didBecomeReadyForInspectionOfDuration;
	BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	BOOL needTimedMetadataNotification;
	BOOL didBecomeReadyForBasicInspection;
	id<AVPlayerItemDelegate> delegate;
	AVAudioMix* audioMix;
	long long status;
	NSError* error;
	SCD_Struct_AV5 forwardPlaybackEndTime;
	SCD_Struct_AV5 reversePlaybackEndTime;
	SCD_Struct_AV5 duration;
	BOOL seekingWaitsForVideoCompositionRendering;
	NSArray* textStyleRules;
	CFStringRef initialFigTimePitchAlgorithm;
	BOOL canUseNetworkResourcesForLiveStreamingWhilePaused;
	SCD_Struct_AV5 maximumForwardBufferDuration;
	SCD_Struct_AV5 maximumTrailingBufferDuration;
	double preferredPeakBitRate;
	NSArray* itemCollectors;
	NSMutableArray* itemMetadataCollectors;
	unsigned RTCReportingFlags;
	NSDictionary* gaplessInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	BOOL initialLimitReadAhead;
	unsigned long long restrictions;
	NSString* mediaKind;
	BOOL reversesMoreVideoFramesInMemory;
	BOOL reversesMoreVideoFramesInMemoryWasSet;
	BOOL aggressivelyCachesVideoFrames;
	BOOL aggressivelyCachesVideoFramesWasSet;
	BOOL initialContinuesPlayingDuringPrerollForSeek;
	BOOL initialContinuesPlayingDuringPrerollForRateChange;
	BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
	BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
	SCD_Struct_AV5 minimumIntervalForIFrameOnlyPlayback;
	BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
	float speedThresholdForIFrameOnlyPlayback;
	BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	BOOL requiresAccessLog;
	BOOL suppressesAudioOnlyVariants;
	NSArray* imageQueueInterpolationCurve;
	BOOL imageQueueInterpolationCurveWasSet;
	BOOL blendsVideoFrames;
	BOOL blendsVideoFramesWasSet;
	NSString* videoApertureMode;
	BOOL usesMinimalLatencyForVideoCompositionRendering;
	BOOL initialAlwaysMonitorsPlayability;
	long long initialPlaybackLikelyToKeepUpTrigger;
	BOOL savesDownloadedDataToDiskWhenDone;
	BOOL networkUsuallyExceedsMaxBitRate;
	BOOL allowProgressiveSwitchUp;
	BOOL allowProgressiveStartup;
	BOOL allowProgressiveResume;
	CGSize IFramePrefetchTargetDimensions;
	id<NSObject><NSCopying> AVKitData;
	BOOL playHapticTracks;
	CGSize preferredMaximumResolution;
	BOOL canPlayFastForward;
	BOOL canPlayFastReverse;
	BOOL canPlayReverse;
	BOOL canPlaySlowReverse;
	BOOL canPlaySlowForward;
	BOOL canStepForward;
	BOOL canStepBackward;
	CGSize presentationSize;
	BOOL playbackBufferEmpty;
	BOOL playbackBufferFull;
	BOOL playbackLikelyToKeepUp;
	BOOL nonForcedSubtitlesEnabled;
	BOOL hasEnabledVideo;
	BOOL hasVideo;
	BOOL hasEnabledAudio;
	BOOL hasEnqueuedVideoFrame;
	BOOL externalProtectionRequested;
	NSArray* seekableTimeRanges;
	double seekableTimeRangesLastModifiedTime;
	NSArray* loadedTimeRanges;
	SCD_Struct_AV6 loopTimeRange;
	id<AVLoggingIdentifier> loggingIdentifier;
	BOOL needToSeekAfterCreatingFigPlaybackItem;
	SCD_Struct_AV5 initialTime;
	unsigned initialSetTimeFlags;
	SCD_Struct_AV5 initialMinSnapTime;
	SCD_Struct_AV5 initialMaxSnapTime;
	unsigned nextSeekIDToGenerate;
	int pendingSeekID;
	/*^block*/id seekCompletionHandler;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	AVPlayerConnection* playerConnection;
	BOOL initialWillNeverSeekBackwardsHint;
	BOOL decodesAllFramesDuringOrdinaryPlayback;
	BOOL decodesAllFramesDuringOrdinaryPlaybackWasSet;
	AVVideoComposition* videoComposition;
	AVWeakReference* clientsOriginalVideoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	void* figVideoCompositor;
	int eqPreset;
	NSDictionary* rampInOutInfo;
	NSDictionary* audibleDRMInfo;
	long long initialVariantIndex;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	NSString* serviceIdentifier;
	NSArray* timedMetadata;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	BOOL haveInitialSamples;
	BOOL haveCPEProtector;
	BOOL didInformObserversAboutAvailabilityOfTracks;
	BOOL didFireKVOForAssetForNonStreamingItem;
	AVAudioMix* mostRecentlyAppliedAudioMix;
	AVWeakReference* playerReference;
	BOOL didSetAssetToAssetWithFigPlaybackItem;
	OpaqueFigCPEProtectorRef figCPEProtector;
	NSString* videoEnhancementMode;

}
@end
