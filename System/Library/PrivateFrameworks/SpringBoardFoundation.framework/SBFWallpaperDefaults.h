/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class SBWallpaperDefaults;

@interface SBFWallpaperDefaults : NSObject {

	SBWallpaperDefaults* _defaultsStore;

}

@property (nonatomic,readonly) SBWallpaperDefaults * defaultsStore;              //@synthesize defaultsStore=_defaultsStore - In the implementation block
+(id)defaults;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(double)stillTimeInVideo;
-(void)setStillTimeInVideo:(double)arg1 ;
-(id)initWithDefaultsStore:(id)arg1 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 ;
-(void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 ;
-(void)resetDefaults;
-(double)parallaxFactorForVariant:(long long)arg1 ;
-(double)zoomScaleForVariant:(long long)arg1 ;
-(CGRect)cropRectForVariant:(long long)arg1 ;
-(BOOL)supportsCroppingForVariant:(long long)arg1 ;
-(void)resetParallaxFactorDefaults;
-(void)resetZoomScaleDefaults;
-(void)resetCroppingDefaults;
-(void)resetMagnifyDefaults;
-(BOOL)magnifyEnabledForVariant:(long long)arg1 ;
-(BOOL)isPortraitForVariant:(long long)arg1 ;
-(id)nameForVariant:(long long)arg1 ;
-(BOOL)hasVideoForVariant:(long long)arg1 ;
-(double)stillTimeInVideoForVariant:(long long)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setCropRect:(CGRect)arg1 forLocations:(long long)arg2 ;
-(void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 ;
-(void)setMagnifyEnabled:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setZoomScale:(double)arg1 forLocations:(long long)arg2 ;
-(void)setPortrait:(BOOL)arg1 forLocations:(long long)arg2 ;
-(void)setName:(id)arg1 forLocations:(long long)arg2 ;
-(SBWallpaperDefaults *)defaultsStore;
-(void)resetPortraitDefaults;
-(void)resetHasVideoDefaults;
-(void)resetStillTimeInVideoDefaults;
-(void)resetNameDefaults;
-(id)init;
-(id)description;
@end

