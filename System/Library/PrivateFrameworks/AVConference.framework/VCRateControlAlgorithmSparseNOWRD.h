/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRateControlAlgorithm.h>

@class VCRateControlMediaController, NSString;

@interface VCRateControlAlgorithmSparseNOWRD : NSObject <VCRateControlAlgorithm> {

	VCRateControlAlgorithmConfig* _config;
	VCRateControlMediaController* _mediaController;
	int _state;
	int _rampUpStatus;
	int _rampDownStatus;
	AB _paused;
	double _pauseStartTime;
	double _rateControlTime;
	unsigned short _previousTimestamp;
	unsigned _timestampWrapAroundCounter;
	unsigned _rateControlCounter;
	unsigned _rateChangeCounter;
	unsigned _lastRateChangeCounter;
	unsigned _remoteBandwidthEstimation;
	unsigned _localBandwidthEstimation;
	SCD_Struct_VC36 _owrdList;
	BOOL _isOWRDListReady;
	BOOL _isOWRDConstant;
	double _owrd;
	double _nowrd;
	double _nowrdShort;
	double _nowrdAcc;
	double _lastOWRDChangeTime;
	double _lastCongestionTime;
	double _lastRampUpTime;
	double _rampUpFrozenTime;
	BOOL _isCongested;
	BOOL _isFirstTimestampArrived;
	BOOL _isNewRateSentOut;
	unsigned _actualSendBitrate;
	unsigned _expectedBitrate;
	BOOL _isSendBitrateLimited;
	BOOL _lossEventBuffer[5];
	int _lossEventBufferIndex;
	double _lastLossEventRampDownTime;
	int _lossEventCount;
	BOOL _isOvershoot;
	BOOL _belowNoRampUpBandwidth;
	double _lastNoOvershootBWEstimationTime;
	double _firstBelowNoRampUpBandwidthTime;
	int _recentTierWindow[256];
	unsigned _recentTierWindowSize;
	unsigned _recentTierWindowIndex;
	unsigned _totalTierNumbersInWindow;
	double _recentAverageTier;
	double _lastTimeDetectNoOscillation;
	BOOL _isTargetBitrateOscillating;
	int _deviationChangeCount;
	unsigned _totalPacketReceived;
	unsigned _totalPacketSent;
	unsigned _mostBurstLoss;
	unsigned _roundTripTimeTick;
	double _roundTripTime;
	double _averageRoundTripTime;
	double _packetLossRate;
	double _previousPacketLossRate;
	double _basebandNotificationArrivalTime;
	unsigned _basebandAverageBitrate;
	unsigned _basebandTotalQueueDepth;
	double _basebandExpectedQueuingDelay;
	double _basebandNormalizedBDCD;
	double _basebandNormalizedQueuingDelay;
	BOOL _isWaitingForBasebandRampDown;
	double _lastBasebandRampDownTime;
	double _lastHighNBDCDTime;
	double _lastEmergencyBasebandRampDownTime;
	int _basebandAdditionalTiersForRampUp;
	int _currentTierIndex;
	int _previousTierIndex;
	unsigned _targetBitrate;
	unsigned _actualBitrate;
	void* _logDump;
	void* _logBasebandDump;
	BOOL _isPeriodicLoggingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VCRateControlMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                                    //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) unsigned rateChangeCounter;                                //@synthesize rateChangeCounter=_rateChangeCounter - In the implementation block
@property (nonatomic,readonly) BOOL isCongested;                                          //@synthesize isCongested=_isCongested - In the implementation block
@property (nonatomic,readonly) unsigned mostBurstLoss;                                    //@synthesize mostBurstLoss=_mostBurstLoss - In the implementation block
@property (nonatomic,readonly) double packetLossRate;                                     //@synthesize packetLossRate=_packetLossRate - In the implementation block
@property (nonatomic,readonly) unsigned totalPacketReceived;                              //@synthesize totalPacketReceived=_totalPacketReceived - In the implementation block
@property (nonatomic,readonly) double roundTripTime;                                      //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (nonatomic,readonly) double owrd;                                               //@synthesize owrd=_owrd - In the implementation block
@property (nonatomic,readonly) BOOL isNewRateSentOut;                                     //@synthesize isNewRateSentOut=_isNewRateSentOut - In the implementation block
@property (assign,nonatomic) unsigned localBandwidthEstimation;                           //@synthesize localBandwidthEstimation=_localBandwidthEstimation - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) unsigned actualBitrate;                                    //@synthesize actualBitrate=_actualBitrate - In the implementation block
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(void)configure:(VCRateControlAlgorithmConfig*)arg1 restartRequired:(BOOL)arg2 ;
-(void)enableBasebandDump:(void*)arg1 ;
-(unsigned)targetBitrate;
-(unsigned)rateChangeCounter;
-(BOOL)doRateControlWithStatistics:(SCD_Struct_AV19)arg1 ;
-(void)doRateControlWithBasebandStatistics:(SCD_Struct_AV19)arg1 ;
-(void)enableLogDump:(void*)arg1 enablePeriodicLogging:(BOOL)arg2 ;
-(unsigned)actualBitrate;
-(BOOL)isNewRateSentOut;
-(void)setLocalBandwidthEstimation:(unsigned)arg1 ;
-(double)roundTripTime;
-(double)packetLossRate;
-(unsigned)mostBurstLoss;
-(double)owrd;
-(BOOL)isCongested;
-(VCRateControlMediaController *)mediaController;
-(BOOL)shouldRampDown;
-(int)rampDownTier;
-(BOOL)shouldRampUp;
-(int)rampUpTier;
-(void)stateExit;
-(void)stateEnter;
-(int)lossEventCount;
-(void)resetLossEventBuffer;
-(void)resetRampingStatus;
-(void)resetOscillationDetection;
-(void)logToDumpFilesWithString:(id)arg1 ;
-(double)getDoubleTimeFromTimestamp:(unsigned)arg1 timestampTick:(unsigned)arg2 wrapAroundCounter:(unsigned)arg3 ;
-(void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2 ;
-(void)checkActualBitrates;
-(void)checkBandwidthOvershoot;
-(void)updateLossEvent:(double)arg1 time:(double)arg2 ;
-(void)checkPaused;
-(void)checkCongestionStatus;
-(void)stateChangeTo:(int)arg1 ;
-(void)checkTargetBitrateOscillation;
-(void)printRateControlInfoToLogDump;
-(BOOL)shouldRampDownDueToBaseband;
-(int)rampDownTierDueToBaseband;
-(BOOL)shouldRampUpDueToBaseband;
-(BOOL)recentlyGoAboveRampUpBandwidth;
-(BOOL)keepOvershootingRampDownBandwidth;
-(void)updateLastEmergencyBasebandRampDownTimeWithTierIndex:(int)arg1 ;
-(BOOL)prepareOWRDList:(double)arg1 time:(double)arg2 ;
-(double)calculateNOWRDWithDuration:(double)arg1 ;
-(BOOL)updateRecentTierWindow;
-(int)countDeviationChangeInTierWindow;
-(unsigned)totalPacketReceived;
-(unsigned)localBandwidthEstimation;
-(id)init;
-(void)dealloc;
-(void)setPaused:(BOOL)arg1 ;
-(id)className;
-(BOOL)isPaused;
@end

