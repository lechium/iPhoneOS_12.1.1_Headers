/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HKChartCachePendingFetchOperationManager : NSObject {

	NSMutableDictionary* _fetchOperationsByIdentifier;
	NSMutableDictionary* _fetchOperationsByUUID;
	NSMutableDictionary* _retryCountByIdentifier;

}
-(void)addFetchOperation:(id)arg1 ;
-(void)removeFetchOperation:(id)arg1 ;
-(id)fetchOperationForIdentifier:(id)arg1 ;
-(void)incrementRetryCountForIdentifier:(id)arg1 ;
-(long long)retryCountForIdentifier:(id)arg1 ;
-(void)resetRetryCountForIdentifier:(id)arg1 ;
-(id)allPendingIdentifiers;
-(id)init;
@end

