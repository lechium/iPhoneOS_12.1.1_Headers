/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * mimeType; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,copy) NSString * headersText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * requestHeaders; 
@property (nonatomic,copy) NSString * requestHeadersText; 
@property (nonatomic,retain) RWIProtocolNetworkResourceTiming * timing; 
-(NSString *)headersText;
-(NSString *)requestHeadersText;
-(void)setHeadersText:(NSString *)arg1 ;
-(void)setRequestHeadersText:(NSString *)arg1 ;
-(id)initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6 ;
-(NSString *)statusText;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(RWIProtocolNetworkResourceTiming *)timing;
-(void)setTiming:(RWIProtocolNetworkResourceTiming *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(NSString *)mimeType;
@end
