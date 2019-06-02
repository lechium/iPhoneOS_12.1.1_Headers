/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNAutocompleteFetchDelegate, CNScheduler;
@class CNAutocompleteQueryResponsePreparer, CNCancelationToken, CNAutocompleteUserSession, CNAutocompleteFetchRequest, NSString;

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable> {

	id<CNAutocompleteFetchDelegate> _delegate;
	id<CNScheduler> _scheduler;
	CNAutocompleteQueryResponsePreparer* _responsePreparer;
	unsigned long long _openNetworkActivityCalls;
	CNCancelationToken* _cancelationToken;
	CNAutocompleteUserSession* _userSession;
	CNAutocompleteFetchRequest* _fetchRequest;

}

@property (assign,nonatomic) unsigned long long openNetworkActivityCalls;              //@synthesize openNetworkActivityCalls=_openNetworkActivityCalls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseScheduler;
-(id)sortResults;
-(void)setDuetResultsFuture:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(void)queueMessageToDelegate:(/*^block*/id)arg1 ;
-(unsigned long long)openNetworkActivityCalls;
-(void)setOpenNetworkActivityCalls:(unsigned long long)arg1 ;
-(void)queueUncancelableMessageToDelegate:(/*^block*/id)arg1 ;
-(void)queueDidEndNetworkActivityMessageForFetch:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 ;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
@end

