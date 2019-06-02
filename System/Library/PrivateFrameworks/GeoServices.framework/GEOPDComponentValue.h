/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRoadAccessInfo, GEOPDAddress, GEOPDAddressObject, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDCaptionedPhoto, GEONonComponentPlaceData, GEOPDContainedPlace, GEOPDEntity, GEOPDETA, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDHours, GEOPDIcon, GEOPDLocationEvent, GEOPDMessageLink, GEOPDPhoto, GEOPDPlaceInfo, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOStyleAttributes, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfo, GEOPDTransitInfoSnippet, GEOPDTransitSchedule, GEOPDVenueInfo, GEOPDWifiFingerprint;

@interface GEOPDComponentValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRoadAccessInfo* _accessInfo;
	GEOPDAddress* _address;
	GEOPDAddressObject* _addressObject;
	GEOPDAmenities* _amenities;
	GEOPDAnnotatedItemList* _annotatedItemList;
	GEOPDAssociatedApp* _associatedApp;
	GEOPDBounds* _bounds;
	GEOPDBrowseCategories* _browseCategories;
	GEOPDBusinessClaim* _businessClaim;
	GEOPDCaptionedPhoto* _captionedPhoto;
	GEONonComponentPlaceData* _clientExtNonComponentData;
	GEOPDContainedPlace* _containedPlace;
	GEOPDEntity* _entity;
	GEOPDETA* _eta;
	GEOPDExternalAction* _externalAction;
	GEOPDFactoid* _factoid;
	GEOPDFlyover* _flyover;
	GEOPDHours* _hours;
	GEOPDIcon* _icon;
	GEOPDLocationEvent* _locationEvent;
	GEOPDMessageLink* _messageLink;
	GEOPDPhoto* _photo;
	GEOPDPlaceInfo* _placeInfo;
	GEOPDPlacecardLayoutConfiguration* _placecardLayoutConfiguration;
	GEOPDPlacecardURL* _placecardUrl;
	GEOPDPoiEvent* _poiEvent;
	GEOPDPriceDescription* _priceDescription;
	GEOPDQuickLink* _quickLink;
	GEOPDRap* _rap;
	GEOPDRating* _rating;
	GEOPDRawAttribute* _rawAttribute;
	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	GEOPDResultSnippet* _resultSnippet;
	GEOPDReview* _review;
	GEOPDSimpleRestaurantMenuText* _simpleRestaurantMenuText;
	GEOPDSpatialLookupResult* _spatialLookupResult;
	GEOStyleAttributes* _styleAttributes;
	GEOPDTextBlock* _textBlock;
	GEOPDTip* _tip;
	GEOPDTransitAttribution* _transitAttribution;
	GEOPDTransitIncident* _transitIncident;
	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	GEOPDTransitSchedule* _transitSchedule;
	GEOPDVenueInfo* _venueInfo;
	GEOPDWifiFingerprint* _wifiFingerprint;

}

