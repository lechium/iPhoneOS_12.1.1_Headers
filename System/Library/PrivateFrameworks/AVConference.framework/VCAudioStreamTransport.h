/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaStreamTransport.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>

@class WRMClient;

@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate> {

	WRMClient* _wrmClient;
	tagWRMMetricsInfo* _wrmInfo;

}
-(void)submitWRMReportWithJitterBufferMetrics:(tagVCJitterBufferWRMReportingMetrics*)arg1 ;
-(void)setWRMCallId:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 enableNetworkMonitor:(BOOL)arg5 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC69*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC68*)arg1 ;
-(void)reportWRMMetrics:(const SCD_Struct_VC86*)arg1 ;
-(void)onStop;
-(void)onStart;
-(void)onRTCPPacket:(tagRTCPPACKET*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(void)startWRM;
-(void)stopWRM;
-(id)initWithDelegate:(id)arg1 handle:(tagHANDLE*)arg2 callId:(unsigned)arg3 localSSRC:(unsigned)arg4 ;
-(void)dealloc;
@end

