/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	int _sampleID;
	unsigned long long _updateType;

}

@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) int sampleID;                                 //@synthesize sampleID=_sampleID - In the implementation block
-(id)initWithUpdateType:(unsigned long long)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(BOOL)hasNewStorageForData:(id)arg1 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldUpdate;
-(unsigned long long)updateType;
-(int)sampleID;
-(void)setSampleID:(int)arg1 ;
-(id)init;
@end
