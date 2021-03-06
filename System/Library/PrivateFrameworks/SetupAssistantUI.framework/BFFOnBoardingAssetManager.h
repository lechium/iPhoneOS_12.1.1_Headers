/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BFFOnBoardingAssetManager : NSObject
+(id)appropriateAvailableLanguageForCurrentLanguage;
+(BOOL)shouldUseWorldwideAssetForLanguage:(id)arg1 feature:(long long)arg2 ;
+(long long)currentAssetDeviceClass;
+(id)appropriateAvailableLanguageForPreferredLanguages:(id)arg1 regionCode:(id)arg2 ;
+(BOOL)shouldUseWorldwideAssetForPreferredLanguages:(id)arg1 language:(id)arg2 feature:(long long)arg3 ;
+(BOOL)hasWorldwideAsset:(long long)arg1 ;
+(id)sharedManager;
-(id)featureKey;
-(void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(BOOL)arg3 useLocalAssets:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)assetTypeForCurrentDevice;
-(id)assetFeatureValueForFeature:(long long)arg1 ;
-(id)movieURLForAsset:(id)arg1 ;
-(void)downloadAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeAssets:(id)arg1 ;
-(id)placeholderImageNameForFeature:(long long)arg1 ;
-(id)placeholderImageNameForFeature:(long long)arg1 language:(id)arg2 ;
-(void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purgeFeatureMoviesWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeFeatureMoviesExceptLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)retrieveMovieForFeature:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeMovieForFeature:(long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)placeholderImageForFeature:(long long)arg1 ;
@end

