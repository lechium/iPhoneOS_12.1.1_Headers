/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SegmentStatsDelegate;
@class NSString;

@interface MultiwaySegment : NSObject {

	int _duration;
	int _adjustedDuration;
	int _interval;
	int _frequency;
	double _averageTargetBitrateSum;
	unsigned _averageTargetBitrateReportCounter;
	double _roundTripTimeSum;
	unsigned _roundTripTimeReportCounter;
	unsigned _totalPacketsReceived;
	unsigned _totalPacketsLost;
	unsigned _totalPacketsSent;
	unsigned long long _totalBytesSent;
	unsigned long long _totalBytesReceived;
	NSString* _segmentName;
	NSString* _previousSegmentName;
	id<SegmentStatsDelegate> _delegate;

}

@property (readonly) NSString * segmentName;                           //@synthesize segmentName=_segmentName - In the implementation block
@property (readonly) NSString * previousSegmentName;                   //@synthesize previousSegmentName=_previousSegmentName - In the implementation block
@property (assign) int duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign) int adjustedDuration;                               //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
@property (readonly) double averageTargetBitrate; 
@property (assign) unsigned totalPacketsReceived;                      //@synthesize totalPacketsReceived=_totalPacketsReceived - In the implementation block
@property (assign) unsigned totalPacketsLost;                          //@synthesize totalPacketsLost=_totalPacketsLost - In the implementation block
@property (assign) unsigned totalPacketsSent;                          //@synthesize totalPacketsSent=_totalPacketsSent - In the implementation block
@property (assign) unsigned long long totalBytesSent;                  //@synthesize totalBytesSent=_totalBytesSent - In the implementation block
@property (assign) unsigned long long totalBytesReceived;              //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
-(NSString *)segmentName;
-(unsigned long long)totalBytesReceived;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(unsigned)RTPeriod;
-(int)adjustedDuration;
-(double)averageTargetBitrate;
-(id)segmentReport;
-(void)setAdjustedDuration:(int)arg1 ;
-(NSString *)previousSegmentName;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(void)processTargetBitrate:(unsigned)arg1 ;
-(void)processRoundTripTime:(unsigned)arg1 ;
-(double)averageRoundTripTime;
-(unsigned)totalPacketsReceived;
-(void)setTotalPacketsReceived:(unsigned)arg1 ;
-(unsigned)totalPacketsLost;
-(void)setTotalPacketsLost:(unsigned)arg1 ;
-(unsigned)totalPacketsSent;
-(void)setTotalPacketsSent:(unsigned)arg1 ;
-(double)packetLossRate;
-(void)setTotalBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)totalBytesSent;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setDuration:(int)arg1 ;
-(int)duration;
@end
