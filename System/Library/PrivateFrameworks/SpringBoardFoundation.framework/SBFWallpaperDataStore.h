/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFWallpaperDataStore <NSObject>
@required
-(id)wallpaperOptionsForVariant:(long long)arg1;
-(id)wallpaperImageForVariant:(long long)arg1;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1;
-(id)wallpaperOriginalImageForVariant:(long long)arg1;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
-(id)unverifiedVideoURLForVariant:(long long)arg1;
-(id)verifiedVideoURLForVariant:(long long)arg1;
-(id)verifiedOriginalVideoURLForVariant:(long long)arg1;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2;
-(BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2;
-(void)removeVideoForVariant:(long long)arg1;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
-(void)removeProceduralWallpaperForVariants:(long long)arg1;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
-(void)removeWallpaperOptionsForVariants:(long long)arg1;
-(id)wallpaperColorForVariant:(long long)arg1;
-(id)wallpaperColorNameForVariant:(long long)arg1;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
-(void)removeWallpaperColorForVariants:(long long)arg1;

@end

