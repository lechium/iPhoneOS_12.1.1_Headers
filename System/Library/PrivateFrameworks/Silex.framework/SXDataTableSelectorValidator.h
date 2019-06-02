/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXDataRecordStore;

@interface SXDataTableSelectorValidator : NSObject {

	SXDataRecordStore* _recordStore;
	unsigned long long _dataOrientation;

}

@property (nonatomic,readonly) SXDataRecordStore * recordStore;                 //@synthesize recordStore=_recordStore - In the implementation block
@property (nonatomic,readonly) unsigned long long dataOrientation;              //@synthesize dataOrientation=_dataOrientation - In the implementation block
-(unsigned long long)dataOrientation;
-(id)initWithRecordStore:(id)arg1 dataOrientation:(unsigned long long)arg2 ;
-(BOOL)validateRowSelector:(id)arg1 forRowIndex:(unsigned long long)arg2 ;
-(BOOL)validateColumnSelector:(id)arg1 forColumnIndex:(unsigned long long)arg2 ;
-(BOOL)validateCellSelector:(id)arg1 forIndexPath:(NSRange)arg2 ;
-(SXDataRecordStore *)recordStore;
-(id)conditionEngineForSelector:(id)arg1 forIndexPath:(NSRange)arg2 ;
-(id)descriptorForIndexPath:(NSRange)arg1 ;
@end

