/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICCloudThrottlingLevel : NSObject {

	double _batchInterval;
	unsigned long long _numberOfBatches;

}

@property (assign,nonatomic) double batchInterval;                            //@synthesize batchInterval=_batchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBatches;              //@synthesize numberOfBatches=_numberOfBatches - In the implementation block
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2 ;
-(unsigned long long)numberOfBatches;
-(void)setNumberOfBatches:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
@end

