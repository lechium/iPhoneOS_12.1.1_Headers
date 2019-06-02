/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, BWNodeOutput, BWLimitedGMErrorLogger;

@interface BWMotionAttachmentsNode : BWNode {

	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _optionsDict;
	BWNodeOutput* _sourceVideoWithMotionAttachmentsOutput;
	BWNodeOutput* _offlineVISMotionDataOutput;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (nonatomic,readonly) BWNodeOutput * sourceVideoWithMotionAttachmentsOutput;              //@synthesize sourceVideoWithMotionAttachmentsOutput=_sourceVideoWithMotionAttachmentsOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataOutput;                          //@synthesize offlineVISMotionDataOutput=_offlineVISMotionDataOutput - In the implementation block
+(void)initialize;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraModuleInfoByPortType:(id)arg2 activePortTypes:(id)arg3 requiredFormat:(id)arg4 motionAttachmentsMode:(int)arg5 motionAttachmentsSource:(int)arg6 motionCallbackThreadPriority:(unsigned)arg7 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)arg8 provideOfflineVISMotionDataOutput:(BOOL)arg9 ;
-(BWNodeOutput *)sourceVideoWithMotionAttachmentsOutput;
-(BWNodeOutput *)offlineVISMotionDataOutput;
-(void)dealloc;
-(id)nodeType;
@end

