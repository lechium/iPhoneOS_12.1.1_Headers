/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTaskTransactionMetrics.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLRequest, NSURLResponse, NSDate, NSString, NSUUID;

@interface __NSCFURLSessionTaskTransactionMetrics : NSURLSessionTaskTransactionMetrics <NSSecureCoding> {

	NSURLRequest* _request;
	NSURLResponse* _response;
	NSDate* _fetchStartDate;
	NSDate* _domainLookupStartDate;
	NSDate* _domainLookupEndDate;
	NSDate* _connectStartDate;
	NSDate* _connectEndDate;
	NSDate* _secureConnectionStartDate;
	NSDate* _secureConnectionEndDate;
	NSDate* _requestStartDate;
	NSDate* _requestEndDate;
	NSDate* _responseStartDate;
	NSDate* _responseEndDate;
	NSString* _networkProtocolName;
	BOOL _proxyConnection;
	BOOL _reusedConnection;
	long long _resourceFetchType;
	BOOL __secureConnection;
	BOOL __localCache;
	BOOL __serverPush;
	BOOL __connectionRace;
	BOOL __cellular;
	unsigned __redirected;
	NSString* __localAddressAndPort;
	NSString* __remoteAddressAndPort;
	NSUUID* __connectionIdentifier;
	long long __requestHeaderBytesSent;
	long long __responseHeaderBytesReceived;
	long long __responseBodyBytesReceived;
	long long __responseBodyBytesDecoded;
	BOOL __apsRelayAttempted;
	BOOL __apsRelaySucceeded;
	long long __totalBytesSent;
	long long __totalBytesReceived;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isReusedConnection;
-(unsigned)_redirected;
-(long long)_totalBytesSent;
-(long long)_totalBytesReceived;
-(id)_initWithPerformanceTiming:(PerformanceTimingRef)arg1 ;
-(void)setFetchStartDate:(id)arg1 ;
-(void)setDomainLookupStartDate:(id)arg1 ;
-(void)setDomainLookupEndDate:(id)arg1 ;
-(void)setConnectStartDate:(id)arg1 ;
-(void)setConnectEndDate:(id)arg1 ;
-(void)setSecureConnectionStartDate:(id)arg1 ;
-(void)setSecureConnectionEndDate:(id)arg1 ;
-(void)setRequestStartDate:(id)arg1 ;
-(void)setRequestEndDate:(id)arg1 ;
-(void)setResponseStartDate:(id)arg1 ;
-(void)setResponseEndDate:(id)arg1 ;
-(void)set_localAddressAndPort:(id)arg1 ;
-(void)set_remoteAddressAndPort:(id)arg1 ;
-(void)set_connectionIdentifier:(id)arg1 ;
-(void)set_secureConnection:(BOOL)arg1 ;
-(void)set_localCache:(BOOL)arg1 ;
-(void)set_serverPush:(BOOL)arg1 ;
-(void)set_connectionRace:(BOOL)arg1 ;
-(void)set_cellular:(BOOL)arg1 ;
-(void)set_redirected:(unsigned)arg1 ;
-(BOOL)_serverPush;
-(BOOL)_localCache;
-(void)set_requestHeaderBytesSent:(long long)arg1 ;
-(void)set_responseHeaderBytesReceived:(long long)arg1 ;
-(void)set_responseBodyBytesReceived:(long long)arg1 ;
-(void)set_responseBodyBytesDecoded:(long long)arg1 ;
-(void)set_apsRelayAttempted:(BOOL)arg1 ;
-(void)set_apsRelaySucceeded:(BOOL)arg1 ;
-(void)set_totalBytesSent:(long long)arg1 ;
-(void)set_totalBytesReceived:(long long)arg1 ;
-(id)_localAddressAndPort;
-(BOOL)_secureConnection;
-(BOOL)_connectionRace;
-(BOOL)_cellular;
-(void)setNetworkProtocolName:(id)arg1 ;
-(void)setProxyConnection:(BOOL)arg1 ;
-(void)setReusedConnection:(BOOL)arg1 ;
-(long long)resourceFetchType;
-(void)setResourceFetchType:(long long)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)setResponse:(id)arg1 ;
-(id)fetchStartDate;
-(id)domainLookupStartDate;
-(id)domainLookupEndDate;
-(id)connectStartDate;
-(id)connectEndDate;
-(id)secureConnectionStartDate;
-(id)secureConnectionEndDate;
-(id)requestStartDate;
-(id)requestEndDate;
-(id)responseStartDate;
-(id)responseEndDate;
-(BOOL)isProxyConnection;
-(id)networkProtocolName;
-(id)_remoteAddressAndPort;
-(BOOL)_apsRelayAttempted;
-(BOOL)_apsRelaySucceeded;
-(id)_connectionIdentifier;
-(long long)_requestHeaderBytesSent;
-(long long)_responseHeaderBytesReceived;
-(long long)_responseBodyBytesReceived;
-(long long)_responseBodyBytesDecoded;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)request;
-(id)response;
@end

