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

@protocol OS_dispatch_queue;
@class NSArray, NSObject, ASDAudioDevice, NSString;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {

	double _samplingRate;
	NSArray* _samplingRates;
	NSObject*<OS_dispatch_queue> _sampleRateQueue;
	SCD_Struct_AS13 _lastTimestamp;
	ASDAudioDevice* _underlyingDevice;

}

@property (nonatomic,readonly) ASDAudioDevice * underlyingDevice;              //@synthesize underlyingDevice=_underlyingDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(unsigned)transportType;
-(id)manufacturerName;
-(id)deviceName;
-(double)samplingRate;
-(unsigned)timestampPeriod;
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
-(int)performStopIO;
-(/*^block*/id)getZeroTimestampBlock;
-(/*^block*/id)willDoReadInputBlock;
-(/*^block*/id)willDoWriteMixBlock;
-(void)setSamplingRates:(id)arg1 ;
-(id)initWithDeviceUID:(id)arg1 underlyingDevice:(id)arg2 plugin:(id)arg3 ;
-(void)setDeviceName:(id)arg1 ;
-(ASDAudioDevice *)underlyingDevice;
-(id)modelName;
-(BOOL)isHidden;
@end
