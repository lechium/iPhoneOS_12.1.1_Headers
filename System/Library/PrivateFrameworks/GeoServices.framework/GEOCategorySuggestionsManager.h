/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCategorySuggestionsManagerServerProxy;
@interface GEOCategorySuggestionsManager : NSObject {

	id<GEOCategorySuggestionsManagerServerProxy> _serverProxy;

}
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(id)sharedManager;
-(void)fetchSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3 ;
-(id)_spotlightCategorySuggestionsForResponse:(id)arg1 ;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(id)init;
@end
