/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOUsageKeypressEventProtocol;
@class NSString, NSArray, GEOUserSessionSnapshot;

@interface MKLocalSearchKeypressMetrics : NSObject {

	NSString* _query;
	NSArray* _queryTokens;
	NSArray* _suggestionEntries;
	GEOUserSessionSnapshot* _userSessionSnapshot;
	id<GEOUsageKeypressEventProtocol> _customUsageCapturer;

}

@property (nonatomic,retain) id<GEOUsageKeypressEventProtocol> customUsageCapturer;              //@synthesize customUsageCapturer=_customUsageCapturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * query;                                            //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSArray * queryTokens;                                       //@synthesize queryTokens=_queryTokens - In the implementation block
@property (nonatomic,readonly) NSArray * suggestionEntries;                                      //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
@property (nonatomic,readonly) GEOUserSessionSnapshot * userSessionSnapshot;                     //@synthesize userSessionSnapshot=_userSessionSnapshot - In the implementation block
-(GEOUserSessionSnapshot *)userSessionSnapshot;
-(NSArray *)suggestionEntries;
-(id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3 ;
-(id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3 usageCapturer:(id)arg4 ;
-(void)submitWithStatus:(unsigned long long)arg1 ;
-(id<GEOUsageKeypressEventProtocol>)customUsageCapturer;
-(void)setCustomUsageCapturer:(id<GEOUsageKeypressEventProtocol>)arg1 ;
-(NSArray *)queryTokens;
-(NSString *)query;
@end

