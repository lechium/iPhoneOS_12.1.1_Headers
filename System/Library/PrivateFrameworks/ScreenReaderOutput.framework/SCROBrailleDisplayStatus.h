/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCROBrailleDisplayStatus : NSObject {

	int _virtualAlignment;
	NSData* _realData;
	NSData* _virtualData;
	NSData* _aggregatedData;
	long long _masterStatusCellIndex;

}

@property (nonatomic,retain) NSData * realData;                            //@synthesize realData=_realData - In the implementation block
@property (nonatomic,retain) NSData * virtualData;                         //@synthesize virtualData=_virtualData - In the implementation block
@property (nonatomic,retain) NSData * aggregatedData;                      //@synthesize aggregatedData=_aggregatedData - In the implementation block
@property (assign,nonatomic) int virtualAlignment;                         //@synthesize virtualAlignment=_virtualAlignment - In the implementation block
@property (assign,nonatomic) long long masterStatusCellIndex;              //@synthesize masterStatusCellIndex=_masterStatusCellIndex - In the implementation block
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(NSData *)realData;
-(void)setRealData:(NSData *)arg1 ;
-(NSData *)virtualData;
-(void)setVirtualData:(NSData *)arg1 ;
-(NSData *)aggregatedData;
-(void)setAggregatedData:(NSData *)arg1 ;
-(int)virtualAlignment;
-(void)setVirtualAlignment:(int)arg1 ;
@end
