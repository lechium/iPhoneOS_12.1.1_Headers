/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOAutomobileOptions, NSMutableArray, GEOLocation, GEOMapRegion, GEOTransitOptions, GEOTraitsTransitScheduleFilter, GEOPDVenueIdentifier, GEOWalkingOptions;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOSessionID _sessionId;
	SCD_Struct_GE2* _engineTypes;
	SCD_Struct_GE2* _knownClientResolvedTypes;
	SCD_Struct_GE2* _transportTypes;
	double _carHeadunitPixelHeight;
	double _carHeadunitPixelWidth;
	double _mapZoomLevel;
	double _sessionRelativeTimestamp;
	int _action;
	NSString* _analyticsAppIdentifier;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	GEOAutomobileOptions* _automobileOptions;
	int _carHeadunitConnectionType;
	int _carHeadunitInteractionModel;
	NSString* _carHeadunitManufacturer;
	NSString* _carHeadunitModel;
	int _deviceBatteryState;
	NSMutableArray* _deviceDisplayLanguages;
	int _deviceInterfaceOrientation;
	NSString* _deviceKeyboardLocale;
	GEOLocation* _deviceLocation;
	NSString* _deviceSpokenLocale;
	NSString* _displayRegion;
	NSMutableArray* _historicalLocations;
	unsigned _httpRequestPriority;
	GEOMapRegion* _mapRegion;
	int _mode;
	NSMutableArray* _photoSizes;
	unsigned _photosCount;
	NSString* _providerID;
	int _requestMode;
	NSMutableArray* _reviewUserPhotoSizes;
	unsigned _reviewUserPhotosCount;
	unsigned _sequenceNumber;
	int _source;
	unsigned _timeSinceMapEnteredForeground;
	unsigned _timeSinceMapViewportChanged;
	GEOTransitOptions* _transitOptions;
	GEOTraitsTransitScheduleFilter* _transitScheduleFilter;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOWalkingOptions* _walkingOptions;
	BOOL _appDarkMode;
	BOOL _deviceDarkMode;
	BOOL _deviceInVehicle;
	BOOL _isAPICall;
	BOOL _isRedoSearch;
	BOOL _navigating;
	BOOL _supportDirectionIntentAutocomplete;
	BOOL _supportDirectionIntentSearch;
	BOOL _supportDymSuggestion;
	BOOL _supportUnresolvedDirectionIntent;
	BOOL _useBackgroundUrl;
	BOOL _wantsBrandIcon;
	SCD_Struct_GE223 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId;                                              //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                             //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                                            //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                                          //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                                          //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation;                                        //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                            //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceDisplayLanguages;                             //@synthesize deviceDisplayLanguages=_deviceDisplayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLocale; 
