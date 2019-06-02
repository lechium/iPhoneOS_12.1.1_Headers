/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	NSString* _baseURL;
	int _checksumType;
	NSMutableArray* _countryRegionWhitelists;
	NSString* _localizationURL;
	int _requestStyle;
	int _scale;
	NSMutableArray* _sentinelTiles;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	unsigned _timeToLiveSeconds;
	int _updateBehavior;
	unsigned _version;
	BOOL _useAuthProxy;
	SCD_Struct_GE87 _has;

}

@property (nonatomic,readonly) BOOL hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned version;                                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                            //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles;                        //@synthesize sentinelTiles=_sentinelTiles - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                            //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;                   //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior;                                    //@synthesize updateBehavior=_updateBehavior - In the implementation block
@property (nonatomic,retain) NSMutableArray * countryRegionWhitelists;              //@synthesize countryRegionWhitelists=_countryRegionWhitelists - In the implementation block
@property (assign,nonatomic) BOOL hasChecksumType; 
@property (assign,nonatomic) int checksumType;                                      //@synthesize checksumType=_checksumType - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStyle; 
@property (assign,nonatomic) int requestStyle;                                      //@synthesize requestStyle=_requestStyle - In the implementation block
@property (assign,nonatomic) BOOL hasUseAuthProxy; 
@property (assign,nonatomic) BOOL useAuthProxy;                                     //@synthesize useAuthProxy=_useAuthProxy - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)supportedLanguageType;
+(Class)countryRegionWhitelistType;
+(id)buildDisputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2 ;
+(Class)sentinelTileType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)supportedLanguages;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE44)arg2 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(void)addCountryRegionWhitelist:(id)arg1 ;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(unsigned long long)supportedLanguagesCount;
-(void)clearSupportedLanguages;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countryRegionWhitelistsCount;
-(void)clearCountryRegionWhitelists;
-(id)countryRegionWhitelistAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBaseURL;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(id)scaleAsString:(int)arg1 ;
-(int)StringAsScale:(id)arg1 ;
-(id)sizeAsString:(int)arg1 ;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)hasLocalizationURL;
-(int)updateBehavior;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)setHasUpdateBehavior:(BOOL)arg1 ;
-(BOOL)hasUpdateBehavior;
-(id)updateBehaviorAsString:(int)arg1 ;
-(int)StringAsUpdateBehavior:(id)arg1 ;
-(int)checksumType;
-(void)setChecksumType:(int)arg1 ;
-(void)setHasChecksumType:(BOOL)arg1 ;
-(BOOL)hasChecksumType;
-(id)checksumTypeAsString:(int)arg1 ;
-(int)StringAsChecksumType:(id)arg1 ;
-(int)requestStyle;
-(void)setRequestStyle:(int)arg1 ;
-(void)setHasRequestStyle:(BOOL)arg1 ;
-(BOOL)hasRequestStyle;
-(id)requestStyleAsString:(int)arg1 ;
-(int)StringAsRequestStyle:(id)arg1 ;
-(BOOL)useAuthProxy;
-(void)setUseAuthProxy:(BOOL)arg1 ;
-(void)setHasUseAuthProxy:(BOOL)arg1 ;
-(BOOL)hasUseAuthProxy;
-(NSString *)localizationURL;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)countryRegionWhitelists;
-(void)setCountryRegionWhitelists:(NSMutableArray *)arg1 ;
-(void)clearAvailableTiles;
-(unsigned long long)availableTilesCount;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion*)availableTiles;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(unsigned)timeToLiveSeconds;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE44)arg1 ;
-(BOOL)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)isDisputedBordersWhitelistedForCountry:(id)arg1 region:(id)arg2 ;
-(id)disputedBordersQueryItemsForCountry:(id)arg1 region:(id)arg2 ;
-(id)_bestLanguageWithOverrideLocale:(id)arg1 ;
-(void)_resetBestLanguage;
-(NSMutableArray *)sentinelTiles;
-(id)_bestCountryRegionWhitelistMatchForCountry:(id)arg1 region:(id)arg2 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE44)arg1 ;
-(unsigned)maximumZoomLevelForMapPoint:(SCD_Struct_GE30)arg1 ;
-(id)dataForGenericTileType:(int)arg1 configuration:(id)arg2 ;
-(BOOL)isEquivalentTileSet:(id)arg1 ;
-(void)addSentinelTile:(id)arg1 ;
-(unsigned long long)sentinelTilesCount;
-(void)clearSentinelTiles;
-(id)sentinelTileAtIndex:(unsigned long long)arg1 ;
-(void)setSentinelTiles:(NSMutableArray *)arg1 ;
-(int)size;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)scale;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)setScale:(int)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setSize:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(NSString *)baseURL;
@end

