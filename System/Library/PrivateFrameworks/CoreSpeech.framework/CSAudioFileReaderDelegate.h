/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioFileReaderDelegate <NSObject>
@required
-(void)audioFileReaderDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
-(void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;

@end
