/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	NSDictionary* _buyParameters;
	id _parsedResponse;

}
-(id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 ;
-(id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)execute;
-(void)cancel;
@end
