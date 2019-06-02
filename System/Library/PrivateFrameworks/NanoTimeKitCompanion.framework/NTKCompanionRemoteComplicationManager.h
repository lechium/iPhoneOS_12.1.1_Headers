/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKComplicationCollectionObserver.h>
#import <libobjc.A.dylib/NTKRemoteComplicationProvider.h>

@protocol OS_dispatch_queue;
@class NTKComplicationCollection, NSDictionary, NSMutableDictionary, NRDevice, NSObject, NSString;

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider> {

	NTKComplicationCollection* _remoteComplications;
	NSDictionary* _installedComplications;
	NSMutableDictionary* _syncedComplications;
	NRDevice* _device;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NTKComplicationCollection * remoteComplications;              //@synthesize remoteComplications=_remoteComplications - In the implementation block
@property (nonatomic,retain) NSDictionary * installedComplications;                        //@synthesize installedComplications=_installedComplications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncedComplications;                    //@synthesize syncedComplications=_syncedComplications - In the implementation block
@property (nonatomic,retain) NRDevice * device;                                            //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NRDevice *)device;
-(void)setDevice:(NRDevice *)arg1 ;
-(void)_activeDeviceChanged;
-(void)_appStartedInstall;
-(void)setRemoteComplications:(NTKComplicationCollection *)arg1 ;
-(void)_fetchInstalledApps;
-(void)setInstalledComplications:(NSDictionary *)arg1 ;
-(void)_reloadApps;
-(void)setSyncedComplications:(NSMutableDictionary *)arg1 ;
-(id)_safeComplications;
-(id)_safeInstalledComplications;
-(void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2 ;
-(void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2 ;
-(void)complicationCollectionDidLoad:(id)arg1 ;
-(void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(id)localizedAppNameForClientIdentifier:(id)arg1 ;
-(NTKComplicationCollection *)remoteComplications;
-(NSDictionary *)installedComplications;
-(NSMutableDictionary *)syncedComplications;
-(id)init;
-(void)dealloc;
-(void)_load;
@end

