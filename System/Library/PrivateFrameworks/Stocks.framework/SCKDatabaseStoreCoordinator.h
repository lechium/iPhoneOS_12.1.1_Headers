/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCKDatabaseStoreCoordinator
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
@required
-(void)reloadWithAccessor:(/*^block*/id)arg1;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)readWithAccessor:(/*^block*/id)arg1;
-(void)writeWithAccessor:(/*^block*/id)arg1;
-(id<SCKDatabaseStore>)underlyingStore;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;

@end

