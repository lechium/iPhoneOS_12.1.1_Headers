/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEffect : NSObject {

	BOOL _isPortrait;
	BOOL _isLegacy;
	NSString* _filterIdentifier;
	NSString* _displayName;
	NSString* _CIFilterName;
	long long _lightingType;

}

@property (nonatomic,copy,readonly) NSString * filterIdentifier;              //@synthesize filterIdentifier=_filterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * CIFilterName;                  //@synthesize CIFilterName=_CIFilterName - In the implementation block
@property (nonatomic,readonly) long long latestVersion; 
@property (nonatomic,readonly) BOOL isPortrait;                               //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) long long lightingType;                        //@synthesize lightingType=_lightingType - In the implementation block
@property (nonatomic,readonly) BOOL isLegacy;                                 //@synthesize isLegacy=_isLegacy - In the implementation block
+(id)effectWithCIFilterName:(id)arg1 ;
+(BOOL)isEffectNoneForIdentifier:(id)arg1 ;
+(id)effectWithIdentifier:(id)arg1 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 type:(long long)arg4 isLegacy:(BOOL)arg5 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 type:(long long)arg4 ;
+(id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3 ;
+(id)_legacyEffectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 ;
+(id)allEffects;
+(unsigned long long)indexOfEffectWithIdentifier:(id)arg1 ;
+(unsigned long long)indexOfEffectWithLightingType:(long long)arg1 ;
+(id)standardSupportedEffects;
+(id)allSupportedEffects;
+(BOOL)isEffectWithIdentifier:(id)arg1 equalToEffectWithIdentifier:(id)arg2 ;
+(id)effectWithType:(long long)arg1 ;
-(long long)lightingType;
-(BOOL)isPortrait;
-(NSString *)CIFilterName;
-(id)newEffectFilter;
-(NSString *)filterIdentifier;
-(long long)latestVersion;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(BOOL)isLegacy;
@end

