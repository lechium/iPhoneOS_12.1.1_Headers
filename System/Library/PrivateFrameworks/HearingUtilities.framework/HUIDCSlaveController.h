/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUtilities/HearingUtilities-Structs.h>
#import <HearingUtilities/HUIDCRemoteController.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class AXDispatchTimer, NSString;

@interface HUIDCSlaveController : HUIDCRemoteController <NSNetServiceDelegate> {

	AXDispatchTimer* _resolveTimer;
	CFSocketRef _ipv4socket;
	CFSocketRef _ipv6socket;
	BOOL _isVisible;
	double _searchTimeout;
	/*^block*/id _searchCompletion;
	NSString* _serviceType;

}

@property (nonatomic,copy) id searchCompletion;                     //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) double searchTimeout;                  //@synthesize searchTimeout=_searchTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)setSearchTimeout:(double)arg1 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSlave;
-(BOOL)shouldAcceptConnection;
-(void)acceptConnection:(int)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)resetConnection;
-(id)searchCompletion;
-(void)setSearchCompletion:(id)arg1 ;
-(void)dealloc;
-(BOOL)initialize;
-(BOOL)isVisible;
-(BOOL)setVisible:(BOOL)arg1 ;
-(double)searchTimeout;
@end

