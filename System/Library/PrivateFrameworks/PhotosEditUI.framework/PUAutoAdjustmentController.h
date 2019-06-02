/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, PLPhotoEditModel;

@interface PUAutoAdjustmentController : NSObject {

	NSArray* _cachedRedEyeCorrections;
	NSDictionary* _cachedWhiteBalanceSettings;
	double _cachedSmartToneLevel;
	double _cachedSmartColorLevel;
	BOOL _cachedValuesAreValid;
	PLPhotoEditModel* _stashedPreviousManualModel;
	BOOL _busy;

}

@property (assign,setter=_setBusy:,getter=isBusy,nonatomic) BOOL busy;              //@synthesize busy=_busy - In the implementation block
-(void)invalidateCachedAdjustments;
-(BOOL)isAutoEnhanceEnabledForModel:(id)arg1 ;
-(void)disableAutoEnhanceOnModel:(id)arg1 ;
-(void)enableAutoEnhanceOnModel:(id)arg1 valuesCalculator:(id)arg2 allowRedEye:(BOOL)arg3 animated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_removeLegacyAutoEnhanceFromModel:(id)arg1 ;
-(void)_applyAutoValuesOnModel:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(double)arg4 smartColorLevel:(double)arg5 valuesCalculator:(id)arg6 animated:(BOOL)arg7 ;
-(void)_setBusy:(BOOL)arg1 ;
-(void)_revertAutoValuesOnModel:(id)arg1 ;
-(BOOL)isBusy;
@end

