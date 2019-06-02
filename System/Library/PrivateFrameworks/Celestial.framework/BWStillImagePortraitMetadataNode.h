/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, FigSDOFRenderingTuningParameters;

@interface BWStillImagePortraitMetadataNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	FigSDOFRenderingTuningParameters* _sdofTuningParams;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithSensorIDDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(int)_loadAndConfigureSDOFRenderering;
-(void)dealloc;
@end

