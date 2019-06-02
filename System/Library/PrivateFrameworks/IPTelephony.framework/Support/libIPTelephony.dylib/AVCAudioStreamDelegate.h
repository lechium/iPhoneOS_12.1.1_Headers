/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCAudioStreamDelegate <NSObject>
@optional
-(void)streamDidStop:(id)arg1;
-(void)streamDidServerDie:(id)arg1;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
-(void)streamDidRTPTimeOut:(id)arg1;
-(void)streamDidRTCPTimeOut:(id)arg1;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
-(void)streamDidInterruptionBegin:(id)arg1;
-(void)streamDidInterruptionEnd:(id)arg1;
-(void)stream:(id)arg1 didStartSynchronizer:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2;
-(void)stream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)stream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;

@required
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;

@end

