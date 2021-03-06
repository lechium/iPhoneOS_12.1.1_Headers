/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>

@protocol AAUIContactsSearchDelegate;
@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString;

@interface FAContactsSearchController : NSObject <MFContactsSearchConsumer> {

	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	long long _countOfPendingResultBatches;
	BOOL _didFindResults;
	NSNumber* _searchTaskID;
	id<AAUIContactsSearchDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned long long)arg1 ;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)cancelSearch;
-(void)_endSearch;
-(void)beginSearchWithString:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

