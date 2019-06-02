/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SymbolValidatorDelegate.h>

@class SymbolValidator, NSTimer, NSString;

@interface StockFetcher : NSObject <SymbolValidatorDelegate> {

	double _timeoutDuration;
	SymbolValidator* _validator;
	/*^block*/id _completionHandler;
	NSTimer* _timeoutTimer;

}

@property (retain) SymbolValidator * validator;                     //@synthesize validator=_validator - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign) double timeoutDuration;                          //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithValidator:(id)arg1 ;
-(SymbolValidator *)validator;
-(void)setValidator:(SymbolValidator *)arg1 ;
-(void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2 ;
-(void)symbolValidator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)fetchStockWithSymbol:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cleanUpAndReportResult:(id)arg1 ;
-(void)attemptRemoteFetchOfStockWithSymbol:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)remoteFetchTimedOut;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(double)timeoutDuration;
@end
