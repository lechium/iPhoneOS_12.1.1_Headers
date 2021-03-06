/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNAutocompleteQueryCacheMissLogger, NSArray;

@interface CNAutocompleteQueryCacheMissAuditor : NSObject {

	CNAutocompleteQueryCacheMissLogger* _logger;
	NSArray* _cachedResults;

}

@property (retain) CNAutocompleteQueryCacheMissLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (copy) NSArray * cachedResults;                                    //@synthesize cachedResults=_cachedResults - In the implementation block
-(void)didReturnCachedResults:(id)arg1 ;
-(void)didReturnLiveResults:(id)arg1 ;
-(NSArray *)cachedResults;
-(void)setCachedResults:(NSArray *)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(CNAutocompleteQueryCacheMissLogger *)logger;
-(void)setLogger:(CNAutocompleteQueryCacheMissLogger *)arg1 ;
-(id)init;
-(id)description;
@end