@property (nonatomic,readonly) BOOL hasClientExtNonComponentData; 
@property (nonatomic,retain) GEONonComponentPlaceData * clientExtNonComponentData; 
@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity;                                                          //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo;                                                    //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessInfo; 
@property (nonatomic,retain) GEOPDRoadAccessInfo * accessInfo;                                              //@synthesize accessInfo=_accessInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds;                                                          //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAddress * address;                                                        //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating;                                                          //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) BOOL hasReview; 
@property (nonatomic,retain) GEOPDReview * review;                                                          //@synthesize review=_review - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo;                                                            //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL hasHours; 
@property (nonatomic,retain) GEOPDHours * hours;                                                            //@synthesize hours=_hours - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfo; 
@property (nonatomic,retain) GEOPDTransitInfo * transitInfo;                                                //@synthesize transitInfo=_transitInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitSchedule; 
@property (nonatomic,retain) GEOPDTransitSchedule * transitSchedule;                                        //@synthesize transitSchedule=_transitSchedule - In the implementation block
@property (nonatomic,readonly) BOOL hasEta; 
@property (nonatomic,retain) GEOPDETA * eta;                                                                //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) BOOL hasFlyover; 
@property (nonatomic,retain) GEOPDFlyover * flyover;                                                        //@synthesize flyover=_flyover - In the implementation block
@property (nonatomic,readonly) BOOL hasRawAttribute; 
@property (nonatomic,retain) GEOPDRawAttribute * rawAttribute;                                              //@synthesize rawAttribute=_rawAttribute - In the implementation block
@property (nonatomic,readonly) BOOL hasAmenities; 
@property (nonatomic,retain) GEOPDAmenities * amenities;                                                    //@synthesize amenities=_amenities - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                                          //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncident; 
@property (nonatomic,retain) GEOPDTransitIncident * transitIncident;                                        //@synthesize transitIncident=_transitIncident - In the implementation block
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,retain) GEOPDTextBlock * textBlock;                                                    //@synthesize textBlock=_textBlock - In the implementation block
@property (nonatomic,readonly) BOOL hasFactoid; 
@property (nonatomic,retain) GEOPDFactoid * factoid;                                                        //@synthesize factoid=_factoid - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAttribution; 
@property (nonatomic,retain) GEOPDTransitAttribution * transitAttribution;                                  //@synthesize transitAttribution=_transitAttribution - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessClaim; 
@property (nonatomic,retain) GEOPDBusinessClaim * businessClaim;                                            //@synthesize businessClaim=_businessClaim - In the implementation block
@property (nonatomic,readonly) BOOL hasCaptionedPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * captionedPhoto;                                          //@synthesize captionedPhoto=_captionedPhoto - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfoSnippet; 
@property (nonatomic,retain) GEOPDTransitInfoSnippet * transitInfoSnippet;                                  //@synthesize transitInfoSnippet=_transitInfoSnippet - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalAction; 
@property (nonatomic,retain) GEOPDExternalAction * externalAction;                                          //@synthesize externalAction=_externalAction - In the implementation block
@property (nonatomic,readonly) BOOL hasResultSnippet; 
@property (nonatomic,retain) GEOPDResultSnippet * resultSnippet;                                            //@synthesize resultSnippet=_resultSnippet - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject;                                            //@synthesize addressObject=_addressObject - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleRestaurantMenuText; 
@property (nonatomic,retain) GEOPDSimpleRestaurantMenuText * simpleRestaurantMenuText;                      //@synthesize simpleRestaurantMenuText=_simpleRestaurantMenuText - In the implementation block
@property (nonatomic,readonly) BOOL hasRestaurantReservationLink; 
@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink;                    //@synthesize restaurantReservationLink=_restaurantReservationLink - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialLookupResult; 
@property (nonatomic,retain) GEOPDSpatialLookupResult * spatialLookupResult;                                //@synthesize spatialLookupResult=_spatialLookupResult - In the implementation block
@property (nonatomic,readonly) BOOL hasTip; 
@property (nonatomic,retain) GEOPDTip * tip;                                                                //@synthesize tip=_tip - In the implementation block
@property (nonatomic,readonly) BOOL hasPlacecardUrl; 
@property (nonatomic,retain) GEOPDPlacecardURL * placecardUrl;                                              //@synthesize placecardUrl=_placecardUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasAssociatedApp; 
@property (nonatomic,retain) GEOPDAssociatedApp * associatedApp;                                            //@synthesize associatedApp=_associatedApp - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageLink; 
@property (nonatomic,retain) GEOPDMessageLink * messageLink;                                                //@synthesize messageLink=_messageLink - In the implementation block
@property (nonatomic,readonly) BOOL hasQuickLink; 
@property (nonatomic,retain) GEOPDQuickLink * quickLink;                                                    //@synthesize quickLink=_quickLink - In the implementation block
@property (nonatomic,readonly) BOOL hasRap; 
@property (nonatomic,retain) GEOPDRap * rap;                                                                //@synthesize rap=_rap - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationEvent; 
@property (nonatomic,retain) GEOPDLocationEvent * locationEvent;                                            //@synthesize locationEvent=_locationEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasVenueInfo; 
@property (nonatomic,retain) GEOPDVenueInfo * venueInfo;                                                    //@synthesize venueInfo=_venueInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasContainedPlace; 
@property (nonatomic,retain) GEOPDContainedPlace * containedPlace;                                          //@synthesize containedPlace=_containedPlace - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiFingerprint; 
@property (nonatomic,retain) GEOPDWifiFingerprint * wifiFingerprint;                                        //@synthesize wifiFingerprint=_wifiFingerprint - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) GEOPDIcon * icon;                                                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,retain) GEOPDPriceDescription * priceDescription;                                      //@synthesize priceDescription=_priceDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * browseCategories;                                      //@synthesize browseCategories=_browseCategories - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnotatedItemList; 
@property (nonatomic,retain) GEOPDAnnotatedItemList * annotatedItemList;                                    //@synthesize annotatedItemList=_annotatedItemList - In the implementation block
@property (nonatomic,readonly) BOOL hasPoiEvent; 
@property (nonatomic,retain) GEOPDPoiEvent * poiEvent;                                                      //@synthesize poiEvent=_poiEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasPlacecardLayoutConfiguration; 
@property (nonatomic,retain) GEOPDPlacecardLayoutConfiguration * placecardLayoutConfiguration;              //@synthesize placecardLayoutConfiguration=_placecardLayoutConfiguration - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setAddress:(GEOPDAddress *)arg1 ;
-(BOOL)hasAddress;
-(BOOL)hasStyleAttributes;
-(BOOL)hasBounds;
-(BOOL)hasIcon;
-(GEOPDBrowseCategories *)browseCategories;
-(GEOPDAddressObject *)addressObject;
-(BOOL)hasTextBlock;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(BOOL)hasPriceDescription;
-(GEOPDPriceDescription *)priceDescription;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(BOOL)hasPlaceInfo;
-(GEOPDPlaceInfo *)placeInfo;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
-(GEOPDEntity *)entity;
-(BOOL)hasHours;
-(GEOPDHours *)hours;
-(BOOL)hasReview;
-(GEOPDReview *)review;
-(BOOL)hasTip;
-(GEOPDTip *)tip;
-(BOOL)hasPhoto;
-(GEOPDPhoto *)photo;
-(BOOL)hasCaptionedPhoto;
-(GEOPDCaptionedPhoto *)captionedPhoto;
-(GEOPDRating *)rating;
-(GEOPDRoadAccessInfo *)accessInfo;
-(GEOPDResultSnippet *)resultSnippet;
-(GEOPDTransitAttribution *)transitAttribution;
-(GEOPDTransitInfo *)transitInfo;
-(GEOPDTransitInfoSnippet *)transitInfoSnippet;
-(GEOPDTransitSchedule *)transitSchedule;
-(BOOL)hasTransitIncident;
-(GEOPDTransitIncident *)transitIncident;
-(GEOPDFlyover *)flyover;
-(GEOPDSpatialLookupResult *)spatialLookupResult;
-(GEOPDAnnotatedItemList *)annotatedItemList;
-(GEOPDAmenities *)amenities;
-(BOOL)hasAddressObject;
-(BOOL)hasEntity;
-(GEOPDTextBlock *)textBlock;
-(BOOL)hasFactoid;
-(GEOPDFactoid *)factoid;
-(GEOPDBusinessClaim *)businessClaim;
-(GEOPDMessageLink *)messageLink;
-(GEOPDQuickLink *)quickLink;
-(GEOPDPlacecardLayoutConfiguration *)placecardLayoutConfiguration;
-(GEOPDAssociatedApp *)associatedApp;
-(GEOPDVenueInfo *)venueInfo;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(BOOL)hasRating;
-(BOOL)hasWifiFingerprint;
-(GEOPDWifiFingerprint *)wifiFingerprint;
-(BOOL)hasContainedPlace;
-(GEOPDContainedPlace *)containedPlace;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(void)setHours:(GEOPDHours *)arg1 ;
-(BOOL)hasTransitInfo;
-(void)setTransitInfo:(GEOPDTransitInfo *)arg1 ;
-(BOOL)hasFlyover;
-(void)setFlyover:(GEOPDFlyover *)arg1 ;
-(BOOL)hasAmenities;
-(void)setAmenities:(GEOPDAmenities *)arg1 ;
-(BOOL)hasTransitAttribution;
-(void)setTransitAttribution:(GEOPDTransitAttribution *)arg1 ;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(BOOL)hasRestaurantReservationLink;
-(BOOL)hasPlacecardUrl;
-(GEOPDPlacecardURL *)placecardUrl;
-(void)setPlacecardUrl:(GEOPDPlacecardURL *)arg1 ;
-(BOOL)hasMessageLink;
-(void)setMessageLink:(GEOPDMessageLink *)arg1 ;
-(BOOL)hasVenueInfo;
-(void)setVenueInfo:(GEOPDVenueInfo *)arg1 ;
-(void)setContainedPlace:(GEOPDContainedPlace *)arg1 ;
-(void)setClientExtNonComponentData:(GEONonComponentPlaceData *)arg1 ;
-(GEONonComponentPlaceData *)clientExtNonComponentData;
-(GEOPDPoiEvent *)poiEvent;
-(void)setAccessInfo:(GEOPDRoadAccessInfo *)arg1 ;
-(void)setReview:(GEOPDReview *)arg1 ;
-(void)setTransitSchedule:(GEOPDTransitSchedule *)arg1 ;
-(void)setEta:(GEOPDETA *)arg1 ;
-(void)setRawAttribute:(GEOPDRawAttribute *)arg1 ;
-(void)setTransitIncident:(GEOPDTransitIncident *)arg1 ;
-(void)setTextBlock:(GEOPDTextBlock *)arg1 ;
-(void)setFactoid:(GEOPDFactoid *)arg1 ;
-(void)setBusinessClaim:(GEOPDBusinessClaim *)arg1 ;
-(void)setCaptionedPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(void)setTransitInfoSnippet:(GEOPDTransitInfoSnippet *)arg1 ;
-(void)setExternalAction:(GEOPDExternalAction *)arg1 ;
-(void)setResultSnippet:(GEOPDResultSnippet *)arg1 ;
-(void)setSimpleRestaurantMenuText:(GEOPDSimpleRestaurantMenuText *)arg1 ;
-(void)setSpatialLookupResult:(GEOPDSpatialLookupResult *)arg1 ;
-(void)setTip:(GEOPDTip *)arg1 ;
-(void)setAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
-(void)setQuickLink:(GEOPDQuickLink *)arg1 ;
-(void)setRap:(GEOPDRap *)arg1 ;
-(void)setLocationEvent:(GEOPDLocationEvent *)arg1 ;
-(void)setWifiFingerprint:(GEOPDWifiFingerprint *)arg1 ;
-(void)setBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(void)setAnnotatedItemList:(GEOPDAnnotatedItemList *)arg1 ;
-(void)setPoiEvent:(GEOPDPoiEvent *)arg1 ;
-(void)setPlacecardLayoutConfiguration:(GEOPDPlacecardLayoutConfiguration *)arg1 ;
-(BOOL)hasAccessInfo;
-(BOOL)hasTransitSchedule;
-(BOOL)hasEta;
-(BOOL)hasRawAttribute;
-(BOOL)hasBusinessClaim;
-(BOOL)hasTransitInfoSnippet;
-(BOOL)hasExternalAction;
-(BOOL)hasResultSnippet;
-(BOOL)hasSimpleRestaurantMenuText;
-(BOOL)hasSpatialLookupResult;
-(BOOL)hasAssociatedApp;
-(BOOL)hasQuickLink;
-(BOOL)hasRap;
-(BOOL)hasLocationEvent;
-(BOOL)hasBrowseCategories;
-(BOOL)hasAnnotatedItemList;
-(BOOL)hasPoiEvent;
-(BOOL)hasPlacecardLayoutConfiguration;
-(GEOPDETA *)eta;
-(GEOPDRawAttribute *)rawAttribute;
-(GEOPDExternalAction *)externalAction;
-(GEOPDSimpleRestaurantMenuText *)simpleRestaurantMenuText;
-(GEOPDRap *)rap;
-(GEOPDLocationEvent *)locationEvent;
-(BOOL)hasClientExtNonComponentData;
-(GEOPDAddress *)address;
-(BOOL)isEqual:(id)arg1 ;
-(GEOPDBounds *)bounds;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(GEOPDIcon *)icon;
-(void)setIcon:(GEOPDIcon *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
@end