@property (nonatomic,retain) NSString * deviceKeyboardLocale;                                     //@synthesize deviceKeyboardLocale=_deviceKeyboardLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceSpokenLocale; 
@property (nonatomic,retain) NSString * deviceSpokenLocale;                                       //@synthesize deviceSpokenLocale=_deviceSpokenLocale - In the implementation block
@property (assign,nonatomic) BOOL hasIsAPICall; 
@property (assign,nonatomic) BOOL isAPICall;                                                      //@synthesize isAPICall=_isAPICall - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                                          //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoSizes;                                         //@synthesize photoSizes=_photoSizes - In the implementation block
@property (assign,nonatomic) BOOL hasPhotosCount; 
@property (assign,nonatomic) unsigned photosCount;                                                //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviewUserPhotoSizes;                               //@synthesize reviewUserPhotoSizes=_reviewUserPhotoSizes - In the implementation block
@property (assign,nonatomic) BOOL hasReviewUserPhotosCount; 
@property (assign,nonatomic) unsigned reviewUserPhotosCount;                                      //@synthesize reviewUserPhotosCount=_reviewUserPhotosCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground;                              //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged;                                //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitInteractionModel; 
@property (assign,nonatomic) int carHeadunitInteractionModel;                                     //@synthesize carHeadunitInteractionModel=_carHeadunitInteractionModel - In the implementation block
@property (nonatomic,readonly) BOOL hasCarHeadunitManufacturer; 
@property (nonatomic,retain) NSString * carHeadunitManufacturer;                                  //@synthesize carHeadunitManufacturer=_carHeadunitManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasCarHeadunitModel; 
@property (nonatomic,retain) NSString * carHeadunitModel;                                         //@synthesize carHeadunitModel=_carHeadunitModel - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitPixelWidth; 
@property (assign,nonatomic) double carHeadunitPixelWidth;                                        //@synthesize carHeadunitPixelWidth=_carHeadunitPixelWidth - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitPixelHeight; 
@property (assign,nonatomic) double carHeadunitPixelHeight;                                       //@synthesize carHeadunitPixelHeight=_carHeadunitPixelHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitScheduleFilter;              //@synthesize transitScheduleFilter=_transitScheduleFilter - In the implementation block
@property (assign,nonatomic) BOOL hasMapZoomLevel; 
@property (assign,nonatomic) double mapZoomLevel;                                                 //@synthesize mapZoomLevel=_mapZoomLevel - In the implementation block
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                            //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasProviderID; 
@property (nonatomic,retain) NSString * providerID;                                               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation;                                      //@synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState;                                              //@synthesize deviceBatteryState=_deviceBatteryState - In the implementation block
@property (assign,nonatomic) BOOL hasCarHeadunitConnectionType; 
@property (assign,nonatomic) int carHeadunitConnectionType;                                       //@synthesize carHeadunitConnectionType=_carHeadunitConnectionType - In the implementation block
@property (assign,nonatomic) BOOL hasNavigating; 
@property (assign,nonatomic) BOOL navigating;                                                     //@synthesize navigating=_navigating - In the implementation block
@property (assign,nonatomic) BOOL hasIsRedoSearch; 
@property (assign,nonatomic) BOOL isRedoSearch;                                                   //@synthesize isRedoSearch=_isRedoSearch - In the implementation block
@property (nonatomic,retain) NSMutableArray * historicalLocations;                                //@synthesize historicalLocations=_historicalLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                            //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                  //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                                  //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (assign,nonatomic) BOOL hasRequestMode; 
@property (assign,nonatomic) int requestMode;                                                     //@synthesize requestMode=_requestMode - In the implementation block
@property (assign,nonatomic) BOOL hasSupportDirectionIntentSearch; 
@property (assign,nonatomic) BOOL supportDirectionIntentSearch;                                   //@synthesize supportDirectionIntentSearch=_supportDirectionIntentSearch - In the implementation block
@property (assign,nonatomic) BOOL hasSupportDymSuggestion; 
@property (assign,nonatomic) BOOL supportDymSuggestion;                                           //@synthesize supportDymSuggestion=_supportDymSuggestion - In the implementation block
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypesCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypes; 
@property (assign,nonatomic) BOOL hasWantsBrandIcon; 
@property (assign,nonatomic) BOOL wantsBrandIcon;                                                 //@synthesize wantsBrandIcon=_wantsBrandIcon - In the implementation block
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier;                              //@synthesize venueIdentifier=_venueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceInVehicle; 
@property (assign,nonatomic) BOOL deviceInVehicle;                                                //@synthesize deviceInVehicle=_deviceInVehicle - In the implementation block
@property (assign,nonatomic) BOOL hasUseBackgroundUrl; 
@property (assign,nonatomic) BOOL useBackgroundUrl;                                               //@synthesize useBackgroundUrl=_useBackgroundUrl - In the implementation block
@property (assign,nonatomic) BOOL hasHttpRequestPriority; 
@property (assign,nonatomic) unsigned httpRequestPriority;                                        //@synthesize httpRequestPriority=_httpRequestPriority - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticsAppIdentifier; 
@property (nonatomic,retain) NSString * analyticsAppIdentifier;                                   //@synthesize analyticsAppIdentifier=_analyticsAppIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                                     //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSupportDirectionIntentAutocomplete; 
@property (assign,nonatomic) BOOL supportDirectionIntentAutocomplete;                             //@synthesize supportDirectionIntentAutocomplete=_supportDirectionIntentAutocomplete - In the implementation block
@property (assign,nonatomic) BOOL hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL supportUnresolvedDirectionIntent;                               //@synthesize supportUnresolvedDirectionIntent=_supportUnresolvedDirectionIntent - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDarkMode; 
@property (assign,nonatomic) BOOL deviceDarkMode;                                                 //@synthesize deviceDarkMode=_deviceDarkMode - In the implementation block
@property (assign,nonatomic) BOOL hasAppDarkMode; 
@property (assign,nonatomic) BOOL appDarkMode;                                                    //@synthesize appDarkMode=_appDarkMode - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)deviceDisplayLanguageType;
+(Class)photoSizesType;
+(Class)reviewUserPhotoSizesType;
+(Class)historicalLocationsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasDeviceDarkMode;
-(BOOL)deviceDarkMode;
-(void)setDeviceDarkMode:(BOOL)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)appMinorVersion;
-(BOOL)hasAppDarkMode;
-(BOOL)appDarkMode;
-(void)setAppDarkMode:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(BOOL)hasDeviceBatteryState;
-(BOOL)hasDeviceInVehicle;
-(int)deviceInterfaceOrientation;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(int)deviceBatteryState;
-(void)setDeviceBatteryState:(int)arg1 ;
-(BOOL)deviceInVehicle;
-(void)setDeviceInVehicle:(BOOL)arg1 ;
-(BOOL)hasDeviceKeyboardLocale;
-(NSString *)deviceKeyboardLocale;
-(BOOL)hasDeviceSpokenLocale;
-(NSString *)deviceSpokenLocale;
-(BOOL)hasMapZoomLevel;
-(BOOL)hasMode;
-(double)mapZoomLevel;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(double)sessionRelativeTimestamp;
-(unsigned)sequenceNumber;
-(int)requestMode;
-(void)setRequestMode:(int)arg1 ;
-(void)setHasRequestMode:(BOOL)arg1 ;
-(BOOL)hasRequestMode;
-(id)requestModeAsString:(int)arg1 ;
-(int)StringAsRequestMode:(id)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(BOOL)hasDisplayRegion;
-(NSString *)displayRegion;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(BOOL)hasDeviceLocation;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(GEOLocation *)deviceLocation;
-(unsigned)timeSinceMapEnteredForeground;
-(unsigned)timeSinceMapViewportChanged;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(BOOL)hasVenueIdentifier;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(unsigned long long)knownClientResolvedTypesCount;
-(void)clearKnownClientResolvedTypes;
-(int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1 ;
-(void)addKnownClientResolvedType:(int)arg1 ;
-(int*)knownClientResolvedTypes;
-(void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypesAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg1 ;
-(unsigned long long)transportTypesCount;
-(unsigned long long)deviceDisplayLanguagesCount;
-(NSMutableArray *)deviceDisplayLanguages;
-(BOOL)hasIsAPICall;
-(BOOL)isAPICall;
-(BOOL)hasSource;
-(void)updateAnalyticsShortSession;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(void)setDeviceDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)photoSizes;
-(void)addPhotoSizes:(id)arg1 ;
-(BOOL)hasPhotosCount;
-(void)setPhotosCount:(unsigned)arg1 ;
-(NSMutableArray *)reviewUserPhotoSizes;
-(void)addReviewUserPhotoSizes:(id)arg1 ;
-(BOOL)hasReviewUserPhotosCount;
-(void)setReviewUserPhotosCount:(unsigned)arg1 ;
-(BOOL)hasTransitScheduleFilter;
-(void)setTransitScheduleFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(GEOTraitsTransitScheduleFilter *)transitScheduleFilter;
-(void)setHttpRequestPriority:(unsigned)arg1 ;
-(void)setUseBackgroundUrl:(BOOL)arg1 ;
-(void)setIsAPICall:(BOOL)arg1 ;
-(void)setWantsBrandIcon:(BOOL)arg1 ;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(NSString *)appIdentifier;
-(BOOL)hasUseBackgroundUrl;
-(BOOL)useBackgroundUrl;
-(BOOL)hasHttpRequestPriority;
-(unsigned)httpRequestPriority;
-(unsigned long long)photoSizesCount;
-(void)clearPhotoSizes;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(void)addEngineType:(int)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(NSString *)providerID;
-(void)clearTransportTypes;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(void)addTransportType:(int)arg1 ;
-(int*)transportTypes;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
-(BOOL)hasAppIdentifier;
-(void)setHasAppDarkMode:(BOOL)arg1 ;
-(void)setHasDeviceDarkMode:(BOOL)arg1 ;
-(void)clearLocations;
-(void)addDeviceDisplayLanguage:(id)arg1 ;
-(void)addHistoricalLocations:(id)arg1 ;
-(void)clearDeviceDisplayLanguages;
-(id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setDeviceKeyboardLocale:(NSString *)arg1 ;
-(void)setDeviceSpokenLocale:(NSString *)arg1 ;
-(id)photoSizesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)reviewUserPhotoSizesCount;
-(void)clearReviewUserPhotoSizes;
-(id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1 ;
-(void)setCarHeadunitManufacturer:(NSString *)arg1 ;
-(void)setCarHeadunitModel:(NSString *)arg1 ;
-(void)setProviderID:(NSString *)arg1 ;
-(unsigned long long)historicalLocationsCount;
-(void)clearHistoricalLocations;
-(id)historicalLocationsAtIndex:(unsigned long long)arg1 ;
-(void)setAnalyticsAppIdentifier:(NSString *)arg1 ;
-(void)setHasIsAPICall:(BOOL)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setHasPhotosCount:(BOOL)arg1 ;
-(void)setHasReviewUserPhotosCount:(BOOL)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(int)carHeadunitInteractionModel;
-(void)setCarHeadunitInteractionModel:(int)arg1 ;
-(void)setHasCarHeadunitInteractionModel:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitInteractionModel;
-(id)carHeadunitInteractionModelAsString:(int)arg1 ;
-(int)StringAsCarHeadunitInteractionModel:(id)arg1 ;
-(BOOL)hasCarHeadunitManufacturer;
-(BOOL)hasCarHeadunitModel;
-(void)setCarHeadunitPixelWidth:(double)arg1 ;
-(void)setHasCarHeadunitPixelWidth:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitPixelWidth;
-(void)setCarHeadunitPixelHeight:(double)arg1 ;
-(void)setHasCarHeadunitPixelHeight:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitPixelHeight;
-(void)setMapZoomLevel:(double)arg1 ;
-(void)setHasMapZoomLevel:(BOOL)arg1 ;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(BOOL)hasProviderID;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(int)carHeadunitConnectionType;
-(void)setCarHeadunitConnectionType:(int)arg1 ;
-(void)setHasCarHeadunitConnectionType:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitConnectionType;
-(id)carHeadunitConnectionTypeAsString:(int)arg1 ;
-(int)StringAsCarHeadunitConnectionType:(id)arg1 ;
-(void)setNavigating:(BOOL)arg1 ;
-(void)setHasNavigating:(BOOL)arg1 ;
-(BOOL)hasNavigating;
-(void)setIsRedoSearch:(BOOL)arg1 ;
-(void)setHasIsRedoSearch:(BOOL)arg1 ;
-(BOOL)hasIsRedoSearch;
-(void)setSupportDirectionIntentSearch:(BOOL)arg1 ;
-(void)setHasSupportDirectionIntentSearch:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentSearch;
-(void)setSupportDymSuggestion:(BOOL)arg1 ;
-(void)setHasSupportDymSuggestion:(BOOL)arg1 ;
-(BOOL)hasSupportDymSuggestion;
-(void)setHasWantsBrandIcon:(BOOL)arg1 ;
-(BOOL)hasWantsBrandIcon;
-(void)setHasDeviceInVehicle:(BOOL)arg1 ;
-(void)setHasUseBackgroundUrl:(BOOL)arg1 ;
-(void)setHasHttpRequestPriority:(BOOL)arg1 ;
-(BOOL)hasAnalyticsAppIdentifier;
-(void)setSupportDirectionIntentAutocomplete:(BOOL)arg1 ;
-(void)setHasSupportDirectionIntentAutocomplete:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentAutocomplete;
-(void)setSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(void)setHasSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(BOOL)hasSupportUnresolvedDirectionIntent;
-(void)setPhotoSizes:(NSMutableArray *)arg1 ;
-(void)setReviewUserPhotoSizes:(NSMutableArray *)arg1 ;
-(unsigned)reviewUserPhotosCount;
-(NSString *)carHeadunitManufacturer;
-(NSString *)carHeadunitModel;
-(double)carHeadunitPixelWidth;
-(double)carHeadunitPixelHeight;
-(BOOL)navigating;
-(BOOL)isRedoSearch;
-(NSMutableArray *)historicalLocations;
-(void)setHistoricalLocations:(NSMutableArray *)arg1 ;
-(BOOL)supportDirectionIntentSearch;
-(BOOL)supportDymSuggestion;
-(BOOL)wantsBrandIcon;
-(NSString *)analyticsAppIdentifier;
-(BOOL)supportDirectionIntentAutocomplete;
-(BOOL)supportUnresolvedDirectionIntent;
-(int)uiActionType;
-(void)clearSessionId;
-(unsigned)photosCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(int)mode;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
@end

