/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSURLSessionAppleIDContext;
@class NSString, NSURL, NSData, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, NSDictionary, NSSet, NSArray;

@interface __NSCFURLSessionConfiguration : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _requestCachePolicy;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _networkServiceType;
	NSString* _sharedContainerIdentifier;
	id _connectionProxyDictionary;
	int _TLSMinimumSupportedProtocol;
	int _TLSMaximumSupportedProtocol;
	unsigned long long _HTTPCookieAcceptPolicy;
	id _HTTPAdditionalHeaders;
	long long _HTTPMaximumConnectionsPerHost;
	id _protocolClasses;
	long long _multipathServiceType;
	BOOL _allowsCellularAccess;
	BOOL _waitsForConnectivity;
	BOOL _discretionary;
	BOOL _sessionSendsLaunchEvents;
	BOOL _HTTPShouldUsePipelining;
	BOOL _HTTPShouldSetCookies;
	BOOL _shouldUseExtendedBackgroundIdleMode;
	BOOL _requiresPowerPluggedIn;
	NSURL* _directoryForDownloadedFiles;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSData* _sourceApplicationAuditTokenData;
	unsigned long long _TCPAdaptiveReadTimeout;
	unsigned long long _TCPAdaptiveWriteTimeout;
	long long _timingDataOptions;
	NSString* _ledBellyServiceIdentifier;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSData* _atsContext;
	double _connectionCachePurgeTimeout;
	double _connectionCacheCellPurgeTimeout;
	double _longLivedConnectionCachePurgeTimeout;
	double _longLivedConnectionCacheCellPurgeTimeout;
	NSString* _connectionPoolName;
	NSString* _CTDataConnectionServiceType;
	NSString* _tlsTrustPinningPolicyName;
	unsigned long long _customReadBufferSize;
	double _customReadBufferTimeout;
	BOOL _allowsExpensiveAccess;
	BOOL _allowsPowerNapScheduling;
	BOOL _preventsIdleSleepOnceConnected;
	BOOL _sessionSendsLaunchOnDemandEvents;
	BOOL _collectsTimingData;
	BOOL _shouldSkipPreferredClientCertificateLookup;
	BOOL _allowsRetryForBackgroundDataTasks;
	BOOL _onBehalfOfPairedDevice;
	BOOL _clientIsNotExplicitlyDiscretionary;
	BOOL _respectsAllowsCellularAccessForDiscretionaryTasks;
	BOOL _overridesBackgroundSessionAutoRedirect;
	BOOL _performsEVCertCheck;
	BOOL _infersDiscretionaryFromOriginatingClient;
	BOOL _prefersInfraWiFi;
	BOOL _allowsMultipathTCP;
	BOOL _allowsResponseMonitoringDuringBodyTranmission;
	BOOL _allowsIndefiniteConnections;
	BOOL _allowsTCPFastOpen;
	BOOL _allowsTLSSessionTickets;
	BOOL _allowsTLSSessionResumption;
	BOOL _preventsDirectWiFiAccess;
	BOOL _allowTCPIOConnectionStreamTask;
	BOOL _preventsSystemHTTPProxyAuthentication;
	BOOL _requiresSecureHTTPSProxyConnection;
	BOOL _duetPreauthorized;
	BOOL _requiresSustainedDataDelivery;
	BOOL _ignoreDidReceiveResponseDisposition;
	BOOL _alwaysPerformDefaultTrustEvaluation;
	NSString* _disposition;
	NSURLCredentialStorage* _phskip_credStorage;
	NSURLCache* _phskip_urlCache;
	NSHTTPCookieStorage* _phskip_cookieStorage;
	CFHSTSPolicyRef _phskip_hstsStorage;
	long long _pipeliningHighWatermark;
	long long _pipeliningLowWatermark;
	long long _numPriorityLevels;
	long long _numFastLanes;
	long long _minimumFastLanePriority;
	long long _IDSMessageTimeout;
	NSString* _tcpConnectionPoolName;
	NSDictionary* _socketStreamProperties;
	NSString* _tlsCachePrefix;
	NSSet* _authenticatorStatusCodes;
	NSArray* _contentDispHeadEncFallback;
	NSString* _companionAppBundleIdentifier;
	NSString* _watchAppBundleIdentifier;
	NSString* _watchExtensionBundleIdentifier;
	unsigned long long _forcedNetworkServiceType;
	NSDictionary* _overriddenDelegateOptions;
	NSSet* _suppressedAutoAddedHTTPHeaders;
	long long _expiredDNSBehavior;
	BOOL _backgroundSession;
	BOOL _phskip_hstsStorageSet;
	BOOL _phskip_cookieStorageSet;
	BOOL _phskip_urlCacheSet;
	BOOL _phskip_credStorageSet;
	BOOL _skip_download_unlink;
	BOOL _requiresClientToOpenFiles;
	BOOL _forcesNewConnections;
	BOOL _supportsAVAssetDownloads;
	BOOL _proxySession;
	BOOL _disallowsSPDY;
	BOOL _preventsIdleSleep;
	BOOL _usePipeliningHeuristics;
	BOOL _shouldPreserveBackgroundSessionDisposition;
	BOOL _disablesOutOfProcessDirectWiFiUsage;
	BOOL _disablesUseOfProxySession;

}
+(BOOL)supportsSecureCoding;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(id)HTTPCookieStorage;
-(id)URLCredentialStorage;
-(BOOL)waitsForConnectivity;
-(id)_directoryForDownloadedFiles;
-(BOOL)_requiresClientToOpenFiles;
-(BOOL)skip_download_unlink;
-(BOOL)isBackgroundSession;
-(void)set_allowsTLSSessionResumption:(BOOL)arg1 ;
-(void)setTLSMaximumSupportedProtocol:(int)arg1 ;
-(void)set_tlsTrustPinningPolicyName:(id)arg1 ;
-(void)set_connectionCachePurgeTimeout:(double)arg1 ;
-(BOOL)_collectsTimingData;
-(BOOL)_isProxySession;
-(id)HTTPAdditionalHeaders;
-(void)setHTTPAdditionalHeaders:(id)arg1 ;
-(id)sharedContainerIdentifier;
-(id)_overriddenDelegateOptions;
-(void)set_tlsCachePrefix:(id)arg1 ;
-(BOOL)_allowsRetryForBackgroundDataTasks;
-(id)_tlsCachePrefix;
-(BOOL)HTTPShouldSetCookies;
-(unsigned long long)HTTPCookieAcceptPolicy;
-(BOOL)_supportsAVAssetDownloads;
-(BOOL)_overridesBackgroundSessionAutoRedirect;
-(BOOL)_allowTCPIOConnectionStreamTask;
-(void)set_allowsTCPFastOpen:(BOOL)arg1 ;
-(void)set_allowTCPIOConnectionStreamTask:(BOOL)arg1 ;
-(int)TLSMaximumSupportedProtocol;
-(int)TLSMinimumSupportedProtocol;
-(void)setTLSMinimumSupportedProtocol:(int)arg1 ;
-(unsigned long long)_TCPAdaptiveReadTimeout;
-(void)set_TCPAdaptiveReadTimeout:(unsigned long long)arg1 ;
-(unsigned long long)_TCPAdaptiveWriteTimeout;
-(void)set_TCPAdaptiveWriteTimeout:(unsigned long long)arg1 ;
-(void)set_atsContext:(id)arg1 ;
-(id)_atsContext;
-(void)set_supportsAVAssetDownloads:(BOOL)arg1 ;
-(id)_appleIDContext;
-(void)set_authenticatorStatusCodes:(id)arg1 ;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_copyCFCookieStorage;
-(id)_ledBellyServiceIdentifier;
-(void)set_ledBellyServiceIdentifier:(id)arg1 ;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(BOOL)_requiresSustainedDataDelivery;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(BOOL)_alwaysPerformDefaultTrustEvaluation;
-(id)_socketStreamProperties;
-(BOOL)HTTPShouldUsePipelining;
-(BOOL)_allowsPowerNapScheduling;
-(id)_tcpConnectionPoolName;
-(BOOL)_preventsIdleSleepOnceConnected;
-(BOOL)_forcesNewConnections;
-(BOOL)shouldUseExtendedBackgroundIdleMode;
-(BOOL)_allowsMultipathTCP;
-(BOOL)_allowsResponseMonitoringDuringBodyTranmission;
-(BOOL)_allowsIndefiniteConnections;
-(BOOL)_allowsTLSSessionResumption;
-(id)_tlsTrustPinningPolicyName;
-(unsigned long long)_customReadBufferSize;
-(double)_customReadBufferTimeout;
-(unsigned long long)_forcedNetworkServiceType;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(void)set_longLivedConnectionCachePurgeTimeout:(double)arg1 ;
-(void)set_longLivedConnectionCacheCellPurgeTimeout:(double)arg1 ;
-(id)_authenticatorStatusCodes;
-(long long)_expiredDNSBehavior;
-(id)initWithDisposition:(id)arg1 ;
-(void)set_phskip_hstsStorage:(CFHSTSPolicyRef)arg1 ;
-(CFHSTSPolicyRef)_phskip_hstsStorage;
-(void)set_phskip_hstsStorageSet:(BOOL)arg1 ;
-(void)setBackgroundSession:(BOOL)arg1 ;
-(void)set_proxySession:(BOOL)arg1 ;
-(void)set_preventsDirectWiFiAccess:(BOOL)arg1 ;
-(id)_phskip_cookieStorage;
-(void)set_phskip_cookieStorage:(id)arg1 ;
-(id)_phskip_urlCache;
-(void)set_phskip_urlCache:(id)arg1 ;
-(id)_phskip_credStorage;
-(void)set_phskip_credStorage:(id)arg1 ;
-(void)setSharedContainerIdentifier:(id)arg1 ;
-(BOOL)sessionSendsLaunchEvents;
-(BOOL)_sessionSendsLaunchOnDemandEvents;
-(void)set_sessionSendsLaunchOnDemandEvents:(BOOL)arg1 ;
-(void)set_collectsTimingData:(BOOL)arg1 ;
-(BOOL)_onBehalfOfPairedDevice;
-(void)set_onBehalfOfPairedDevice:(BOOL)arg1 ;
-(BOOL)_clientIsNotExplicitlyDiscretionary;
-(void)set_clientIsNotExplicitlyDiscretionary:(BOOL)arg1 ;
-(BOOL)_respectsAllowsCellularAccessForDiscretionaryTasks;
-(void)set_respectsAllowsCellularAccessForDiscretionaryTasks:(BOOL)arg1 ;
-(BOOL)_infersDiscretionaryFromOriginatingClient;
-(void)setSkip_download_unlink:(BOOL)arg1 ;
-(void)set_requiresClientToOpenFiles:(BOOL)arg1 ;
-(void)set_forcesNewConnections:(BOOL)arg1 ;
-(BOOL)_preventsIdleSleep;
-(void)set_preventsIdleSleep:(BOOL)arg1 ;
-(BOOL)_disallowsSPDY;
-(void)set_disallowsSPDY:(BOOL)arg1 ;
-(BOOL)_usePipeliningHeuristics;
-(void)set_usePipeliningHeuristics:(BOOL)arg1 ;
-(void)setShouldUseExtendedBackgroundIdleMode:(BOOL)arg1 ;
-(void)set_directoryForDownloadedFiles:(id)arg1 ;
-(double)_connectionCachePurgeTimeout;
-(double)_connectionCacheCellPurgeTimeout;
-(double)_longLivedConnectionCachePurgeTimeout;
-(double)_longLivedConnectionCacheCellPurgeTimeout;
-(id)_connectionPoolName;
-(void)set_connectionPoolName:(id)arg1 ;
-(long long)pipeliningHighWatermark;
-(void)setPipeliningHighWatermark:(long long)arg1 ;
-(long long)pipeliningLowWatermark;
-(void)setPipeliningLowWatermark:(long long)arg1 ;
-(long long)numPriorityLevels;
-(void)setNumPriorityLevels:(long long)arg1 ;
-(long long)numFastLanes;
-(void)setNumFastLanes:(long long)arg1 ;
-(long long)minimumFastLanePriority;
-(void)setMinimumFastLanePriority:(long long)arg1 ;
-(void)set_tcpConnectionPoolName:(id)arg1 ;
-(id)_contentDispHeadEncFallback;
-(void)set_contentDispHeadEncFallback:(id)arg1 ;
-(void)set_preventsIdleSleepOnceConnected:(BOOL)arg1 ;
-(BOOL)_performsEVCertCheck;
-(BOOL)_prefersInfraWiFi;
-(void)set_prefersInfraWiFi:(BOOL)arg1 ;
-(BOOL)_shouldPreserveBackgroundSessionDisposition;
-(void)set_shouldPreserveBackgroundSessionDisposition:(BOOL)arg1 ;
-(BOOL)_disablesOutOfProcessDirectWiFiUsage;
-(void)set_disablesOutOfProcessDirectWiFiUsage:(BOOL)arg1 ;
-(BOOL)_disablesUseOfProxySession;
-(void)set_disablesUseOfProxySession:(BOOL)arg1 ;
-(BOOL)_preventsDirectWiFiAccess;
-(void)set_customReadBufferSize:(unsigned long long)arg1 ;
-(void)set_customReadBufferTimeout:(double)arg1 ;
-(BOOL)_duetPreauthorized;
-(void)set_duetPreauthorized:(BOOL)arg1 ;
-(void)set_requiresSustainedDataDelivery:(BOOL)arg1 ;
-(long long)_IDSMessageTimeout;
-(void)set_IDSMessageTimeout:(long long)arg1 ;
-(BOOL)_ignoreDidReceiveResponseDisposition;
-(void)set_ignoreDidReceiveResponseDisposition:(BOOL)arg1 ;
-(void)set_alwaysPerformDefaultTrustEvaluation:(BOOL)arg1 ;
-(void)set_allowsMultipathTCP:(BOOL)arg1 ;
-(void)set_allowsResponseMonitoringDuringBodyTranmission:(BOOL)arg1 ;
-(void)set_allowsIndefiniteConnections:(BOOL)arg1 ;
-(id)_companionAppBundleIdentifier;
-(void)set_companionAppBundleIdentifier:(id)arg1 ;
-(id)_watchAppBundleIdentifier;
-(void)set_watchAppBundleIdentifier:(id)arg1 ;
-(id)_watchExtensionBundleIdentifier;
-(void)set_watchExtensionBundleIdentifier:(id)arg1 ;
-(void)set_forcedNetworkServiceType:(unsigned long long)arg1 ;
-(void)set_overriddenDelegateOptions:(id)arg1 ;
-(void)set_expiredDNSBehavior:(long long)arg1 ;
-(void)setHSTSPolicy:(CFHSTSPolicyRef)arg1 ;
-(BOOL)_phskip_credStorageSet;
-(BOOL)_phskip_urlCacheSet;
-(BOOL)_phskip_cookieStorageSet;
-(BOOL)_phskip_hstsStorageSet;
-(void)set_phskip_credStorageSet:(BOOL)arg1 ;
-(void)set_phskip_urlCacheSet:(BOOL)arg1 ;
-(void)set_phskip_cookieStorageSet:(BOOL)arg1 ;
-(void)setMultipathServiceType:(long long)arg1 ;
-(long long)multipathServiceType;
-(unsigned long long)networkServiceType;
-(BOOL)allowsCellularAccess;
-(BOOL)_requiresPowerPluggedIn;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setSessionSendsLaunchEvents:(BOOL)arg1 ;
-(void)set_allowsTLSSessionTickets:(BOOL)arg1 ;
-(void)set_allowsExpensiveAccess:(BOOL)arg1 ;
-(void)set_requiresPowerPluggedIn:(BOOL)arg1 ;
-(BOOL)_allowsTLSSessionTickets;
-(BOOL)_allowsExpensiveAccess;
-(BOOL)isDiscretionary;
-(id)connectionProxyDictionary;
-(BOOL)_allowsTCPFastOpen;
-(id)_sourceApplicationBundleIdentifier;
-(id)_sourceApplicationAuditTokenData;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)set_sourceApplicationAuditTokenData:(id)arg1 ;
-(void)set_sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)setConnectionProxyDictionary:(id)arg1 ;
-(void)set_requiresSecureHTTPSProxyConnection:(BOOL)arg1 ;
-(void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1 ;
-(void)set_infersDiscretionaryFromOriginatingClient:(BOOL)arg1 ;
-(id)protocolClasses;
-(id)_suppressedAutoAddedHTTPHeaders;
-(void)set_suppressedAutoAddedHTTPHeaders:(id)arg1 ;
-(void)set_socketStreamProperties:(id)arg1 ;
-(void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1 ;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(void)setURLCache:(id)arg1 ;
-(double)timeoutIntervalForResource;
-(void)set_sourceApplicationSecondaryIdentifier:(id)arg1 ;
-(void)set_CTDataConnectionServiceType:(id)arg1 ;
-(id)_sourceApplicationSecondaryIdentifier;
-(id)_CTDataConnectionServiceType;
-(void)set_appleIDContext:(id)arg1 ;
-(long long)HTTPMaximumConnectionsPerHost;
-(unsigned long long)requestCachePolicy;
-(void)set_overridesBackgroundSessionAutoRedirect:(BOOL)arg1 ;
-(void)set_performsEVCertCheck:(BOOL)arg1 ;
-(id)disposition;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(long long)_timingDataOptions;
-(void)set_timingDataOptions:(long long)arg1 ;
-(double)timeoutIntervalForRequest;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)setProtocolClasses:(id)arg1 ;
-(void)setWaitsForConnectivity:(BOOL)arg1 ;
-(void)set_allowsPowerNapScheduling:(BOOL)arg1 ;
-(void)set_allowsRetryForBackgroundDataTasks:(BOOL)arg1 ;
-(void)setHTTPCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)setHTTPCookieStorage:(id)arg1 ;
-(void)setHTTPShouldSetCookies:(BOOL)arg1 ;
-(void)setURLCredentialStorage:(id)arg1 ;
-(id)URLCache;
-(void)setHTTPMaximumConnectionsPerHost:(long long)arg1 ;
-(void)setRequestCachePolicy:(unsigned long long)arg1 ;
-(void)setDisposition:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(id)arg1 ;
@end

