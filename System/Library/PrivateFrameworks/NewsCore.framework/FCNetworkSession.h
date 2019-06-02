/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkSession.h>
@class NSDate, NSArray;


@protocol FCNetworkSession <NSObject>
@property (nonatomic,readonly) BOOL wifiReachable; 
@property (nonatomic,readonly) long long cellularRadioAccessTechnology; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long totalSuccessCount; 
@property (nonatomic,readonly) unsigned long long totalFailureCount; 
@property (nonatomic,readonly) NSArray * eventGroups; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)cellularRadioAccessTechnology;
-(BOOL)wifiReachable;
-(id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id*)arg2;
-(unsigned long long)totalSuccessCount;
-(unsigned long long)totalFailureCount;
-(NSArray *)eventGroups;

@end


@class NSDate, NSArray, NSMutableArray, NSString;

@interface FCNetworkSession : NSObject <FCNetworkSession> {

	NSMutableArray* _eventGroups;
	BOOL _wifiReachable;
	long long _cellularRadioAccessTechnology;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) BOOL wifiReachable;                                   //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) long long cellularRadioAccessTechnology;              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long totalSuccessCount; 
@property (nonatomic,readonly) unsigned long long totalFailureCount; 
@property (nonatomic,readonly) NSArray * eventGroups;                              //@synthesize eventGroups=_eventGroups - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setWifiReachable:(BOOL)arg1 ;
-(long long)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(long long)arg1 ;
-(BOOL)wifiReachable;
-(void)addEventGroup:(id)arg1 ;
-(id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)totalSuccessCount;
-(unsigned long long)totalFailureCount;
-(NSArray *)eventGroups;
-(id)init;
@end

