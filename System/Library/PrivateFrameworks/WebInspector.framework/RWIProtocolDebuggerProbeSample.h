/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (assign,nonatomic) int probeId; 
@property (assign,nonatomic) int sampleId; 
@property (assign,nonatomic) int batchId; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * payload; 
-(void)setProbeId:(int)arg1 ;
-(void)setSampleId:(int)arg1 ;
-(void)setBatchId:(int)arg1 ;
-(id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5 ;
-(int)probeId;
-(int)sampleId;
-(int)batchId;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)payload;
-(void)setPayload:(RWIProtocolRuntimeRemoteObject *)arg1 ;
@end

