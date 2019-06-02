/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWNodeError, BWNodeInput, BWNodeOutput;

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {

	long long _currentSettingsID;
	float _teleBaseZoomFactor;
	opaqueCMSampleBufferRef _wideBuffer;
	opaqueCMSampleBufferRef _teleBuffer;
	BWNodeError* _wideError;
	BWNodeError* _teleError;
	BWNodeInput* _wideInput;
	BWNodeInput* _teleInput;
	BWNodeOutput* _wideOutput;
	BWNodeOutput* _teleOutput;

}
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(id)initWithTeleBaseZoomFactor:(float)arg1 ;
-(void)_configureCaptureRequestStateWithStillImageSettings:(id)arg1 ;
-(void)_processWideAndTeleInput;
-(void)_emitBuffersAndErrorsToOutputs;
-(void)dealloc;
-(id)nodeType;
@end

