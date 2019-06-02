/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemInternal, NSDate, NSArray, NSString, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {

	AVPlayerItemInternal* _playerItem;

}

@property (getter=isAuthorizationRequiredForPlayback,nonatomic,readonly) BOOL authorizationRequiredForPlayback; 
@property (getter=isApplicationAuthorizedForPlayback,nonatomic,readonly) BOOL applicationAuthorizedForPlayback; 
@property (getter=isContentAuthorizedForPlayback,nonatomic,readonly) BOOL contentAuthorizedForPlayback; 
@property (assign,setter=_setExternalProtectionRequiredForPlayback:,getter=_isExternalProtectionRequiredForPlayback,nonatomic) BOOL _externalProtectionRequiredForPlayback; 
@property (getter=_isRental,nonatomic,readonly) BOOL _rental; 
@property (nonatomic,readonly) NSDate * _rentalStartDate; 
@property (nonatomic,readonly) NSDate * _rentalExpirationDate; 
@property (getter=_isRentalPlaybackStarted,nonatomic,readonly) BOOL _rentalPlaybackStarted; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackStartedDate; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackExpirationDate; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * mediaDataCollectors; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,retain) id<NSObject><NSCopying> AVKitData; 
@property (assign,nonatomic) BOOL playHapticTracks; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(long long)propertyStorageCachePolicy;
+(BOOL)_hasOverrideForSelector:(SEL)arg1 ;
+(int)_createFigPlaybackItemForFigPlayer:(OpaqueFigPlayerRef)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned)arg4 playbackItem:(OpaqueFigPlaybackItem*)arg5 ;
+(BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(OpaqueCMTimebaseRef)_copyTimebaseFromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
+(id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+(BOOL)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+(BOOL)automaticallyNotifiesObserversOfVariantIndex;
+(BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+(BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+(BOOL)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveResume;
+(BOOL)automaticallyNotifiesObserversOfStatus;
+(BOOL)automaticallyNotifiesObserversOfAsset;
+(BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfPresentationSize;
+(BOOL)automaticallyNotifiesObserversOfTracks;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2 ;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1 ;
+(id)playerItemWithAsset:(id)arg1 ;
+(id)playerItemWithURL:(id)arg1 ;
+(void)initialize;
-(BOOL)seekToDate:(id)arg1 ;
-(BOOL)_hasEnqueuedVideoFrame;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(id)_nameForLogging;
-(id)_weakReference;
-(id)_tracks;
-(void)_attachToPlayer:(id)arg1 ;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(void)_playerChangeStatusToFailedWithError:(id)arg1 ;
-(id)_preferredPixelBufferAttributes;
-(BOOL)_suppressesVideoLayers;
-(BOOL)_isReadyForInspectionOfPresentationSize;
-(BOOL)_getCachedPresentationSize:(CGSize*)arg1 ;
-(BOOL)_getCachedNonForcedSubtitleEnabled:(BOOL*)arg1 ;
-(OpaqueCMTimebaseRef)_copyProxyTimebase;
-(void)_playerWillAccessCurrentItemKeypaths;
-(void)_playerDidAccessCurrentItemKeypaths;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2 ;
-(void)_insertAfterItem:(id)arg1 ;
-(void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
-(id)_nextItem;
-(id)_previousItem;
-(void)_removeFromItems;
-(BOOL)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fpNotificationNames;
-(id)_propertyStorage;
-(BOOL)_hasEnabledVideo;
-(OpaqueFigPlaybackItemRef)_copyFigPlaybackItem;
-(void)_setTimedMetadata:(id)arg1 ;
-(id)automaticallyLoadedAssetKeys;
-(BOOL)seekingWaitsForVideoCompositionRendering;
-(id)textStyleRules;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(SCD_Struct_AV5)maximumForwardBufferDuration;
-(SCD_Struct_AV5)maximumTrailingBufferDuration;
-(double)preferredPeakBitRate;
-(unsigned)RTCReportingFlags;
-(id)gaplessInfo;
-(float)volumeAdjustment;
-(id)mediaKind;
-(BOOL)reversesMoreVideoFramesInMemory;
-(BOOL)reversesMoreVideoFramesInMemoryWasSet;
-(BOOL)aggressivelyCachesVideoFrames;
-(BOOL)aggressivelyCachesVideoFramesWasSet;
-(BOOL)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
-(BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
-(SCD_Struct_AV5)minimumIntervalForIFrameOnlyPlayback;
-(BOOL)minimumIntervalForIFrameOnlyPlaybackWasSet;
-(float)speedThresholdForIFrameOnlyPlayback;
-(BOOL)speedThresholdForIFrameOnlyPlaybackWasSet;
-(id)initialDate;
-(id)initialEstimatedDate;
-(BOOL)requiresAccessLog;
-(BOOL)suppressesAudioOnlyVariants;
-(id)imageQueueInterpolationCurve;
-(BOOL)imageQueueInterpolationCurveWasSet;
-(BOOL)blendsVideoFrames;
-(BOOL)blendsVideoFramesWasSet;
-(id)videoApertureMode;
-(BOOL)usesMinimalLatencyForVideoCompositionRendering;
-(BOOL)savesDownloadedDataToDiskWhenDone;
-(BOOL)networkUsuallyExceedsMaxBitRate;
-(BOOL)allowProgressiveSwitchUp;
-(BOOL)allowProgressiveStartup;
-(BOOL)allowProgressiveResume;
-(CGSize)IFramePrefetchTargetDimensions;
-(id<NSObject><NSCopying>)AVKitData;
-(BOOL)playHapticTracks;
-(CGSize)preferredMaximumResolution;
-(BOOL)canPlayReverse;
-(BOOL)canPlaySlowReverse;
-(BOOL)canPlaySlowForward;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(double)seekableTimeRangesLastModifiedTime;
-(SCD_Struct_AV6)loopTimeRange;
-(BOOL)decodesAllFramesDuringOrdinaryPlayback;
-(id)videoEnhancementMode;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(void)_setURL:(id)arg1 ;
-(void)_removeFAListeners;
-(void)_removeLoopingTBListeners;
-(void)setTextStyleRules:(id)arg1 ;
-(void)setImageQueueInterpolationCurve:(id)arg1 ;
-(void)setBlendsVideoFrames:(BOOL)arg1 ;
-(void)setReversesMoreVideoFramesInMemory:(BOOL)arg1 ;
-(void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1 ;
-(void)setAVKitData:(id<NSObject><NSCopying>)arg1 ;
-(BOOL)continuesPlayingDuringPrerollForRateChange;
-(void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1 ;
-(BOOL)continuesPlayingDuringPrerollForSeek;
-(void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1 ;
-(void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1 ;
-(void)setMinimumIntervalForIFrameOnlyPlayback:(SCD_Struct_AV5)arg1 ;
-(void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1 ;
-(BOOL)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1 ;
-(id)currentMediaSelection;
-(void)setVideoEnhancementMode:(id)arg1 ;
-(id)_URL;
-(BOOL)_isExternalProtectionRequiredForPlayback;
-(void)_willAccessKVOForKey:(id)arg1 ;
-(void)_didAccessKVOForKey:(id)arg1 ;
-(void)setSavesDownloadedDataToDiskWhenDone:(BOOL)arg1 ;
-(void)_updateLoopTimeRangeOnFigPlaybackItem;
-(void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
-(void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
-(void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
-(void)_updateBlendsVideoFramesOnFigPlaybackItem;
-(void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
-(void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
-(void)_quietlySetDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1 ;
-(void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
-(void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
-(void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
-(void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
-(void)_setVideoCompositionFrameDuration:(SCD_Struct_AV5)arg1 ;
-(void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)_setVideoCompositionRenderSize:(CGSize)arg1 ;
-(void)_setVideoCompositionRenderScale:(float)arg1 ;
-(void)_configureVideoCompositionColorProperties;
-(void)_setVideoCompositionInstructions:(id)arg1 ;
-(void)_setVideoCompositor:(void*)arg1 ;
-(void)_applyCurrentAudioMix;
-(void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_quietlySetEQPreset:(int)arg1 ;
-(void)_updatePlaybackPropertiesOnFigPlaybackItem;
-(void)_quietlySetVariantIndex:(long long)arg1 ;
-(void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
-(void)_updateVolumeAdjustmentOnFigPlaybackItem;
-(void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
-(void)_applyMediaSelectionOptions;
-(void)_updateTextStyleRulesOnFigPlaybackItem;
-(void)_updateMediaKindOnFigPlaybackItem;
-(void)_updateRestrictionsOnFigPlaybackItem;
-(void)_quietlySetServiceIdentifier:(id)arg1 ;
-(void)_setSyncLayersOnFigPlaybackItem:(id)arg1 ;
-(void)_updateTimebase;
-(void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
-(void)_updatePreferredPeakBitRateOnFigPlaybackItem;
-(void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
-(void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
-(void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
-(void)_updateVideoApertureModeOnFigPlaybackItem;
-(void)_updateRTCReportingFlagsOnFigPlaybackItem;
-(id)_metadataCollectors;
-(void)_updateVideoEnhancementModeOnFigPlaybackItem;
-(void)_configurePlaybackItem;
-(void)_updateLimitReadAheadOnFigPlaybackItem;
-(long long)playbackLikelyToKeepUpTrigger;
-(void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
-(BOOL)willNeverSeekBackwardsHint;
-(void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
-(BOOL)alwaysMonitorsPlayability;
-(void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
-(void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
-(void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
-(id)_cachedTracks;
-(void)_evaluateVideoOutputs;
-(void)_evaluateLegibleOutputs;
-(void)_evaluateMetadataOutputs;
-(void)_respondToBecomingReadyForBasicInspection;
-(void)_attachToFigPlayer;
-(void)_addFAListeners;
-(BOOL)_isReadyForInspectionOfDuration;
-(void)_markAsReadyForInspectionOfDuration;
-(void)_markAsReadyForInspectionOfTracks;
-(CGSize)_presentationSize;
-(id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1 ;
-(BOOL)_isReadyForInspectionOfTracks;
-(id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(id)_tracksFromAssetTrackIDs;
-(OpaqueCMTimebaseRef)_copyLoopingTimebase;
-(void)_respondToBecomingReadyForBasicInspectionWithDuration:(SCD_Struct_AV5)arg1 ;
-(void)_markAsReadyForInspectionOfMediaSelectionOptions;
-(void)_informObserversAboutAvailabilityOfDuration:(SCD_Struct_AV5)arg1 ;
-(void)_markAsReadyForBasicInspection;
-(void)_markAsReadyForInspectionOfPresentationSize;
-(void)_removeMediaOptionsSelectedByClient;
-(void)_kickAssetObserversIfAppropriate;
-(void)_informObserversAboutAvailabilityOfTracks;
-(void)_informObserversAboutAvailabilityOfPresentationSize;
-(BOOL)_isReadyForBasicInspection;
-(void)_invokeReadyForEnqueueingHandlers;
-(BOOL)_canStepForward;
-(int)_CreateSeekID;
-(int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(/*^block*/id)arg1 ;
-(void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2 ;
-(void)_addLoopingTBListeners;
-(void)setMaximumForwardBufferDuration:(SCD_Struct_AV5)arg1 ;
-(void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2 ;
-(id)_copyStateDispatchQueue;
-(id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1 ;
-(id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1 ;
-(id)_playbackProperties;
-(id)_mediaOptionsSelectedByClient;
-(void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2 ;
-(id)_mediaOptionsSelectedByClientForKey:(id)arg1 ;
-(void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2 ;
-(void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 inStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_selectMediaOption:(id)arg1 inNonStreamingGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(void)_clearCachedMediaSelectionGroup:(id)arg1 ;
-(BOOL)_isReadyForInspectionOfMediaSelectionOptions;
-(id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(BOOL)_hasSelectionInCachedMediaSelectionGroup:(id)arg1 ;
-(BOOL)_suppressionForOutputs:(id)arg1 ;
-(void)_setSuppressesVideoLayers:(BOOL)arg1 ;
-(void)setPreferredPeakBitRate:(double)arg1 ;
-(void)setPreferredMaximumResolution:(CGSize)arg1 ;
-(id)_videoOutputs;
-(id)_legibleOutputsForKeys;
-(void)_updateVideoSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(void)_updateLegibleSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(BOOL)_canPlayFastForward;
-(BOOL)_canPlayReverse;
-(BOOL)_canPlayFastReverse;
-(BOOL)_canStepBackward;
-(id)valueForKeyForKVO:(id)arg1 ;
-(id)_playerConnection;
-(void)_markAsNeedingNewAssetWithFigPlaybackItem;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
-(id)_trackWithTrackID:(int)arg1 ;
-(id)_enabledTrackFormatDescriptions;
-(BOOL)_isAFileBasedItemThatsReadyToPlay;
-(void)setInitialDate:(id)arg1 ;
-(id)currentEstimatedDate;
-(void)setInitialEstimatedDate:(id)arg1 ;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(void)setRTCReportingFlags:(unsigned)arg1 ;
-(BOOL)allowsExtendedReadAhead;
-(void)setAllowsExtendedReadAhead:(BOOL)arg1 ;
-(double)preferredForwardBufferDuration;
-(void)setPreferredForwardBufferDuration:(double)arg1 ;
-(void)setMaximumTrailingBufferDuration:(SCD_Struct_AV5)arg1 ;
-(void)setAlwaysMonitorsPlayability:(BOOL)arg1 ;
-(void)setWillNeverSeekBackwardsHint:(BOOL)arg1 ;
-(void)_setVideoCompositionColorPrimaries:(id)arg1 ;
-(void)_setVideoCompositionColorYCbCrMatrix:(id)arg1 ;
-(void)_setVideoCompositionColorTransferFunction:(id)arg1 ;
-(void)setUsesMinimalLatencyForVideoCompositionRendering:(BOOL)arg1 ;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(id)playabilityMetrics;
-(void)setLoopTimeRange:(SCD_Struct_AV6)arg1 ;
-(id)_loadedTimeRanges;
-(long long)variantIndex;
-(double)liveUpdateInterval;
-(void)setVariantIndex:(long long)arg1 ;
-(BOOL)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1 ;
-(BOOL)_isNonForcedSubtitleDisplayEnabled;
-(OpaqueFigCPEProtectorRef)_figCPEProtector;
-(void)_removeSyncLayer:(id)arg1 ;
-(void)_addSyncLayer:(id)arg1 ;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)arg1 ;
-(BOOL)_hasEnabledAudio;
-(void)setNetworkUsuallyExceedsMaxBitRate:(BOOL)arg1 ;
-(void)setAllowProgressiveSwitchUp:(BOOL)arg1 ;
-(void)setAllowProgressiveStartup:(BOOL)arg1 ;
-(void)setAllowProgressiveResume:(BOOL)arg1 ;
-(void)setIFramePrefetchTargetDimensions:(CGSize)arg1 ;
-(float)maximumBitRate;
-(void)setMaximumBitRate:(float)arg1 ;
-(CGSize)preferredPeakPresentationSize;
-(void)setPreferredPeakPresentationSize:(CGSize)arg1 ;
-(void)_renderingSuppressionDidChangeForOutput:(id)arg1 ;
-(void)setRequiresAccessLog:(BOOL)arg1 ;
-(void)setSuppressesAudioOnlyVariants:(BOOL)arg1 ;
-(void)setVideoApertureMode:(id)arg1 ;
-(void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 ;
-(BOOL)isAuthorizationRequiredForPlayback;
-(BOOL)isApplicationAuthorizedForPlayback;
-(id)_isExternalProtectionRequiredForPlaybackInternal;
-(void)_setExternalProtectionRequiredForPlayback:(BOOL)arg1 ;
-(BOOL)_isRental;
-(NSDate *)_rentalStartDate;
-(NSDate *)_rentalExpirationDate;
-(BOOL)_isRentalPlaybackStarted;
-(NSDate *)_rentalPlaybackStartedDate;
-(NSDate *)_rentalPlaybackExpirationDate;
-(long long)_fileSize;
-(long long)_availableFileSize;
-(id)_metadataOutputsForKeys;
-(void)_addVideoOutput:(id)arg1 ;
-(void)_addLegibleOutput:(id)arg1 ;
-(void)_addMetadataOutput:(id)arg1 ;
-(void)_removeVideoOutput:(id)arg1 ;
-(void)_removeLegibleOutput:(id)arg1 ;
-(void)_removeMetadataOutput:(id)arg1 ;
-(void)_addMetadataCollector:(id)arg1 ;
-(void)_removeMetadataCollector:(id)arg1 ;
-(NSArray *)mediaDataCollectors;
-(void)addMediaDataCollector:(id)arg1 ;
-(void)removeMediaDataCollector:(id)arg1 ;
-(void)_updateTaggedMetadataArray:(id)arg1 ;
-(id)_legibleOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(SCD_Struct_AV5)arg4 withLegibleOutputsDictionaryKey:(id)arg5 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2 ;
-(id)_metadataOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2 ;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(unsigned long long)restrictions;
-(id)errorLog;
-(id)timedMetadata;
-(OpaqueCMTimebaseRef)timebase;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(BOOL)limitReadAhead;
-(void)setLimitReadAhead:(BOOL)arg1 ;
-(id)_seekableTimeRanges;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)_setAudibleDRMInfo:(id)arg1 ;
-(void)_setRampInOutInfo:(id)arg1 ;
-(float)soundCheckVolumeNormalization;
-(BOOL)hasVideo;
-(void)setMediaKind:(id)arg1 ;
-(void)setGaplessInfo:(id)arg1 ;
-(void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1 ;
-(id)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(void)setVolumeAdjustment:(float)arg1 ;
-(void)setAggressivelyCachesVideoFrames:(BOOL)arg1 ;
-(id)videoComposition;
-(id)tracks;
-(void)setVideoComposition:(id)arg1 ;
-(void)setAudioMix:(id)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_AV5)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)seekToTime:(SCD_Struct_AV5)arg1 toleranceBefore:(SCD_Struct_AV5)arg2 toleranceAfter:(SCD_Struct_AV5)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)isPlaybackBufferEmpty;
-(BOOL)isPlaybackBufferFull;
-(BOOL)isPlaybackLikelyToKeepUp;
-(void)cancelPendingSeeks;
-(BOOL)isContentAuthorizedForPlayback;
-(id)accessLog;
-(void)addOutput:(id)arg1 ;
-(void)setPlayHapticTracks:(BOOL)arg1 ;
-(id)currentDate;
-(NSString *)serviceIdentifier;
-(SCD_Struct_AV5)reversePlaybackEndTime;
-(void)seekToTime:(SCD_Struct_AV5)arg1 toleranceBefore:(SCD_Struct_AV5)arg2 toleranceAfter:(SCD_Struct_AV5)arg3 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV5)arg1 ;
-(SCD_Struct_AV5)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV5)arg1 ;
-(BOOL)canStepForward;
-(void)stepByCount:(long long)arg1 ;
-(BOOL)canStepBackward;
-(void)seekToTime:(SCD_Struct_AV5)arg1 ;
-(BOOL)canPlayFastReverse;
-(BOOL)canPlayFastForward;
-(id)customVideoCompositor;
-(id)audioMix;
-(void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1 ;
-(NSArray *)outputs;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setDelegate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(SCD_Struct_AV5)_duration;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(SCD_Struct_AV5)duration;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(SCD_Struct_AV5)currentTime;
-(id)_player;
-(long long)status;
-(CGSize)presentationSize;
-(id)asset;
-(NSError *)error;
@end

