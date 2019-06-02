/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTPersonalizationPortraitManager, RTMapServiceManager, NSString;

@interface RTMapItemProviderProactiveExperts : RTMapItemProviderBase <RTMapItemProvider> {

	RTPersonalizationPortraitManager* _personalizationPortraitManager;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) RTPersonalizationPortraitManager * personalizationPortraitManager;              //@synthesize personalizationPortraitManager=_personalizationPortraitManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                        //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(id)initWithPersonalizationPortraitManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 ;
-(id)_recentLocationsFrom:(id)arg1 error:(id*)arg2 ;
-(id)_filterConnectionLocations:(id)arg1 location:(id)arg2 distance:(double)arg3 error:(id*)arg4 ;
-(id)_mapItemsWithConnectionsLocations:(id)arg1 ;
-(RTPersonalizationPortraitManager *)personalizationPortraitManager;
-(id)mapItemsWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5 ;
-(void)setPersonalizationPortraitManager:(RTPersonalizationPortraitManager *)arg1 ;
-(id)init;
@end

