/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestWarming, VNRequestCancelling, VNTrackerProviding> {

	NSLock* _requestLock;
	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSMutableDictionary* _sequencedRequestObservations;
	NSMutableSet* _trackerKeys;

}
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)releaseTracker:(id)arg1 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
-(BOOL)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2 ;
-(id)_dependencyAnalyzedRequestsForRequests:(id)arg1 ;
-(id)_orderedRequestsForRequests:(id)arg1 ;
-(BOOL)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(void)cancelAllRequests;
-(id)init;
-(void)dealloc;
@end

