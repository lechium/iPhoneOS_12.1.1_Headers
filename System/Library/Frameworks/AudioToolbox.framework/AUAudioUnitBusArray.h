/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, AUAudioUnit;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _busses;
	BOOL _countChangeable;
	AUAudioUnit* _ownerAudioUnit;
	long long _busType;
	vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> >* _observers;

}

@property (assign,nonatomic) vector<BusPropertyObserver observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (getter=isCountChangeable,nonatomic,readonly) BOOL countChangeable;              //@synthesize countChangeable=_countChangeable - In the implementation block
@property (nonatomic,readonly) AUAudioUnit * ownerAudioUnit;                               //@synthesize ownerAudioUnit=_ownerAudioUnit - In the implementation block
@property (nonatomic,readonly) long long busType;                                          //@synthesize busType=_busType - In the implementation block
-(id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 ;
-(void)replaceBusses:(id)arg1 ;
-(AUAudioUnit *)ownerAudioUnit;
-(long long)busType;
-(BOOL)isCountChangeable;
-(void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)indexBusses;
-(id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 busses:(id)arg3 ;
-(BOOL)setBusCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AU48*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObservers:(vector<BusPropertyObserver)arg1 ;
-(vector<BusPropertyObserver)observers;
@end

