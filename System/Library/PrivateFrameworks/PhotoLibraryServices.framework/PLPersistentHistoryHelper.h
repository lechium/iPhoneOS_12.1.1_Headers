/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPersistentHistoryHelper : NSObject
+(BOOL)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
@end

