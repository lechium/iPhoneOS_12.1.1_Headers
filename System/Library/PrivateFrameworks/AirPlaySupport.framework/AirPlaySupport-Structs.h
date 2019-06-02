/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned maxBPS : 1;
	unsigned maxPhotoBytes : 1;
	unsigned minBPS : 1;
	unsigned minPhotoBytes : 1;
	unsigned reason : 1;
	unsigned totalPhotos : 1;
} SCD_Struct_AP1;

typedef struct {
	unsigned timestamp : 1;
	unsigned announceMs : 1;
	unsigned authMs : 1;
	unsigned awdlCCA : 1;
	unsigned awdlRSSI : 1;
	unsigned bonjourMs : 1;
	unsigned compressionType : 1;
	unsigned connectMs : 1;
	unsigned encryptionType : 1;
	unsigned infraCCA : 1;
	unsigned infraRSSI : 1;
	unsigned infraSNR : 1;
	unsigned recordMs : 1;
	unsigned setupAudioMs : 1;
	unsigned setupScreenMs : 1;
	unsigned status : 1;
	unsigned transportType : 1;
	unsigned didFallbackToInfraToAvoidP2POverDFS : 1;
} SCD_Struct_AP2;

typedef struct {
	unsigned fileBytes : 1;
	unsigned timestamp : 1;
	unsigned audioOnly : 1;
	unsigned authMs : 1;
	unsigned awdlCCA : 1;
	unsigned awdlRSSI : 1;
	unsigned bitrate : 1;
	unsigned bonjourMs : 1;
	unsigned connectMs : 1;
	unsigned duration : 1;
	unsigned infoMs : 1;
	unsigned infraCCA : 1;
	unsigned infraRSSI : 1;
	unsigned infraSNR : 1;
	unsigned postAuthMs : 1;
	unsigned secureConnectionMs : 1;
	unsigned status : 1;
	unsigned transportType : 1;
	unsigned type : 1;
	unsigned didFallbackToInfraToAvoidP2POverDFS : 1;
} SCD_Struct_AP3;

typedef struct {
	unsigned timestamp : 1;
	unsigned audioLate : 1;
	unsigned audioLost : 1;
	unsigned audioUnrecovered : 1;
	unsigned avgAhead : 1;
	unsigned avgRTT : 1;
	unsigned avgReceiveMs : 1;
	unsigned caDrops : 1;
	unsigned caFrames : 1;
	unsigned clearScreens : 1;
	unsigned configChanges : 1;
	unsigned duration : 1;
	unsigned forcedRefreshes : 1;
	unsigned framesReceived : 1;
	unsigned negativeAheadFrames : 1;
	unsigned reason : 1;
	unsigned resumes : 1;
	unsigned suspends : 1;
	unsigned unclearScreens : 1;
} SCD_Struct_AP4;

typedef struct {
	unsigned bandwidthMax : 1;
	unsigned bandwidthMean : 1;
	unsigned bandwidthStdDev : 1;
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned fastFowards : 1;
	unsigned localFairPlayCount : 1;
	unsigned localNonFairPlayCount : 1;
	unsigned pauses : 1;
	unsigned readyToPlayMs : 1;
	unsigned reason : 1;
	unsigned remoteFairPlayCount : 1;
	unsigned remoteNonFairPlayCount : 1;
	unsigned rewinds : 1;
	unsigned stallCount : 1;
} SCD_Struct_AP5;

typedef struct {
	unsigned timestamp : 1;
	unsigned status : 1;
	unsigned transportType : 1;
} SCD_Struct_AP6;

typedef struct {
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned maxBPS : 1;
	unsigned maxPhotoBytes : 1;
	unsigned minBPS : 1;
	unsigned minPhotoBytes : 1;
	unsigned pauses : 1;
	unsigned reason : 1;
	unsigned skipAheads : 1;
	unsigned skipBacks : 1;
	unsigned totalPhotos : 1;
} SCD_Struct_AP7;

