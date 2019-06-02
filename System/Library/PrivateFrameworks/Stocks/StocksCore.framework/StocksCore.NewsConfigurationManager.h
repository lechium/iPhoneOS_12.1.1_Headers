/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNewsAppConfigurationManager.h>
#import <libobjc.A.dylib/FCCoreConfigurationManager.h>

@class NSArray, NSString, NSNumber;

@interface StocksCore.NewsConfigurationManager : NSObject <FCNewsAppConfigurationManager, FCCoreConfigurationManager> {

	 appConfigurationManager;
	 coreConfigObservers;
	 appConfigObservers;

}

@property (readonly,nonatomic) id<FCNewsAppConfiguration> appConfiguration; 
@property (readonly,nonatomic) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration; 
@property (readonly,nonatomic) id<FCCoreConfiguration> configuration; 
@property (readonly,nonatomic) NSArray * treatmentIDs; 
@property (readonly,nonatomic) NSArray * segmentSetIDs; 
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(/*^block*/id)arg2 ;
-(void)fetchTrendingSearchesIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)addAppConfigObserver:(id)arg1 ;
-(void)removeAppConfigObserver:(id)arg1 ;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(id<FCNewsAppConfiguration>)possiblyUnfetchedAppConfiguration;
-(void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)treatmentIDs;
-(NSArray *)segmentSetIDs;
-(void)fetchConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)init;
@end

