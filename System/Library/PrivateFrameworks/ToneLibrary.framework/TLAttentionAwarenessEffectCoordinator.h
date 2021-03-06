/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ToneLibrary/ToneLibrary-Structs.h>
@class NSString, NSObject, NSMutableSet;

@interface TLAttentionAwarenessEffectCoordinator : NSObject {

	NSString* _accessQueueLabel;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _effectAudioTapContexts;
	SCD_Struct_TL0 _effectParameters;

}

@property (assign,nonatomic) SCD_Struct_TL0 effectParameters; 
-(SCD_Struct_TL0)effectParameters;
-(void)setEffectParameters:(SCD_Struct_TL0)arg1 ;
-(void)setEffectParameters:(SCD_Struct_TL0)arg1 effectMixFadeDuration:(double)arg2 ;
-(id)initWithEffectParameters:(SCD_Struct_TL0)arg1 ;
-(id)audioMixForAsset:(id)arg1 ;
-(BOOL)isAttentionAwarenessAudioMix:(id)arg1 ;
-(void)_prepareAudioProcessingWithEffectAudioTapContext:(id)arg1 maximumNumberOfFrames:(unsigned)arg2 processingFormat:(const AudioStreamBasicDescription*)arg3 ;
-(void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)arg1 ;
-(void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)arg1 ;
-(void)_processAudioWithEffectAudioTapContext:(id)arg1 bufferList:(AudioBufferList*)arg2 numberOfFramesRequested:(unsigned)arg3 numberOfFramesToProcess:(unsigned)arg4 ;
-(void)dealloc;
@end

