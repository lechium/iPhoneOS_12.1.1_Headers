/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPersistentHistoryStats : NSObject {

	long long _filePageCount;
	long long _transactionsPageCount;
	long long _transactionStringsPageCount;
	long long _changesPageCount;

}

@property (assign,nonatomic) long long filePageCount;                                  //@synthesize filePageCount=_filePageCount - In the implementation block
@property (assign,nonatomic) long long transactionsPageCount;                          //@synthesize transactionsPageCount=_transactionsPageCount - In the implementation block
@property (assign,nonatomic) long long transactionStringsPageCount;                    //@synthesize transactionStringsPageCount=_transactionStringsPageCount - In the implementation block
@property (assign,nonatomic) long long changesPageCount;                               //@synthesize changesPageCount=_changesPageCount - In the implementation block
@property (nonatomic,readonly) long long persistentHistoryPageCount; 
@property (nonatomic,readonly) double transactionsPageCountPercent; 
@property (nonatomic,readonly) double transactionStringsPageCountPercent; 
@property (nonatomic,readonly) double changesPageCountPercent; 
@property (nonatomic,readonly) double persistentHistoryPageCountPercent; 
+(id)statsFromDatabase:(id)arg1 ;
-(void)setChangesPageCount:(long long)arg1 ;
-(void)setTransactionsPageCount:(long long)arg1 ;
-(void)setTransactionStringsPageCount:(long long)arg1 ;
-(void)setFilePageCount:(long long)arg1 ;
-(double)_pageCountAsPercentOfFile:(long long)arg1 ;
-(long long)persistentHistoryPageCount;
-(double)transactionsPageCountPercent;
-(double)transactionStringsPageCountPercent;
-(double)changesPageCountPercent;
-(double)persistentHistoryPageCountPercent;
-(long long)filePageCount;
-(long long)transactionsPageCount;
-(long long)transactionStringsPageCount;
-(long long)changesPageCount;
@end

