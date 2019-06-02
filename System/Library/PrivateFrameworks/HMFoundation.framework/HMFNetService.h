/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol HMFNetServiceDelegate, OS_dispatch_queue;
@class HMFUnfairLock, NSString, NSArray, NSMutableDictionary, NSNetService, HMFNetAddress, NSObject, NSMutableArray, NSDictionary;

@interface HMFNetService : HMFObject <HMFLogging, NSNetServiceDelegate> {

	HMFUnfairLock* _lock;
	NSString* _type;
	NSString* _name;
	NSString* _domain;
	unsigned long long _port;
	NSArray* _addresses;
	NSMutableDictionary* _TXTRecord;
	NSNetService* _internal;
	BOOL _resolving;
	HMFNetAddress* _hostName;
	id<HMFNetServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _resolveBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * resolveBlocks;                        //@synthesize resolveBlocks=_resolveBlocks - In the implementation block
@property (assign,getter=isResolving,nonatomic) BOOL resolving;                       //@synthesize resolving=_resolving - In the implementation block
@property (nonatomic,readonly) NSNetService * internal;                               //@synthesize internal=_internal - In the implementation block
@property (__weak) id<HMFNetServiceDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long port; 
@property (copy,readonly) HMFNetAddress * hostName;                                   //@synthesize hostName=_hostName - In the implementation block
@property (copy,readonly) NSArray * addresses; 
@property (nonatomic,copy,readonly) NSString * domain;                                //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorFromNetServiceErrorDict:(id)arg1 ;
+(id)logCategory;
+(id)shortDescription;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(HMFNetAddress *)hostName;
-(void)setHostname:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSArray *)addresses;
-(void)updateTXTRecordWithData:(id)arg1 ;
-(void)notifyUpdatedAddresses:(id)arg1 ;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(void)removeAllTXTRecordObjects;
-(id)bestAddress;
-(void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startMonitoring;
-(NSNetService *)internal;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)confirmWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)TXTRecord;
-(void)resolveWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableArray *)resolveBlocks;
-(void)setResolving:(BOOL)arg1 ;
-(BOOL)isResolving;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setDelegate:(id<HMFNetServiceDelegate>)arg1 ;
-(id<HMFNetServiceDelegate>)delegate;
-(NSString *)type;
-(NSString *)domain;
-(id)shortDescription;
-(unsigned long long)port;
@end

