/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNAutocompleteResultTracing : NSObject {

	unsigned long long _countOfRecentsResults;
	unsigned long long _countOfContactsResults;
	unsigned long long _countOfServerResults;
	double _startTime;
	double _localLatency;
	double _serverLatency;
	BOOL _waitingForRecentsResults;
	BOOL _waitingForContactsResults;
	BOOL _waitingForServerResults;

}

@property (assign) unsigned long long countOfRecentsResults; 
@property (assign) unsigned long long countOfContactsResults; 
@property (assign) unsigned long long countOfServerResults; 
+(id)resultTracer;
-(void)logLocalLatencyIfReady;
-(void)sendMessageTracersIfReady;
-(void)logServerLatency;
-(void)sendMessageTracers;
-(void)sendLocalResultsTracer;
-(void)sendServerResultsTracer;
-(void)expectRecentsResults:(BOOL)arg1 ;
-(void)expectContactsResults:(BOOL)arg1 ;
-(void)expectServerResults:(BOOL)arg1 ;
-(unsigned long long)countOfRecentsResults;
-(void)setCountOfRecentsResults:(unsigned long long)arg1 ;
-(unsigned long long)countOfContactsResults;
-(void)setCountOfContactsResults:(unsigned long long)arg1 ;
-(unsigned long long)countOfServerResults;
-(void)setCountOfServerResults:(unsigned long long)arg1 ;
-(id)init;
@end

