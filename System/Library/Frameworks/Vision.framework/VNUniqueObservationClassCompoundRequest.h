/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {

	NSMapTable* _requestToObservationClassMap;

}
-(id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2 ;
-(id)initWithSubrequestsAndUniqueObservationClasses:(id)arg1 ;
@end

