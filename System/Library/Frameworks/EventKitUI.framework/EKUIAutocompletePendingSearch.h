/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKUIAutocompletePendingSearchProtocol.h>

@protocol CalSpotlightQueryPendingSearchProtocol;
@class EKEventStore, NSString;

@interface EKUIAutocompletePendingSearch : NSObject <EKUIAutocompletePendingSearchProtocol> {

	EKEventStore* _eventStore;
	unsigned long long _maximumResultCount;
	id<CalSpotlightQueryPendingSearchProtocol> _pendingSearch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventKitQueue;
+(void)_updateResult:(id)arg1 withEvent:(id)arg2 ;
+(id)_queue;
-(void)searchWithString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancel;
@end
