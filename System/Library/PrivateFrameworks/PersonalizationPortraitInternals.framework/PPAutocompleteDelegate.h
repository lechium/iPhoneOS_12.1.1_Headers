/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@class CNAutocompleteStore, NSCache, NSMutableSet, NSString;

@interface PPAutocompleteDelegate : NSObject <CNAutocompleteFetchDelegate> {

	CNAutocompleteStore* _autocompleteStore;
	NSCache* _resultCache;
	NSCache* _fetchToContextMap;
	NSMutableSet* _contextsInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)clearCaches;
-(id)lookupCachedContactsWithName:(id)arg1 recipients:(id)arg2 ;
-(id)queryForName:(id)arg1 recipients:(id)arg2 ;
-(id)convertAutocompleteResultToContact:(id)arg1 ;
-(id)init;
@end

