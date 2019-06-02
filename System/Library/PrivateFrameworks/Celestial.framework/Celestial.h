#import <Celestial/BWAudioFileSinkNode.h>
#import <Celestial/BWFaceDetectionNode.h>
#import <Celestial/BWPreviewTimeMachineSinkNode.h>
#import <Celestial/BWInferenceRequirement.h>
#import <Celestial/BWStillImageCaptureStreamFrameCounts.h>
#import <Celestial/BWStillImageTimeMachineFrameCoordinatorNode.h>
#import <Celestial/BWBracketSettings.h>
#import <Celestial/BWStillImageMetalSDOFRenderer.h>
#import <Celestial/BWSpringSimulation.h>
#import <Celestial/FigCaptureStillImageSettings.h>
#import <Celestial/FigCaptureIrisStillImageSettings.h>
#import <Celestial/FigCaptureIrisPreparedSettings.h>
#import <Celestial/BWSphereModeSelector.h>
#import <Celestial/BWFigCaptureSessionExternal.h>
#import <Celestial/FigUtlFaceDetection.h>
#import <Celestial/FigUtlROIProcessor.h>
#import <Celestial/FigCaptureAPSSphereInteractionCalibrationContext.h>
#import <Celestial/BWParallelSplitterNode.h>
#import <Celestial/BWPortraitHDRStagingNode.h>
#import <Celestial/BWCoreImageFilterRenderer.h>
#import <Celestial/BWVisionInferenceProvider.h>
#import <Celestial/FigCaptureSystemPressureMonitor.h>
#import <Celestial/BWStillImageScalerNode.h>
#import <Celestial/FigCapturePowerMonitor.h>
#import <Celestial/BWInferenceLazyVideoRequirement.h>
#import <Celestial/BWAttachedMediaSplitNode.h>
#import <Celestial/BWNodeInput.h>
#import <Celestial/BWNodeInputMediaConfiguration.h>
#import <Celestial/BWNodeInputMediaProperties.h>
#import <Celestial/AVItem.h>
#import <Celestial/AVQueue.h>
#import <Celestial/AVQueueFeeder.h>
#import <Celestial/AVArrayQueueFeeder.h>
#import <Celestial/BWPearlCalibrationCoordinator.h>
#import <Celestial/AVTimeMarkerObservation.h>
#import <Celestial/AVFromMainThreadPostNotificationNameDict.h>
#import <Celestial/AVFromNotifySafeThreadPostNotificationNameDict.h>
#import <Celestial/AVSafePostDelayedNotificationFromMainThreadTargetDict.h>
#import <Celestial/AVSafePerformOnMainThreadTargetDict.h>
#import <Celestial/AVValue.h>
#import <Celestial/AVObjectRegistry.h>
#import <Celestial/BWFigCaptureDeviceClient.h>
#import <Celestial/BWFigCaptureDeviceVendor.h>
#import <Celestial/AVCallbackHandler.h>
#import <Celestial/AVFileValidator.h>
#import <Celestial/BWSensorConfiguration.h>
#import <Celestial/BWUBNode.h>
#import <Celestial/BWIrisMovieInfo.h>
#import <Celestial/BWMattingInferenceProvider.h>
#import <Celestial/AVFileProcessor.h>
#import <Celestial/BWStillImageTurnstileNode.h>
#import <Celestial/BWInferenceScalingRequirement.h>
#import <Celestial/FigCaptureVideoDataSinkPipelineConfiguration.h>
#import <Celestial/FigCaptureVideoDataSinkPipeline.h>
#import <Celestial/BWVisionLandmarkDetector.h>
#import <Celestial/FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory.h>
#import <Celestial/FigCaptureAutoFocusPositionSensorCalibrationContext.h>
#import <Celestial/CMMTLComputePipelineState.h>
#import <Celestial/CMMTLRenderPipelineState.h>
#import <Celestial/CMMTLCommandQueue.h>
#import <Celestial/CMMTLCommandBuffer.h>
#import <Celestial/CMMTLComputeCommandEncoder.h>
#import <Celestial/CMMTLRenderCommandEncoder.h>
#import <Celestial/BWNodeOutput.h>
#import <Celestial/BWNodeOutputMediaConfiguration.h>
#import <Celestial/BWNodeOutputMediaProperties.h>
#import <Celestial/BWInferenceSingleBufferPoolProvider.h>
#import <Celestial/FigCaptureSphereCalibrationContext.h>
#import <Celestial/BWRenderListProcessor.h>
#import <Celestial/BWMonochromeEffectNode.h>
#import <Celestial/FigCheckpointSupport.h>
#import <Celestial/FigMetalContext.h>
#import <Celestial/BWHDRNode.h>
#import <Celestial/BWFigExternalVideoCaptureDevice.h>
#import <Celestial/BWStreamingFilterNode.h>
#import <Celestial/BWEspressoInferenceContext.h>
#import <Celestial/BWFigCaptureSession.h>
#import <Celestial/AVController.h>
#import <Celestial/AVControllerFig.h>
#import <Celestial/AVControllerRemoteFig.h>
#import <Celestial/AVControllerRemoteFigStream.h>
#import <Celestial/BWEspressoInferenceStorage.h>
#import <Celestial/BWInferenceSchedulerJobList.h>
#import <Celestial/AVSystemController.h>
#import <Celestial/AVPlaybackItem.h>
#import <Celestial/BWAudioSourceNode.h>
#import <Celestial/BWPixelTransferNode.h>
#import <Celestial/BWDepthSynchronizerNode.h>
#import <Celestial/AVPlaybackQueue.h>
#import <Celestial/BWInferenceSchedulerScaler.h>
#import <Celestial/BWDepthConverterNode.h>
#import <Celestial/BWStreamingCVAFilterRenderer.h>
#import <Celestial/BWRingBuffer.h>
#import <Celestial/BWMotionSampleRingBuffer.h>
#import <Celestial/BWDeviceMotionActivityDetector.h>
#import <Celestial/BWRedEyeReducerNode.h>
#import <Celestial/BWMetadataSourceNode.h>
#import <Celestial/BWFigVideoCaptureStream.h>
#import <Celestial/FigCaptureLockScreenPrewarmingMonitor.h>
#import <Celestial/FigCaptureMetadataSourcePipeline.h>
#import <Celestial/FigCaptureCameraSourcePipelineConfiguration.h>
#import <Celestial/FigCaptureCameraSourcePipeline.h>
#import <Celestial/BWLandmarksInferenceConfiguration.h>
#import <Celestial/BWParallelJoinerNode.h>
#import <Celestial/BWSinkNode.h>
#import <Celestial/BWStillImageMetalBlurMapRenderer.h>
#import <Celestial/BWInferenceProviderStorage.h>
#import <Celestial/BWStreamingCVAFilterRendererParameters.h>
#import <Celestial/FigCaptureSessionConfiguration.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>
#import <Celestial/FigVideoCaptureConnectionConfiguration.h>
#import <Celestial/FigAudioCaptureConnectionConfiguration.h>
#import <Celestial/FigMetadataObjectCaptureConnectionConfiguration.h>
#import <Celestial/FigMetadataItemCaptureConnectionConfiguration.h>
#import <Celestial/FigDepthDataCaptureConnectionConfiguration.h>
#import <Celestial/FigVisionDataCaptureConnectionConfiguration.h>
#import <Celestial/FigCaptureSourceConfiguration.h>
#import <Celestial/FigCaptureSinkConfiguration.h>
#import <Celestial/FigCaptureVideoPreviewSinkConfiguration.h>
#import <Celestial/FigCaptureVideoThumbnailSinkConfiguration.h>
#import <Celestial/FigCaptureAudioPreviewSinkConfiguration.h>
#import <Celestial/FigCaptureStillImageSinkConfiguration.h>
#import <Celestial/FigCaptureMovieFileSinkConfiguration.h>
#import <Celestial/FigCaptureAudioFileSinkConfiguration.h>
#import <Celestial/FigCaptureVideoDataSinkConfiguration.h>
#import <Celestial/FigCaptureAudioDataSinkConfiguration.h>
#import <Celestial/FigCaptureMetadataObjectSinkConfiguration.h>
#import <Celestial/FigCaptureMetadataItemGroupSinkConfiguration.h>
#import <Celestial/FigCaptureIrisSinkConfiguration.h>
#import <Celestial/FigCaptureDepthDataSinkConfiguration.h>
#import <Celestial/FigCaptureVisionDataSinkConfiguration.h>
#import <Celestial/BWStillImageCoordinatorNode.h>
#import <Celestial/BWBravoStreamSelector.h>
#import <Celestial/BWStillImageMultiCameraDoserNode.h>
#import <Celestial/BWFileCoordinatorNode.h>
#import <Celestial/FigCaptureThermalMonitor.h>
#import <Celestial/BWFigCaptureDeviceSourceNode.h>
#import <Celestial/BWIrisDiscontinuity.h>
#import <Celestial/BWIrisSequenceAdjuster.h>
#import <Celestial/FigStateMachine.h>
#import <Celestial/BWSISNode.h>
#import <Celestial/BWCoreMotionMetadataSourceNode.h>
#import <Celestial/BWInferenceCloneVideoRequirement.h>
#import <Celestial/FigCaptureExternalEAControlPipe.h>
#import <Celestial/BWCameraParameters.h>
#import <Celestial/BWBravoPortraitSceneMonitor.h>
#import <Celestial/BWAutoFocusPositionSensorMonitor.h>
#import <Celestial/BWInferenceResult.h>
#import <Celestial/FigCaptureAutoFocusCalibrationContext.h>
#import <Celestial/BWStillImageTimeMachine.h>
#import <Celestial/BWIrisStagingNode.h>
#import <Celestial/BWPixelBufferPool.h>
#import <Celestial/BWNoiseReducerNode.h>
#import <Celestial/BWZoomCommandHandler.h>
#import <Celestial/BWZoomDelayBuffer.h>
#import <Celestial/FigCaptureCalibrationMonitor.h>
#import <Celestial/BWCameraInfoMetadataNode.h>
#import <Celestial/FigCameraViewfinder.h>
#import <Celestial/FigCameraViewfinderSession.h>
#import <Celestial/FigCaptureRecordingSettings.h>
#import <Celestial/FigCaptureMovieFileRecordingSettings.h>
#import <Celestial/FigCaptureAudioFileRecordingSettings.h>
#import <Celestial/BWStillImageDisparitySplitterNode.h>
#import <Celestial/BWColorLookupCacheEntry.h>
#import <Celestial/BWPhotoDecompressorNode.h>
#import <Celestial/BWImageQueueSinkNode.h>
#import <Celestial/BWFormatRequirements.h>
#import <Celestial/BWFormat.h>
#import <Celestial/BWAudioConverterNode.h>
#import <Celestial/BWNodeEnumerator.h>
#import <Celestial/BWDepthFirstEnumerator.h>
#import <Celestial/BWReverseDepthFirstEnumerator.h>
#import <Celestial/BWBreadthFirstEnumerator.h>
#import <Celestial/BWReverseBreadthFirstEnumerator.h>
#import <Celestial/BWInferenceSchedulerGraphInputNode.h>
#import <Celestial/BWMotionDataPreserver.h>
#import <Celestial/BWMRCNode.h>
#import <Celestial/BWCoreImageFilterRendererParameters.h>
#import <Celestial/FigCaptureSourceExternalObserver.h>
#import <Celestial/BWFrameRateGovernorNode.h>
#import <Celestial/BWPersonSegmentationConfiguration.h>
#import <Celestial/BWStillImageBufferRouterNode.h>
#import <Celestial/BWMemoryPool.h>
#import <Celestial/BWStillImageConditionalRouterConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterLandmarksConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterNode.h>
#import <Celestial/FigSmartcamClassifierEspresso.h>
#import <Celestial/FigSmartcam.h>
#import <Celestial/FigIrisAutoTrimmerMotionSample.h>
#import <Celestial/FigIrisAutoTrimmer.h>
#import <Celestial/FigM2MController.h>
#import <Celestial/BWMotionAttachmentsNode.h>
#import <Celestial/FigCaptureCalibrationContext.h>
#import <Celestial/BWSceneClassifierSinkNode.h>
#import <Celestial/BWMultiStreamCameraSourceNode.h>
#import <Celestial/BWInferenceVideoFormatRequirements.h>
#import <Celestial/BWInferenceVideoFormat.h>
#import <Celestial/BWAggdDataReporter.h>
#import <Celestial/FigCoreMotionDelegate.h>
#import <Celestial/BWRemoteQueueSinkNode.h>
#import <Celestial/FigCaptureAudioFileSinkPipeline.h>
#import <Celestial/FigCaptureAudioDataSinkPipeline.h>
#import <Celestial/BWDroppedSample.h>
#import <Celestial/BWTrackedFace.h>
#import <Celestial/BWFocusPixelPortraitSceneMonitor.h>
#import <Celestial/FigCameraViewfinderLocal.h>
#import <Celestial/FigCameraViewfinderSessionLocal.h>
#import <Celestial/BWMetadataObjectFormat.h>
#import <Celestial/BWIrisMovieInfoAndCallback.h>
#import <Celestial/BWIrisMovieGenerator.h>
#import <Celestial/FigCaptureMicSourcePipelineConfiguration.h>
#import <Celestial/FigCaptureMicSourcePipeline.h>
#import <Celestial/BWInferenceDataDependency.h>
#import <Celestial/FigCaptureSourceFormat.h>
#import <Celestial/FigCaptureSourceVideoFormat.h>
#import <Celestial/FigCaptureSourceDepthDataFormat.h>
#import <Celestial/FigCaptureSourceCompanionFormat.h>
#import <Celestial/FigFrameScoreInputs.h>
#import <Celestial/FigPAMFrameScore.h>
#import <Celestial/BWNodeConnection.h>
#import <Celestial/BWInferenceSchedulerResourceCoordinator.h>
#import <Celestial/FigBWNodeRenderObserver.h>
#import <Celestial/FigCaptureStillImageUnifiedBracketingSinkPipeline.h>
#import <Celestial/BWMattingInferenceConfiguration.h>
#import <Celestial/FigCaptureImageMotionDetector.h>
#import <Celestial/BWMetalColorCubeRenderer.h>
#import <Celestial/BWStreamingCVAFilterRendererAnimator.h>
#import <Celestial/FigIOSurfaceData.h>
#import <Celestial/BWVisionInferenceContext.h>
#import <Celestial/FigCaptureStillImageSinkPipelineConfiguration.h>
#import <Celestial/BWInferenceNode.h>
#import <Celestial/BWFanOutNode.h>
#import <Celestial/BWVideoOrientationMetadataNode.h>
#import <Celestial/BWStillImagePortraitMetadataNode.h>
#import <Celestial/FigCaptureSphereEndStopCalibrationContext.h>
#import <Celestial/BWSourceNode.h>
#import <Celestial/BWInferenceMediaRequirement.h>
#import <Celestial/BWInferenceSchedulerFramebufferBuilder.h>
#import <Celestial/BWFaceTrackingNode.h>
#import <Celestial/BWDeferredMetadataCache.h>
#import <Celestial/BWDetectedFacesRingBuffer.h>
#import <Celestial/BWInferenceSchedulerGraph.h>
#import <Celestial/BWStillImageCaptureSettings.h>
#import <Celestial/BWStillImageCaptureStreamSettings.h>
#import <Celestial/BWStillImageCaptureMetadata.h>
#import <Celestial/BWSceneClassifierFrameGateNode.h>
#import <Celestial/BWInferenceMetadataRequirement.h>
#import <Celestial/BWFileSinkNode.h>
#import <Celestial/BWPearlPortraitSceneMonitor.h>
#import <Celestial/BWLimitedGMErrorLogger.h>
#import <Celestial/FigSmartcamAsync.h>
#import <Celestial/BWMeteorHeadroomNode.h>
#import <Celestial/FigCameraUsageListener.h>
#import <Celestial/FigCaptureClientSessionMonitor.h>
#import <Celestial/FigCaptureDisplayLayoutMonitor.h>
#import <Celestial/BWInferenceScheduler.h>
#import <Celestial/AVItemAccessLogInternal.h>
#import <Celestial/AVItemAccessLog.h>
#import <Celestial/AVItemAccessLogEventInternal.h>
#import <Celestial/AVItemAccessLogEvent.h>
#import <Celestial/AVItemErrorLogInternal.h>
#import <Celestial/AVItemErrorLog.h>
#import <Celestial/AVItemErrorLogEventInternal.h>
#import <Celestial/AVItemErrorLogEvent.h>
#import <Celestial/FigCapturePixelConverter.h>
#import <Celestial/BWRenderList.h>
#import <Celestial/BWColorLookupCache.h>
#import <Celestial/BWMultiFilterThumbnailNode.h>
#import <Celestial/BWInferenceDepthScalingProvider.h>
#import <Celestial/BWRGBPersonSegmentationInferenceConfiguration.h>
#import <Celestial/BWInferenceVideoScalingProvider.h>
#import <Celestial/FigCaptureSessionObservatory.h>
#import <Celestial/FigCaptureSessionProxy.h>
#import <Celestial/FigCapturePipeline.h>
#import <Celestial/BWStillImageFilterNode.h>
#import <Celestial/BWExternalCameraSourceNode.h>
#import <Celestial/BWRenderListAnimator.h>
#import <Celestial/BWRamp.h>
#import <Celestial/BWRenderListParameters.h>
#import <Celestial/BWNode.h>
#import <Celestial/BWMattingInferenceStorage.h>
#import <Celestial/BWStillImageDualPhotoFacePropagatorNode.h>
#import <Celestial/BWInferenceSchedulerFramebuffer.h>
#import <Celestial/BWVisionInferenceStorage.h>
#import <Celestial/BWVideoFormatRequirements.h>
#import <Celestial/BWVideoFormat.h>
#import <Celestial/BWStillImageSampleBufferSinkNode.h>
#import <Celestial/FigCaptureStillImageSinkPipeline.h>
#import <Celestial/BWPipelineStage.h>
#import <Celestial/BWInferenceDependencyProvider.h>
#import <Celestial/BWStillImageCaptureStreamFrameCounters.h>
#import <Celestial/BWStillImageFrameCoordinatorNode.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <Celestial/BWInferenceSynchronizerNode.h>
#import <Celestial/FigSmartcamDiagnostics.h>
#import <Celestial/BWInferenceSchedulerInference.h>
#import <Celestial/BWGNRNode.h>
#import <Celestial/BWStereoFusionNode.h>
#import <Celestial/BWStillImageBravoDisparityNode.h>
#import <Celestial/BWPhotoEncoderNode.h>
#import <Celestial/FigNSXPCConnection.h>
#import <Celestial/FigCameraViewfinderRemote.h>
#import <Celestial/FigCameraViewfinderSessionRemote.h>
#import <Celestial/FigWeakReference.h>
#import <Celestial/FigDelegateStorage.h>
#import <Celestial/BWGraph.h>
#import <Celestial/BWMockVideoSDOFNode.h>
#import <Celestial/BWStillImageFocusPixelDisparityNode.h>
#import <Celestial/FigCameraViewfinderStream.h>
#import <Celestial/BWNodeMessage.h>
#import <Celestial/BWNodeSampleBufferMessage.h>
#import <Celestial/BWNodeConfigurationLiveMessage.h>
#import <Celestial/BWNodeEndOfDataMessage.h>
#import <Celestial/BWNodeErrorMessage.h>
#import <Celestial/BWNodeDroppedSampleMessage.h>
#import <Celestial/BWNodeIrisReferenceMovieRequestMessage.h>
#import <Celestial/BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage.h>
#import <Celestial/BWNodeStillImagePrewarmMessage.h>
#import <Celestial/BWEspressoInferenceProvider.h>
#import <Celestial/BWQuickTimeMovieFileSinkNode.h>
#import <Celestial/FigCameraViewfinderServer.h>
#import <Celestial/BWInferenceConfiguration.h>
#import <Celestial/BWMetalColorCubeRendererParameters.h>
#import <Celestial/BWUBCaptureParameters.h>
#import <Celestial/BWFigVideoCaptureDevice.h>
#import <Celestial/BWSynchronizerNode.h>
#import <Celestial/BWMetadataFormat.h>
#import <Celestial/FigCaptureVideoThumbnailSinkPipeline.h>
#import <Celestial/BWInferenceEngine.h>
#import <Celestial/BWVisionInferenceAdapter.h>
#import <Celestial/BWVideoSDOFSplitNode.h>
#import <Celestial/BWInferenceSchedulerConnection.h>
#import <Celestial/BWInferenceVideoRequirement.h>
#import <Celestial/BWEspressoInferenceAdapter.h>
#import <Celestial/BWVideoCompressorNode.h>
#import <Celestial/BWCaptureDevice.h>
#import <Celestial/BWNodeError.h>
#import <Celestial/BWVISNode.h>
#import <Celestial/BWFunnelNode.h>
#import <Celestial/BWInferenceSimpleStorage.h>
