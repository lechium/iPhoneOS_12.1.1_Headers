/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface NTKLabelCache : NSObject {

	NSMutableDictionary* _atlases;
	NSMutableSet* _preloadSet;

}
+(id)versionFilePath;
+(BOOL)localeChanged;
+(void)primeForDevice:(id)arg1 ;
+(void)_purgeCache;
+(id)numeralsSetFromCurrentLocale;
+(BOOL)setNumeralsSet:(id)arg1 ;
+(void)wipe;
+(id)labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(BOOL)arg5 filter:(BOOL)arg6 ;
+(id)labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(BOOL)arg5 ;
-(void)checkVersion;
-(void)_exportTextureAtlasForFaceStyle:(long long)arg1 forDevice:(id)arg2 ;
-(void)_primeForDevice:(id)arg1 font:(long long)arg2 modifier:(id)arg3 values:(id)arg4 padWithZeroes:(BOOL)arg5 preload:(BOOL)arg6 ;
-(void)_loadAtlases;
-(BOOL)_localeChanged;
-(id)_labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(BOOL)arg5 filter:(BOOL)arg6 ;
-(id)_labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(BOOL)arg5 ;
-(id)_keyForLabelWithFont:(long long)arg1 modifier:(id)arg2 padWithZeroes:(BOOL)arg3 ;
-(id)_supportedImageSuffixesForDevice:(id)arg1 ;
-(void)_exportTextureAtlasForDevice:(id)arg1 forFont:(long long)arg2 modifier:(id)arg3 values:(id)arg4 padWithZeroes:(BOOL)arg5 preload:(BOOL)arg6 ;
-(id)_currentImageSuffixesForDevice:(id)arg1 ;
-(id)_textureForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(BOOL)arg5 ;
-(id)_nameForFaceStyle:(long long)arg1 ;
-(id)_keyForLabelWithFont:(long long)arg1 fontSize:(double)arg2 padWithZeroes:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
@end
