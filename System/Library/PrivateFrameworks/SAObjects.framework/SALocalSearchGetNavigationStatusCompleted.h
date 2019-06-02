/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SALocalSearchMapItem, SALocalSearchAceNavigationEta, SALocalSearchMapItemList, SALocalSearchRoute, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,retain) SALocalSearchMapItem * destination; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * nextManeuverEta; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * overallEta; 
@property (nonatomic,retain) SALocalSearchMapItemList * predictedDestinations; 
@property (nonatomic,retain) SALocalSearchRoute * route; 
@property (nonatomic,copy) NSString * trafficIncidentAlertType; 
@property (nonatomic,copy) NSString * volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocalSearchRoute *)route;
-(void)setRoute:(SALocalSearchRoute *)arg1 ;
-(SALocalSearchMapItemList *)predictedDestinations;
-(void)setPredictedDestinations:(SALocalSearchMapItemList *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocalSearchAceNavigationEta *)nextManeuverEta;
-(void)setNextManeuverEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(SALocalSearchAceNavigationEta *)overallEta;
-(void)setOverallEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(NSString *)trafficIncidentAlertType;
-(void)setTrafficIncidentAlertType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setDestination:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)destination;
-(void)setVolume:(NSString *)arg1 ;
-(NSString *)volume;
@end

