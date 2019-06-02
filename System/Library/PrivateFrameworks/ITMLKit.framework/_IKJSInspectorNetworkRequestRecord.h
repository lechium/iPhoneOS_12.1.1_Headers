/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKNetworkRequestRecord.h>

@class NSString, _IKJSInspectorNetworkLoader, NSURLRequest, NSURLResponse, NSData;

@interface _IKJSInspectorNetworkRequestRecord : NSObject <IKNetworkRequestRecord> {

	NSString* _identifier;
	_IKJSInspectorNetworkLoader* _loader;
	long long _resourceType;
	long long _initiatorType;
	NSURLRequest* _URLRequest;
	NSURLResponse* _URLResponse;
	NSData* _responseBodyData;

}

@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) _IKJSInspectorNetworkLoader * loader;               //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) long long resourceType;                                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long initiatorType;                                 //@synthesize initiatorType=_initiatorType - In the implementation block
@property (getter=urlRequest,nonatomic,copy) NSURLRequest * URLRequest;                 //@synthesize URLRequest=_URLRequest - In the implementation block
@property (getter=urlResponse,nonatomic,copy) NSURLResponse * URLResponse;              //@synthesize URLResponse=_URLResponse - In the implementation block
@property (nonatomic,copy) NSData * responseBodyData;                                   //@synthesize responseBodyData=_responseBodyData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_protocolResourceTypeForType:(long long)arg1 ;
-(long long)resourceType;
-(void)didReceiveData:(id)arg1 ;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(id)urlRequest;
-(id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4 ;
-(long long)initiatorType;
-(void)setResponseBodyData:(NSData *)arg1 ;
-(id)urlResponse;
-(NSData *)responseBodyData;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(void)setLoader:(_IKJSInspectorNetworkLoader *)arg1 ;
-(void)willSendRequest:(id)arg1 ;
-(void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3 ;
-(void)didReceiveResponse:(id)arg1 timingData:(id)arg2 ;
-(void)didCompleteLoadingWithResponseBody:(id)arg1 ;
-(_IKJSInspectorNetworkLoader *)loader;
-(void)didFailWithError:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
@end

