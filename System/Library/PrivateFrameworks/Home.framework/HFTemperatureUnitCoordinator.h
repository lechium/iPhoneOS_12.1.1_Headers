/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject {

	BOOL _isCelsius;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL isCelsius;                     //@synthesize isCelsius=_isCelsius - In the implementation block
+(id)sharedCoordinator;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)_updateIsCelsiusNotifyingObservers:(BOOL)arg1 ;
-(void)_temperatureUnitDidChange;
-(void)setIsCelsius:(BOOL)arg1 ;
-(BOOL)isCelsius;
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end

