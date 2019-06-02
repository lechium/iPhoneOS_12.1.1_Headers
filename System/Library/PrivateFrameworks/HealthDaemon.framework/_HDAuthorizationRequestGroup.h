/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableSet, NSString, NSUUID, NSMutableArray, NSObject, NSSet;

@interface _HDAuthorizationRequestGroup : NSObject {

	NSMutableSet* _typesToWrite;
	NSMutableSet* _typesToRead;
	BOOL _inTransaction;
	NSString* _bundleIdentifier;
	NSUUID* _promptSessionIdentifier;
	/*^block*/id _promptHandler;
	NSMutableArray* _requests;
	NSMutableArray* _completions;
	NSObject*<OS_dispatch_source> _sessionTimeoutSource;

}

@property (nonatomic,retain) NSMutableArray * requests;                                       //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                                    //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sessionTimeoutSource;              //@synthesize sessionTimeoutSource=_sessionTimeoutSource - In the implementation block
@property (assign,getter=isInTransaction,nonatomic) BOOL inTransaction;                       //@synthesize inTransaction=_inTransaction - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToWrite;                                     //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;                                      //@synthesize typesToRead=_typesToRead - In the implementation block
@property (nonatomic,readonly) NSUUID * promptSessionIdentifier;                              //@synthesize promptSessionIdentifier=_promptSessionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long requestCount; 
@property (nonatomic,copy) id promptHandler;                                                  //@synthesize promptHandler=_promptHandler - In the implementation block
-(NSMutableArray *)requests;
-(void)addRequest:(id)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)beginTransaction;
-(void)setPromptHandler:(id)arg1 ;
-(void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2 ;
-(NSSet *)typesToWrite;
-(NSSet *)typesToRead;
-(id)promptHandler;
-(BOOL)promptIfNecessaryWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishRequestsWithError:(id)arg1 ;
-(NSUUID *)promptSessionIdentifier;
-(BOOL)isInTransaction;
-(void)_cancelTimeoutSource;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)sessionTimeoutSource;
-(void)setSessionTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setInTransaction:(BOOL)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)requestCount;
-(id)initWithBundleIdentifier:(id)arg1 ;
@end
