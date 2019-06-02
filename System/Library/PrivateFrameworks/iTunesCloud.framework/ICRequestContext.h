/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICNetworkConstraints, ICClientInfo, ICDeviceInfo, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying> {

	unsigned _allowsMutation : 1;
	ICNetworkConstraints* _networkConstraints;
	ICClientInfo* _clientInfo;
	ICDeviceInfo* _deviceInfo;
	ICURLResponseAuthenticationProvider* _authenticationProvider;

}

@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                                                 //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) ICDeviceInfo * deviceInfo;                                                      //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent; 
@property (nonatomic,copy,readonly) ICURLResponseAuthenticationProvider * authenticationProvider;              //@synthesize authenticationProvider=_authenticationProvider - In the implementation block
@property (nonatomic,copy,readonly) ICNetworkConstraints * networkConstraints;                                 //@synthesize networkConstraints=_networkConstraints - In the implementation block
-(ICClientInfo *)clientInfo;
-(ICNetworkConstraints *)networkConstraints;
-(void)setAuthenticationProvider:(ICURLResponseAuthenticationProvider *)arg1 ;
-(BOOL)_allowsMutation;
-(ICURLResponseAuthenticationProvider *)authenticationProvider;
-(id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2 ;
-(void)setClientInfo:(ICClientInfo *)arg1 ;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(void)setNetworkConstraints:(ICNetworkConstraints *)arg1 ;
-(id)initWithClientInfo:(id)arg1 ;
-(NSString *)userAgent;
-(void)setDeviceInfo:(ICDeviceInfo *)arg1 ;
-(ICDeviceInfo *)deviceInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
