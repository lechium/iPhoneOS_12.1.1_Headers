/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol NewsUpdaterDelegate;
@class StockNewsItemCollection, Stock;

@interface NewsUpdater : YQLRequest {

	id<NewsUpdaterDelegate> _delegate;
	BOOL _firstLoad;
	double _lastResponseTimestamp;
	StockNewsItemCollection* _lastNewsItemCollection;
	Stock* _stock;
	/*^block*/id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) id<NewsUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_newsItemCollectionCache;
+(id)sharedNewsUpdater;
-(void)resetLocale;
-(void)parseData:(id)arg1 ;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(void)clearNewsCacheOnDisk;
-(void)fetchNewsForStock:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)shouldReloadOnResume;
-(void)loadNewsCacheFromDiskForSymbol:(id)arg1 ;
-(void)fetchNewsForStock:(id)arg1 ;
-(void)saveLastResponse;
-(id)init;
-(void)setDelegate:(id<NewsUpdaterDelegate>)arg1 ;
-(id<NewsUpdaterDelegate>)delegate;
-(void)failWithError:(id)arg1 ;
@end

