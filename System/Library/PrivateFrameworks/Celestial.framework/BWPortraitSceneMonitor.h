/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWPortraitSceneMonitor <NSObject>
@property (assign,nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds; 
@property (nonatomic,readonly) float focusDistanceToMaxAllowedFocusDistanceRatio; 
@required
-(void)setAutoFocusInProgress:(BOOL)arg1 focusLocked:(BOOL)arg2 oneShotFocusScanInProgress:(BOOL)arg3;
-(void)focusScanDidComplete;
-(void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(BOOL)arg7 faces:(id)arg8;
-(BOOL)resolveSDOFStatusWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatistics:(SCD_Struct_BW32*)arg2 sceneFlags:(unsigned long long)arg3 flashWillFire:(BOOL)arg4 effectStatus:(int*)arg5 stagePreviewStatus:(int*)arg6;
-(BOOL)portraitSceneMonitoringRequiresStageThresholds;
-(void)setPortraitSceneMonitoringRequiresStageThresholds:(BOOL)arg1;
-(float)focusDistanceToMaxAllowedFocusDistanceRatio;

@end

