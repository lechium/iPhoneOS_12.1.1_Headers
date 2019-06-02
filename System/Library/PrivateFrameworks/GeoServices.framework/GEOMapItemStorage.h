/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOMapItemPrivate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapItemClientAttributes, GEOPDResultDetourInfo, NSString, GEOLatLng, GEOPlace, GEOPDPlace, GEOPlaceResult, GEOMapItemStorageUserValues, GEOMapRegion, NSData, GEOAddress, NSDictionary, NSArray, NSTimeZone, NSDate, GEOAssociatedApp, GEOPDFlyover, GEOMapItemIdentifier, GEOPriceDescription, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEORestaurantFeaturesLink, GEOMessageLink, GEOPlacecardLayoutConfiguration, GEOMapItemDetourInfo, GEOMapItemContainedPlace;

@interface GEOMapItemStorage : PBCodable <GEOMapItemPrivate, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPDResultDetourInfo* _internalDetourInfo;
	NSString* _mapsURL;
	GEOLatLng* _originatingCoordinate;
	GEOPlace* _place;
	GEOPDPlace* _placeData;
	GEOPlaceResult* _placeResult;
	GEOMapItemStorageUserValues* _userValues;

}

@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) BOOL disputed; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) SCD_Struct_GE30 coordinate; 
@property (nonatomic,readonly) SCD_Struct_GE30 centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) BOOL hasDisplayMinZoom; 
@property (nonatomic,readonly) float displayMinZoom; 
@property (nonatomic,readonly) BOOL hasDisplayMaxZoom; 
@property (nonatomic,readonly) float displayMaxZoom; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) BOOL contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) BOOL isEventAllDay; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
@property (getter=_associatedApp,nonatomic,readonly) GEOAssociatedApp * associatedApp; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_responseStatusIsIncomplete,nonatomic,readonly) BOOL responseStatusIncomplete; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_isTransitDisplayFeature,nonatomic,readonly) BOOL isTransitDisplayFeature; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_identifier,nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (getter=_placeDisplayType,nonatomic,readonly) int placeDisplayType; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_priceDescription,nonatomic,readonly) GEOPriceDescription * priceDescription; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_childPlaces,nonatomic,readonly) NSArray * childPlaces; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasGenderNeutralRestroomAmenity,nonatomic,readonly) BOOL hasGenderNeutralRestroomAmenity; 
@property (getter=_hasGenderNeutralRestroom,nonatomic,readonly) BOOL hasGenderNeutralRestroom; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_completeOperatingHours,nonatomic,readonly) NSArray * completeOperatingHours; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_optsOutOfTelephoneAds,nonatomic,readonly) BOOL optsOutOfTelephoneAds; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) NSArray * spatialMappedCategories; 
@property (nonatomic,readonly) NSArray * spatialMappedPlaceCategories; 
@property (nonatomic,readonly) BOOL hasVenueCapacity; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (getter=_hasFeatureLink,nonatomic,readonly) BOOL hasFeatureLink; 
@property (getter=_featureLink,nonatomic,readonly) GEORestaurantFeaturesLink * featureLink; 
@property (getter=_parsecSectionType,nonatomic,readonly) int parsecSectionType; 
@property (getter=_isStandaloneBrand,nonatomic,readonly) BOOL isStandAloneBrand; 
@property (getter=_messageLink,nonatomic,readonly) GEOMessageLink * messageLink; 
@property (getter=_quickLinks,nonatomic,readonly) NSArray * quickLinks; 
@property (getter=_placecardLayoutConfiguration,nonatomic,readonly) GEOPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (nonatomic,readonly) BOOL hasExpiredComponents; 
@property (getter=_hasVenueFeatureType,nonatomic,readonly) BOOL hasVenueFeatureType; 
@property (getter=_venueFeatureType,nonatomic,readonly) int venueFeatureType; 
@property (getter=_venueInfo,nonatomic,readonly) id<GEOMapItemVenueInfo> venueInfo; 
@property (getter=_browseCategories,nonatomic,readonly) NSArray * browseCategories; 
@property (getter=_placeDisplayStyle,nonatomic,readonly) int placeDisplayStyle; 
@property (getter=_annotatedItemList,nonatomic,readonly) id<GEOAnnotatedItemList> annotatedItemList; 
@property (nonatomic,readonly) NSData * externalTransitStationCode; 
@property (getter=_hasWifiFingerprintLabelType,nonatomic,readonly) BOOL hasWifiFingerprintLabelType; 
@property (getter=_wifiFingerprintLabelType,nonatomic,readonly) int wifiFingerprintLabelType; 
@property (getter=_hasWifiFingerprintConfidence,nonatomic,readonly) BOOL hasWifiFingerprintConfidence; 
@property (getter=_wifiFingerprintConfidence,nonatomic,readonly) unsigned wifiFingerprintConfidence; 
@property (getter=_hasWifiFingerprintLabelStatusCode,nonatomic,readonly) BOOL hasWifiFingerprintLabelStatusCode; 
@property (getter=_wifiFingerprintLabelStatusCode,nonatomic,readonly) int wifiFingerprintLabelStatusCode; 
@property (getter=_containedPlace,nonatomic,readonly) GEOMapItemContainedPlace * containedPlace; 
@property (getter=_isInLinkedPlaceRelationship,nonatomic,readonly) BOOL inLinkedPlaceRelationship; 
@property (nonatomic,readonly) BOOL hasPlaceData; 
@property (nonatomic,retain) GEOPDPlace * placeData;                                                                                             //@synthesize placeData=_placeData - In the implementation block
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPlace * place;                                                                                                   //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) BOOL hasClientAttributes; 
@property (nonatomic,retain) GEOMapItemClientAttributes * clientAttributes;                                                                      //@synthesize clientAttributes=_clientAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceResult; 
@property (nonatomic,retain) GEOPlaceResult * placeResult;                                                                                       //@synthesize placeResult=_placeResult - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingCoordinate; 
@property (nonatomic,retain) GEOLatLng * originatingCoordinate;                                                                                  //@synthesize originatingCoordinate=_originatingCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasInternalDetourInfo; 
@property (nonatomic,retain) GEOPDResultDetourInfo * internalDetourInfo;                                                                         //@synthesize internalDetourInfo=_internalDetourInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL;                                                                                                 //@synthesize mapsURL=_mapsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasUserValues; 
@property (nonatomic,retain) GEOMapItemStorageUserValues * userValues;                                                                           //@synthesize userValues=_userValues - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)mapItemStorageForGEOMapItem:(id)arg1 ;
+(id)mapItemStorageForPlace:(id)arg1 ;
+(id)mapItemStorageForSerializedPlaceData:(id)arg1 ;
+(id)mapItemStorageForPlaceData:(id)arg1 detourInfo:(id)arg2 userValues:(id)arg3 ;
+(id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2 userValues:(id)arg3 ;
+(id)mapItemStorageForSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 ;
+(id)mapItemStorageForPlaceData:(id)arg1 detourInfo:(id)arg2 ;
+(id)mapItemStorageForGEOMapItem:(id)arg1 clientAttributes:(id)arg2 ;
+(id)mapItemStorageForGEOMapItem:(id)arg1 forUseType:(unsigned long long)arg2 ;
+(id)mapItemStorageForSerializedMapItemStorage:(id)arg1 ;
+(id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2 ;
+(id)mapItemStorageForPlaceResult:(id)arg1 ;
+(id)mapItemStorageForPlaceData:(id)arg1 ;
+(id)mapItemStorageForCoordinate:(SCD_Struct_GE30)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(SCD_Struct_GE30)coordinate;
-(id)_roadAccessPoints;
-(GEOMapRegion *)mapRegion;
-(NSTimeZone *)timezone;
-(GEOMapRegion *)displayMapRegion;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(id)_styleAttributes;
-(void)setMapsURL:(NSString *)arg1 ;
-(BOOL)hasMapsURL;
-(NSString *)mapsURL;
-(id)_photos;
-(id)_telephone;
-(BOOL)isDisputed;
-(int)_addressGeocodeAccuracy;
-(void)setPlace:(GEOPlace *)arg1 ;
-(GEOPlace *)place;
-(id)_place;
-(BOOL)hasPlace;
-(id)_attribution;
-(NSDate *)eventDate;
-(BOOL)isEventAllDay;
-(int)_placeType;
-(id)_placeData;
-(id)_browseCategories;
-(int)_resultProviderID;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_asPlaceInfo;
-(id)_mapItemByStrippingOptionalData;
-(id)addressObject;
-(id)shortAddress;
-(id)weatherDisplayName;
-(id)_bestAvatarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_bestNavbarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(BOOL)isEqualToMapItem:(id)arg1 ;
-(SCD_Struct_GE30)centerCoordinate;
-(BOOL)hasDisplayMinZoom;
-(float)displayMinZoom;
-(BOOL)hasDisplayMaxZoom;
-(float)displayMaxZoom;
-(GEOMapRegion *)geoFenceMapRegion;
-(GEOAddress *)geoAddress;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(GEOMapRegion *)displayMapRegionOrNil;
-(int)contactAddressType;
-(NSString *)contactName;
-(NSString *)contactSpokenName;
-(BOOL)contactIsMe;
-(id)_reviews;
-(id)_tips;
-(id)_associatedApp;
-(id)_clientAttributes;
-(id)_placeDataAsData;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)_hasResultProviderID;
-(BOOL)_isTransitDisplayFeature;
-(BOOL)_hasTransit;
-(id)_transitInfo;
-(id)_transitAttribution;
-(BOOL)_hasFlyover;
-(id)_flyover;
-(id)_flyoverAnnouncementMessage;
-(BOOL)_hasMUID;
-(int)_placeDisplayType;
-(BOOL)_hasAreaInMeters;
-(double)_areaInMeters;
-(id)_businessURL;
-(id)_priceDescription;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(BOOL)_hasPriceRange;
-(unsigned)_priceRange;
-(id)_resultSnippetLocationString;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(id)_childPlaces;
-(BOOL)_hasAnyAmenities;
-(BOOL)_hasDeliveryAmenity;
-(BOOL)_hasDelivery;
-(BOOL)_hasGoodForKidsAmenity;
-(BOOL)_goodForKids;
-(BOOL)_hasTakesReservationsAmenity;
-(BOOL)_takesReservations;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasGenderNeutralRestroomAmenity;
-(BOOL)_hasGenderNeutralRestroom;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasCurrentOperatingHours;
-(id)_operatingHours;
-(id)_completeOperatingHours;
-(BOOL)_hasEncyclopedicInfo;
-(id)_encyclopedicInfo;
-(BOOL)_hasTelephone;
-(BOOL)_optsOutOfTelephoneAds;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(BOOL)_needsAttribution;
-(id)_webURL;
-(id)_providerURL;
-(id)_vendorID;
-(id)_poiSurveyURLString;
-(id)_poiPinpointURLString;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(unsigned long long)_customIconID;
-(id)_additionalPlaceInfos;
-(BOOL)_hasBusinessClaim;
-(id)_businessClaim;
-(NSArray *)spatialMappedCategories;
-(NSArray *)spatialMappedPlaceCategories;
-(BOOL)hasVenueCapacity;
-(long long)venueCapacity;
-(BOOL)_hasFeatureLink;
-(id)_featureLink;
-(int)_parsecSectionType;
-(BOOL)_isStandaloneBrand;
-(id)_messageLink;
-(id)_quickLinks;
-(id)_placecardLayoutConfiguration;
-(GEOMapItemDetourInfo *)detourInfo;
-(BOOL)hasExpiredComponents;
-(BOOL)_hasVenueFeatureType;
-(int)_venueFeatureType;
-(id)_venueInfo;
-(int)_placeDisplayStyle;
-(id)_annotatedItemList;
-(NSData *)externalTransitStationCode;
-(BOOL)_hasWifiFingerprintLabelType;
-(int)_wifiFingerprintLabelType;
-(BOOL)_hasWifiFingerprintConfidence;
-(unsigned)_wifiFingerprintConfidence;
-(BOOL)_hasWifiFingerprintLabelStatusCode;
-(int)_wifiFingerprintLabelStatusCode;
-(id)_containedPlace;
-(BOOL)_isInLinkedPlaceRelationship;
-(id)initWithPlaceResult:(id)arg1 ;
-(BOOL)hasPlaceResult;
-(GEOPlaceResult *)placeResult;
-(void)setClientAttributes:(GEOMapItemClientAttributes *)arg1 ;
-(GEOPDPlace *)placeData;
-(GEOMapItemClientAttributes *)clientAttributes;
-(id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2 clientAttributes:(id)arg3 userValues:(id)arg4 ;
-(id)initWithPlace:(id)arg1 clientAttributes:(id)arg2 userValues:(id)arg3 ;
-(BOOL)hasPlaceData;
-(void)setPlaceData:(GEOPDPlace *)arg1 ;
-(BOOL)hasClientAttributes;
-(void)setPlaceResult:(GEOPlaceResult *)arg1 ;
-(BOOL)hasUserValues;
-(GEOMapItemStorageUserValues *)userValues;
-(void)setUserValues:(GEOMapItemStorageUserValues *)arg1 ;
-(id)_geoMapItem;
-(void)setInternalDetourInfo:(GEOPDResultDetourInfo *)arg1 ;
-(GEOPDResultDetourInfo *)internalDetourInfo;
-(id)_geoMapItemCreatingAndAssociatingIfNeeded;
-(void)setOriginatingCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasOriginatingCoordinate;
-(BOOL)hasInternalDetourInfo;
-(GEOLatLng *)originatingCoordinate;
-(id)_identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)eventName;
-(NSData *)encodedData;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(BOOL)isValid;
@end

