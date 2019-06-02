/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol VCMovieWriterProtocol
@property (assign) unsigned startRTPTimeStamp; 
@property (assign) unsigned endRTPTimeStamp; 
@property (readonly) unsigned char writerMode; 
@property (nonatomic,retain) NSURL * outputURL; 
@required
-(void)setStillImageTime:(SCD_Struct_AV56)arg1;
-(id)initWithOutputURL:(id)arg1 transactionID:(id)arg2;
-(void)setupWriterWithMode:(unsigned char)arg1;
-(void)setStartRTPTimeStamp:(unsigned)arg1;
-(void)setEndRTPTimestampWithTimestamp:(unsigned)arg1;
-(BOOL)shouldFinishWritingSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2;
-(void)finishWritingWithHandler:(/*^block*/id)arg1;
-(BOOL)shouldAppendSampleBuffer:(opaqueCMSampleBufferRef)arg1 RTPtimeStamp:(unsigned)arg2;
-(void)appendVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 mediaType:(unsigned char)arg2;
-(unsigned)startRTPTimeStamp;
-(unsigned)endRTPTimeStamp;
-(void)setEndRTPTimeStamp:(unsigned)arg1;
-(unsigned char)writerMode;
-(NSURL *)outputURL;
-(void)setOutputURL:(id)arg1;

@end

