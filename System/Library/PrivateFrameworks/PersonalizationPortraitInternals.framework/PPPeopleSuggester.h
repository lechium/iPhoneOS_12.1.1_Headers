/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PPContactSuggester.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface PPPeopleSuggester : PPContactSuggester {

	/*^block*/id _mockBlock;
	NSObject*<OS_dispatch_source> _timer;
	unsigned char _numberOfContactsToSuggest;

}
-(void)clearCaches;
-(id)initWithNumberOfContactsToSuggest:(unsigned char)arg1 ;
-(void)setNumberOfContactsToSuggest:(unsigned char)arg1 ;
-(void)clearCachesWithoutRefreshing;
-(id)_makeDuetPeopleSuggester;
-(void)_processPeopleSuggestions:(id)arg1 favorites:(id)arg2 doRetry:(BOOL)arg3 ;
-(void)_refreshPeopleSuggestionsAndRetryIfNoResults:(BOOL)arg1 ;
-(void)waitForData;
-(id)initWithMock:(/*^block*/id)arg1 ;
-(void)refreshMockPeopleSuggestions;
-(unsigned char)numberOfContactsToSuggest;
@end
