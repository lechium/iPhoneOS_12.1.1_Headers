/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface ASDAudioDeviceDSPDatabase : NSObject {

	NSString* _deviceUID;
	NSSet* _dspConfigurations;
	NSSet* _referencedUnderlyingDeviceProperties;
	NSSet* _referencedDSPDeviceProperties;

}

@property (nonatomic,readonly) NSString * deviceUID;                                      //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,readonly) NSSet * dspConfigurations;                                 //@synthesize dspConfigurations=_dspConfigurations - In the implementation block
@property (nonatomic,readonly) NSSet * referencedUnderlyingDeviceProperties;              //@synthesize referencedUnderlyingDeviceProperties=_referencedUnderlyingDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSSet * referencedDSPDeviceProperties;                     //@synthesize referencedDSPDeviceProperties=_referencedDSPDeviceProperties - In the implementation block
-(NSString *)deviceUID;
-(NSSet *)referencedUnderlyingDeviceProperties;
-(NSSet *)dspConfigurations;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 deviceUID:(id)arg3 ;
-(id)dspConfigurationForDevice:(id)arg1 ;
-(NSSet *)referencedDSPDeviceProperties;
@end

