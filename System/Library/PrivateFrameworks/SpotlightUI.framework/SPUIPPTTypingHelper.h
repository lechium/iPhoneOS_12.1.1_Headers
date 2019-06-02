/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPUISearchViewController, NSString;

@interface SPUIPPTTypingHelper : NSObject {

	double _timeSinceLastFire;
	SPUISearchViewController* _searchViewController;
	NSString* _queryString;
	NSString* _currentQueryString;
	/*^block*/id _completion;

}

@property (assign) double timeSinceLastFire;                                     //@synthesize timeSinceLastFire=_timeSinceLastFire - In the implementation block
@property (retain) SPUISearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (retain) NSString * queryString;                                       //@synthesize queryString=_queryString - In the implementation block
@property (retain) NSString * currentQueryString;                                //@synthesize currentQueryString=_currentQueryString - In the implementation block
@property (copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
-(void)fire:(id)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(SPUISearchViewController *)searchViewController;
-(NSString *)currentQueryString;
-(void)setCurrentQueryString:(NSString *)arg1 ;
-(void)setTimeSinceLastFire:(double)arg1 ;
-(void)setSearchViewController:(SPUISearchViewController *)arg1 ;
-(double)timeSinceLastFire;
-(id)initWithString:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