typedef struct {
	unsigned timestamp : 1;
	unsigned audioCompressionType : 1;
	unsigned clientBonjourMs : 1;
	unsigned clientConfigMs : 1;
	unsigned clientConnectMs : 1;
	unsigned clientPrepareMs : 1;
	unsigned serverAcceptTime : 1;
	unsigned serverConfigTime : 1;
	unsigned status : 1;
	unsigned transportType : 1;
} SCD_Struct_AP8;

typedef struct {
	unsigned startTime : 1;
	unsigned timestamp : 1;
	unsigned firstDeviceFoundMs : 1;
	unsigned status : 1;
} SCD_Struct_AP9;

typedef struct {
	unsigned bandwidthMax : 1;
	unsigned bandwidthMean : 1;
	unsigned bandwidthStdDev : 1;
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned localFairPlayCount : 1;
	unsigned localNonFairPlayCount : 1;
	unsigned readyToPlayMs : 1;
	unsigned reason : 1;
	unsigned remoteFairPlayCount : 1;
	unsigned remoteNonFairPlayCount : 1;
	unsigned stallCount : 1;
} SCD_Struct_AP10;

typedef struct {
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned futileRetransmits : 1;
	unsigned reason : 1;
	unsigned retransmits : 1;
	unsigned slowKeepAlives : 1;
} SCD_Struct_AP11;

typedef struct {
	unsigned timestamp : 1;
	unsigned bigLosses : 1;
	unsigned compressionPercent : 1;
	unsigned dacpNext : 1;
	unsigned dacpPauses : 1;
	unsigned dacpPrevious : 1;
	unsigned duration : 1;
	unsigned futileRetransmits : 1;
	unsigned glitches : 1;
	unsigned lastPackets : 1;
	unsigned lostPackets : 1;
	unsigned maxBurstLoss : 1;
	unsigned ntpOffsetAvg : 1;
	unsigned ntpOffsetMax : 1;
	unsigned ntpOffsetMin : 1;
	unsigned ntpOutliers : 1;
	unsigned ntpRTTAvg : 1;
	unsigned ntpRTTMax : 1;
	unsigned ntpRTTMin : 1;
	unsigned ntpSteps : 1;
	unsigned reason : 1;
	unsigned retransmitAvgMs : 1;
	unsigned retransmitMaxMs : 1;
	unsigned retransmitMinMs : 1;
	unsigned retransmitNotFounds : 1;
	unsigned retransmitReceives : 1;
	unsigned retransmitRetryMaxMs : 1;
	unsigned retransmitRetryMinMs : 1;
	unsigned retransmitSends : 1;
	unsigned rtpMaxSkew : 1;
	unsigned rtpSkewResets : 1;
	unsigned unrecoveredPackets : 1;
} SCD_Struct_AP12;

typedef struct {
	unsigned timestamp : 1;
	unsigned repeat : 1;
	unsigned slideMs : 1;
	unsigned status : 1;
	unsigned transportType : 1;
} SCD_Struct_AP13;

typedef struct {
	unsigned awdlAirPlayTXTReceivedMs : 1;
	unsigned awdlRAOPTXTReceivedMs : 1;
	unsigned startTime : 1;
	unsigned targetPresenceBeaconReceivedMs : 1;
	unsigned timestamp : 1;
	unsigned wifiAirPlayTXTReceivedMs : 1;
	unsigned wifiRAOPTXTReceivedMs : 1;
	unsigned awdlRSSI : 1;
	unsigned btleRSSI : 1;
	unsigned deviceFeature : 1;
	unsigned status : 1;
	unsigned wifiRSSI : 1;
	unsigned aggregated : 1;
} SCD_Struct_AP14;

typedef struct {
	unsigned timestamp : 1;
	unsigned status : 1;
} SCD_Struct_AP15;

typedef struct {
	unsigned timestamp : 1;
	unsigned audioCompressionType : 1;
	unsigned awdlCCA : 1;
	unsigned awdlRSSI : 1;
	unsigned bonjourMs : 1;
	unsigned configMs : 1;
	unsigned connectMs : 1;
	unsigned infraCCA : 1;
	unsigned infraRSSI : 1;
	unsigned infraSNR : 1;
	unsigned prepareMs : 1;
	unsigned status : 1;
	unsigned transportType : 1;
	unsigned didFallbackToInfraToAvoidP2POverDFS : 1;
} SCD_Struct_AP16;

