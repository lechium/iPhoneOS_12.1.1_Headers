/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContextResponse, NSString, NSLocale;

@interface CKContextCompleter : NSObject {

	CKContextResponse* _response;
	NSString* _ignorePrefix;
	NSLocale* _searchLocale;
	AB _discarded;
	unsigned long long _couldHaveShown;
	AB _shown;
	AB _engaged;
	AB _transactionSuccessful;
	NSString* _input;
	AI _loggingShownMax;
	AB _loggingServerOverride;
	AI _loggingCouldHaveShownMax;
	AI _loggingInputLengthMax;

}
-(id)initWithResponse:(id)arg1 ;
-(void)discard;
-(id)_resultsMatching:(id)arg1 ;
-(id)resultsMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2 ;
-(id)queriesMatching:(id)arg1 ;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 ;
-(void)dealloc;
@end
