/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASTConnection.h>

@protocol ASTConnectionStatusDelegate;
@class NSMutableURLRequest, NSString, ASTIdentity;

@interface ASTMaterializedConnection : NSObject <ASTConnection> {

	BOOL _retryOnNetworkDisconnected;
	BOOL _allowsCellularAccess;
	/*^block*/id _didReceiveResponse;
	NSMutableURLRequest* _request;
	id<ASTConnectionStatusDelegate> _delegate;
	long long _state;
	long long _networkDisconnectedRetryCount;
	unsigned long long _rootOfTrust;
	NSString* _sessionId;
	NSString* _signature;
	ASTIdentity* _identity;
	double _timeout;

}

@property (assign,nonatomic) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) ASTIdentity * identity;                                       //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSString * signature;                                         //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) double timeout;                                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSString * method; 
@property (nonatomic,readonly) NSString * endpoint; 
@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * accept; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didReceiveResponse;                                          //@synthesize didReceiveResponse=_didReceiveResponse - In the implementation block
@property (nonatomic,readonly) NSMutableURLRequest * request;                              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long networkDisconnectedRetryCount;                      //@synthesize networkDisconnectedRetryCount=_networkDisconnectedRetryCount - In the implementation block
@property (assign,nonatomic) BOOL retryOnNetworkDisconnected;                              //@synthesize retryOnNetworkDisconnected=_retryOnNetworkDisconnected - In the implementation block
@property (nonatomic,readonly) unsigned long long rootOfTrust;                             //@synthesize rootOfTrust=_rootOfTrust - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSString *)signature;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)addBody:(id)arg1 gzip:(BOOL)arg2 ;
-(id)didReceiveResponse;
-(BOOL)retryOnNetworkDisconnected;
-(long long)networkDisconnectedRetryCount;
-(void)setNetworkDisconnectedRetryCount:(long long)arg1 ;
-(unsigned long long)rootOfTrust;
-(void)setDidReceiveResponse:(id)arg1 ;
-(void)setRetryOnNetworkDisconnected:(BOOL)arg1 ;
-(unsigned long long)_rootOfTrust;
-(id)_acceptLanguage;
-(NSString *)accept;
-(id)init;
-(void)setDelegate:(id<ASTConnectionStatusDelegate>)arg1 ;
-(long long)state;
-(id<ASTConnectionStatusDelegate>)delegate;
-(void)setState:(long long)arg1 ;
-(NSMutableURLRequest *)request;
-(NSString *)method;
-(ASTIdentity *)identity;
-(void)setIdentity:(ASTIdentity *)arg1 ;
-(NSString *)endpoint;
@end

