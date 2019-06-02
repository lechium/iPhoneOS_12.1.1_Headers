/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, BRCAppLibrary, NSArray;

@interface BRCPCSChainBatchInfo : NSObject {

	NSMutableArray* _fullyChainRecordBatch;
	NSMutableDictionary* _fullyChainRecordInfoMap;
	NSMutableDictionary* _halfChainedParentMap;
	BRCAppLibrary* _appLibrary;

}

@property (nonatomic,readonly) unsigned long long batchCount; 
@property (nonatomic,copy,readonly) NSArray * records; 
-(unsigned long long)batchCount;
-(id)initWithAppLibrary:(id)arg1 ;
-(BOOL)containsRecordInfo:(id)arg1 ;
-(void)addFullyChainedRecordInfo:(id)arg1 ;
-(void)chainPreparedRecordBatch:(id)arg1 ;
-(NSArray *)records;
@end

