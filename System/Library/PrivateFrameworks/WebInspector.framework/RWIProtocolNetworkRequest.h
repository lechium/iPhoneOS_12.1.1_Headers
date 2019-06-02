/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * method; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * postData; 
-(void)setMethod:(NSString *)arg1 ;
-(id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
-(void)setPostData:(NSString *)arg1 ;
-(NSString *)postData;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)method;
@end

