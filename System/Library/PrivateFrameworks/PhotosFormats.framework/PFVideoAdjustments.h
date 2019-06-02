/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments {

	float _slowMotionRate;
	SCD_Struct_PF2 _slowMotionTimeRange;

}

@property (nonatomic,readonly) float slowMotionRate; 
@property (nonatomic,readonly) SCD_Struct_PF2 slowMotionTimeRange; 
@property (nonatomic,readonly) SCD_Struct_PF2 slowMotionRampIn; 
@property (nonatomic,readonly) SCD_Struct_PF2 slowMotionRampOut; 
@property (assign,nonatomic) float slowMotionRate;                              //@synthesize slowMotionRate=_slowMotionRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF2 slowMotionTimeRange;                //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1 ;
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg1 ;
+(SCD_Struct_PF2)defaultSlowMotionTimeRangeForDuration:(SCD_Struct_PF1)arg1 ;
+(BOOL)isRecognizedFormatWithIdentifier:(id)arg1 version:(id)arg2 ;
+(id)defaultSlowMotionAdjustmentsForAsset:(id)arg1 ;
-(BOOL)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF2*)arg2 rate:(float*)arg3 ;
-(void)_updateDerivedPropertiesFromVersionedData;
-(BOOL)_parseVersionedDataForSlowMotionTimeRange:(SCD_Struct_PF2*)arg1 rate:(float*)arg2 ;
-(void)setSlowMotionTimeRange:(SCD_Struct_PF2)arg1 ;
-(void)setSlowMotionRate:(float)arg1 ;
-(id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1 ;
-(BOOL)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF2*)arg2 rate:(float*)arg3 ;
-(id)_dictionaryFromSlowMotionTimeRange:(SCD_Struct_PF2)arg1 rate:(float)arg2 ;
-(BOOL)_isValidSlowMotionTimeRange:(SCD_Struct_PF2)arg1 rate:(float)arg2 ;
-(SCD_Struct_PF2)slowMotionRampIn;
-(SCD_Struct_PF2)slowMotionRampOut;
-(BOOL)isRecognizedFormat;
-(SCD_Struct_PF2)slowMotionTimeRange;
-(float)slowMotionRate;
-(id)initWithSlowMotionTimeRange:(SCD_Struct_PF2)arg1 rate:(float)arg2 ;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(BOOL)hasSlowMotionAdjustments;
-(SCD_Struct_PF1)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF1)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF1)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF1)arg1 forExport:(BOOL)arg2 ;
-(id)description;
@end

