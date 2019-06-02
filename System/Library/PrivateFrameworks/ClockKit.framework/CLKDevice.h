/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKit/ClockKit-Structs.h>
@class NRDevice, NSUUID;

@interface CLKDevice : NSObject {

	BOOL _isLuxo;
	BOOL _isExplorer;
	BOOL _supportsNewInGallery;
	BOOL _isBridgeActive;
	unsigned long long _sizeClass;
	double _screenScale;
	double _screenCornerRadius;
	unsigned long long _collectionType;
	unsigned long long _materialType;
	NRDevice* _nrDevice;
	CGRect _screenBounds;

}

@property (nonatomic,retain) NRDevice * nrDevice;                            //@synthesize nrDevice=_nrDevice - In the implementation block
@property (nonatomic,readonly) NRDevice * _rawNRDevice; 
@property (assign,nonatomic) BOOL isBridgeActive;                            //@synthesize isBridgeActive=_isBridgeActive - In the implementation block
@property (assign,nonatomic) unsigned long long sizeClass;                   //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                            //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) double screenScale;                             //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) double screenCornerRadius;                      //@synthesize screenCornerRadius=_screenCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL isLuxo;                                    //@synthesize isLuxo=_isLuxo - In the implementation block
@property (assign,nonatomic) BOOL isExplorer;                                //@synthesize isExplorer=_isExplorer - In the implementation block
@property (assign,nonatomic) unsigned long long materialType;                //@synthesize materialType=_materialType - In the implementation block
@property (assign,nonatomic) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) NSUUID * nrDeviceUUID; 
@property (nonatomic,readonly) unsigned nrDeviceVersion; 
@property (nonatomic,readonly) BOOL supportsNewInGallery;                    //@synthesize supportsNewInGallery=_supportsNewInGallery - In the implementation block
+(id)deviceForNRDevice:(id)arg1 ;
+(void)_deviceDidBecomeActive;
+(void)_resetCurrentDevice;
+(void)setCurrentDevice:(id)arg1 ;
+(id)deviceForNRDevice:(id)arg1 forced:(BOOL)arg2 ;
+(id)deviceForNRDeviceUUID:(id)arg1 ;
+(id)nrDeviceForNRDeviceUUID:(id)arg1 ;
+(void)initialize;
+(id)currentDevice;
-(unsigned long long)sizeClass;
-(unsigned long long)collectionType;
-(id)initWithNRDevice:(id)arg1 ;
-(void)_loadDeviceInfo;
-(void)setNrDevice:(NRDevice *)arg1 ;
-(void)setSizeClass:(unsigned long long)arg1 ;
-(void)setScreenCornerRadius:(double)arg1 ;
-(void)setIsLuxo:(BOOL)arg1 ;
-(void)setIsExplorer:(BOOL)arg1 ;
-(void)setMaterialType:(unsigned long long)arg1 ;
-(void)setCollectionType:(unsigned long long)arg1 ;
-(BOOL)isLuxo;
-(unsigned)nrDeviceVersion;
-(NRDevice *)nrDevice;
-(NSUUID *)nrDeviceUUID;
-(double)screenCornerRadius;
-(unsigned long long)materialType;
-(NRDevice *)_rawNRDevice;
-(BOOL)isBridgeActive;
-(void)setIsBridgeActive:(BOOL)arg1 ;
-(BOOL)isExplorer;
-(BOOL)supportsNewInGallery;
-(BOOL)unlockedSinceBoot;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLocked;
-(void)setScreenBounds:(CGRect)arg1 ;
-(CGRect)screenBounds;
-(void)setScreenScale:(double)arg1 ;
-(double)screenScale;
@end

