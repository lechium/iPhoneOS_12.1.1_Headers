/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPlatform : NSObject
+(id)sharedPlatform;
+(void)setIsRunningInGeod:(BOOL)arg1 ;
+(BOOL)isRunningInGeod;
-(BOOL)isInternalInstall;
-(id)osVersion;
-(id)clientCapabilities;
-(BOOL)supportsNavigation;
-(BOOL)supportsRealisticTiles;
-(id)productName;
-(double)deviceScreenScale;
-(id)hardwareModel;
-(BOOL)isCellDataPossible;
-(BOOL)_deviceSupportsNavigation;
-(BOOL)mapsFeatureFreedomEnabled;
-(BOOL)supportsNewiOS9Features;
-(BOOL)supportsForceTouch;
-(long long)deviceScreenWidthInPixels;
-(long long)deviceScreenHeightInPixels;
-(id)buildVersion;
-(id)hardwareIdentifier;
@end

