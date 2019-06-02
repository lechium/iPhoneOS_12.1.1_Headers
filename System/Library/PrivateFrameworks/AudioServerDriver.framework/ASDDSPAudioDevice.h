/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDAudioDevice.h>
#import <libobjc.A.dylib/ASDDeviceConfigurationChangeDelegate.h>
#import <libobjc.A.dylib/ASDPropertyChangedDelegate.h>

@class NSString, ASDAudioDevice, ASDAudioDeviceDSPConfiguration, ASDAudioDeviceDSPDatabase;

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {

	NSString* _resourcePath;
	ASDAudioDevice* _underlyingDevice;
	ASDAudioDeviceDSPConfiguration* _currentDSPConfiguration;
	ASDAudioDeviceDSPDatabase* _dspDatabase;

}

@property (nonatomic,retain) ASDAudioDeviceDSPConfiguration * currentDSPConfiguration;              //@synthesize currentDSPConfiguration=_currentDSPConfiguration - In the implementation block
@property (nonatomic,readonly) ASDAudioDevice * underlyingDevice;                                   //@synthesize underlyingDevice=_underlyingDevice - In the implementation block
@property (nonatomic,readonly) ASDAudioDeviceDSPDatabase * dspDatabase;                             //@synthesize dspDatabase=_dspDatabase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dspItemsInConfiguration:(id)arg1 notInConfiguration:(id)arg2 ;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(unsigned)transportType;
-(id)manufacturerName;
-(id)deviceName;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)driverClassName;
-(double)samplingRate;
-(unsigned)timestampPeriod;
-(ASDAudioDeviceDSPConfiguration *)currentDSPConfiguration;
-(void)setCurrentDSPConfiguration:(ASDAudioDeviceDSPConfiguration *)arg1 ;
-(void)changedProperty:(const AudioObjectPropertyAddress*)arg1 forObject:(id)arg2 ;
-(BOOL)requestConfigurationChangeForDevice:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setSamplingRate:(double)arg1 ;
-(int)startIOForClient:(unsigned)arg1 ;
-(int)stopIOForClient:(unsigned)arg1 ;
-(id)modelUID;
-(id)samplingRates;
-(unsigned)clockDomain;
-(BOOL)canBeDefaultDevice;
-(BOOL)canBeDefaultSystemDevice;
-(unsigned)clockAlgorithm;
-(BOOL)clockIsStable;
-(BOOL)changeSamplingRate:(double)arg1 ;
-(/*^block*/id)getZeroTimestampBlock;
-(/*^block*/id)willDoReadInputBlock;
-(/*^block*/id)willDoWriteMixBlock;
-(void)addInputStream:(id)arg1 ;
-(void)removeInputStream:(id)arg1 ;
-(void)addOutputStream:(id)arg1 ;
-(void)removeOutputStream:(id)arg1 ;
-(BOOL)underlyingDeviceHasAllProperties:(id)arg1 ;
-(id)findDSPConfigurationForCurrentState;
-(BOOL)applyDeviceDSPConfiguration:(id)arg1 ;
-(ASDAudioDeviceDSPDatabase *)dspDatabase;
-(BOOL)applyStreamDSPConfiguration:(id)arg1 toStream:(id)arg2 ;
-(BOOL)updateDeviceDSPConfiguration;
-(id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 deviceDSPDatabase:(id)arg3 plugin:(id)arg4 ;
-(void)setDeviceName:(id)arg1 ;
-(ASDAudioDevice *)underlyingDevice;
-(id)modelName;
-(BOOL)isHidden;
@end

