/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitDecoderData, GEOMapItemStorage, NSString, NSData, GEOTransitSuggestedRoute, GEODirectionsRequest, GEODirectionsResponse, NSMutableArray;

@interface GEOCompanionRouteDetails : PBCodable <NSCopying> {

	SCD_Struct_GE107* _coordinates;
	SCD_Struct_GE20* _trafficColorOffsets;
	SCD_Struct_GE20* _trafficColors;
	GEOTransitDecoderData* _decoderData;
	GEOMapItemStorage* _destination;
	NSString* _destinationName;
	unsigned _distance;
	unsigned _historicalDuration;
	NSString* _name;
	GEOMapItemStorage* _origin;
	unsigned _originalDuration;
	NSData* _originalRouteID;
	GEOTransitSuggestedRoute* _originalSuggestedRoute;
	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	NSMutableArray* _routeDescriptions;
	NSData* _routeID;
	NSMutableArray* _steps;
	NSString* _trafficDescription;
	int _transportType;
	BOOL _canNavigate;
	BOOL _showTransitSchedules;
	SCD_Struct_GE40 _has;

}

@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName;                                     //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalDuration; 
@property (assign,nonatomic) unsigned originalDuration;                                      //@synthesize originalDuration=_originalDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                         //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinatesCount; 
@property (nonatomic,readonly) double* coordinates; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                               //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) BOOL hasDestination; 
@property (nonatomic,retain) GEOMapItemStorage * destination;                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOMapItemStorage * origin;                                     //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (assign,nonatomic) BOOL hasHistoricalDuration; 
@property (assign,nonatomic) unsigned historicalDuration;                                    //@synthesize historicalDuration=_historicalDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCanNavigate; 
@property (assign,nonatomic) BOOL canNavigate;                                               //@synthesize canNavigate=_canNavigate - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                              //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalSuggestedRoute; 
@property (nonatomic,retain) GEOTransitSuggestedRoute * originalSuggestedRoute;              //@synthesize originalSuggestedRoute=_originalSuggestedRoute - In the implementation block
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                            //@synthesize decoderData=_decoderData - In the implementation block
@property (assign,nonatomic) BOOL hasShowTransitSchedules; 
@property (assign,nonatomic) BOOL showTransitSchedules;                                      //@synthesize showTransitSchedules=_showTransitSchedules - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEODirectionsRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEODirectionsResponse * response;                               //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasTrafficDescription; 
@property (nonatomic,retain) NSString * trafficDescription;                                  //@synthesize trafficDescription=_trafficDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                       //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,retain) NSMutableArray * routeDescriptions;                             //@synthesize routeDescriptions=_routeDescriptions - In the implementation block
+(Class)stepType;
+(Class)routeDescriptionsType;
+(id)syntheticRouteDetailsWithOrigin:(id)arg1 destination:(id)arg2 transportType:(int)arg3 destinationName:(id)arg4 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(unsigned long long)stepsCount;
-(GEOTransitDecoderData *)decoderData;
-(BOOL)hasName;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(double*)coordinates;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(BOOL)hasOriginalRouteID;
-(NSData *)originalRouteID;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(BOOL)hasDecoderData;
-(void)addStep:(id)arg1 ;
-(void)clearSteps;
-(id)stepAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficColorsCount;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned long long)trafficColorOffsetsCount;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(unsigned long long)routeDescriptionsCount;
-(void)clearRouteDescriptions;
-(void)setTrafficDescription:(NSString *)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned*)trafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)trafficColorOffsets;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasTrafficDescription;
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)routeDescriptions;
-(void)setRouteDescriptions:(NSMutableArray *)arg1 ;
-(NSString *)trafficDescription;
-(GEOTransitSuggestedRoute *)originalSuggestedRoute;
-(void)setDestinationName:(NSString *)arg1 ;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 stringFormatter:(id)arg3 ;
-(void)addRouteDescriptions:(id)arg1 ;
-(unsigned long long)coordinatesCount;
-(void)clearCoordinates;
-(double)coordinatesAtIndex:(unsigned long long)arg1 ;
-(void)addCoordinates:(double)arg1 ;
-(void)setOriginalSuggestedRoute:(GEOTransitSuggestedRoute *)arg1 ;
-(void)setRequest:(GEODirectionsRequest *)arg1 ;
-(void)setResponse:(GEODirectionsResponse *)arg1 ;
-(id)routeDescriptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDestinationName;
-(void)setOriginalDuration:(unsigned)arg1 ;
-(void)setHasOriginalDuration:(BOOL)arg1 ;
-(BOOL)hasOriginalDuration;
-(void)setCoordinates:(double*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(void)setHistoricalDuration:(unsigned)arg1 ;
-(void)setHasHistoricalDuration:(BOOL)arg1 ;
-(BOOL)hasHistoricalDuration;
-(void)setCanNavigate:(BOOL)arg1 ;
-(void)setHasCanNavigate:(BOOL)arg1 ;
-(BOOL)hasCanNavigate;
-(BOOL)hasOriginalSuggestedRoute;
-(BOOL)showTransitSchedules;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(BOOL)hasRequest;
-(BOOL)hasResponse;
-(NSString *)destinationName;
-(unsigned)originalDuration;
-(unsigned)historicalDuration;
-(BOOL)canNavigate;
-(unsigned long long)stepIndexWithID:(unsigned long long)arg1 ;
-(id)initWithRoute:(id)arg1 fallbackDestinationName:(id)arg2 stringFormatter:(id)arg3 ;
-(BOOL)isSyntheticRoute;
-(id)stepWithID:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDestination:(GEOMapItemStorage *)arg1 ;
-(GEOMapItemStorage *)destination;
-(GEOMapItemStorage *)origin;
-(void)setOrigin:(GEOMapItemStorage *)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(id)dictionaryRepresentation;
-(GEODirectionsRequest *)request;
-(GEODirectionsResponse *)response;
-(void)copyTo:(id)arg1 ;
@end

