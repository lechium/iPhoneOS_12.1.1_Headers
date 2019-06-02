/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSynchronizerNode : BWNode {

	OpaqueCMClockRef _sourceClock;
	OpaqueCMClockRef _masterClock;
	SCD_Struct_BW10 _ptsSyncHistory[16];
	int _oldestPTSSyncHistoryElement;
	int _newestPTSSyncHistoryElement;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)setSourceClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(void)_updatePTSSyncHistoryWithSourceTime:(SCD_Struct_BW2)arg1 syncedTime:(SCD_Struct_BW2)arg2 ;
-(void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3 ;
-(SCD_Struct_BW2)_getSyncedTimeForSourceTime:(SCD_Struct_BW2)arg1 ;
-(OpaqueCMClockRef)sourceClock;
-(void)dealloc;
-(id)nodeType;
@end
