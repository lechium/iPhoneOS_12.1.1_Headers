/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDCollectedSensorDatum;
@class HDDataAggregator, NSString, HDDataCollectorConfiguration;

@interface HDDataCollectorAggregatorRecord : NSObject {

	BOOL _hasSetLastSensorDatum;
	HDDataAggregator* _aggregator;
	NSString* _identifier;
	HDDataCollectorConfiguration* _configuration;
	id<HDCollectedSensorDatum> _lastSensorDatum;

}

@property (nonatomic,readonly) HDDataAggregator * aggregator;                           //@synthesize aggregator=_aggregator - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HDDataCollectorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id<HDCollectedSensorDatum> lastSensorDatum;                  //@synthesize lastSensorDatum=_lastSensorDatum - In the implementation block
@property (nonatomic,readonly) BOOL hasSetLastSensorDatum;                              //@synthesize hasSetLastSensorDatum=_hasSetLastSensorDatum - In the implementation block
-(id)initWithAggregator:(id)arg1 identifier:(id)arg2 ;
-(void)setLastSensorDatum:(id<HDCollectedSensorDatum>)arg1 ;
-(HDDataAggregator *)aggregator;
-(id<HDCollectedSensorDatum>)lastSensorDatum;
-(BOOL)hasSetLastSensorDatum;
-(NSString *)identifier;
-(id)description;
-(HDDataCollectorConfiguration *)configuration;
-(void)setConfiguration:(HDDataCollectorConfiguration *)arg1 ;
@end
