/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Weather/Weather-Structs.h>
@class NSHashTable, NSOperationQueue, WAForecastModel, NSDate, WFServiceConnection;

@interface WATodayModel : NSObject {

	NSHashTable* _observers;
	NSOperationQueue* _modelOperationQueue;
	BOOL _hasPendingUpdates;
	WAForecastModel* _forecastModel;
	NSDate* _lastUpdateDate;
	WFServiceConnection* _connection;
	ct_green_tea_logger_sRef _greenTeaLogger;

}

@property (nonatomic,retain) WFServiceConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) ct_green_tea_logger_sRef greenTeaLogger;              //@synthesize greenTeaLogger=_greenTeaLogger - In the implementation block
@property (assign,nonatomic) BOOL hasPendingUpdates;                               //@synthesize hasPendingUpdates=_hasPendingUpdates - In the implementation block
@property (nonatomic,retain) WAForecastModel * forecastModel;                      //@synthesize forecastModel=_forecastModel - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
+(id)modelWithLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(void)setHasPendingUpdates:(BOOL)arg1 ;
-(WAForecastModel *)forecastModel;
-(ct_green_tea_logger_sRef)greenTeaLogger;
-(void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_executeLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_executeForecastRetrievalForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForecastModel:(WAForecastModel *)arg1 ;
-(void)_willDeliverForecastModel:(id)arg1 ;
-(void)_fireTodayModelForecastWasUpdated:(id)arg1 ;
-(void)_persistStateWithModel:(id)arg1 ;
-(void)performDelayedUpdatesForObserver:(id)arg1 ;
-(BOOL)executeModelUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)checkIfNeedsToUpdate;
-(BOOL)hasCrossedHourlyBoundary;
-(void)clearLocationUpdateState;
-(void)_fireTodayModelWantsUpdate;
-(void)setGreenTeaLogger:(ct_green_tea_logger_sRef)arg1 ;
-(BOOL)hasPendingUpdates;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)location;
-(WFServiceConnection *)connection;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdateDate;
@end

