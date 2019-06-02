/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, CLLocation, NSMutableDictionary;

@interface SSVLoadNearbyAppsOperation : NSOperation {

	NSString* _baseURLString;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CLLocation* _location;
	NSMutableDictionary* _parameters;
	/*^block*/id _responseBlock;
	NSString* _storeFrontSuffix;
	NSString* _userAgent;

}

@property (readonly) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (copy) NSString * pointOfInterestIdentifier; 
@property (copy) NSString * pointOfInterestProviderIdentifier; 
@property (copy) NSString * pointOfInterestProviderURL; 
@property (copy) id responseBlock; 
@property (copy) NSString * storeFrontSuffix; 
@property (copy) NSString * userAgent; 
-(id)_storeFrontSuffix;
-(id)_lookupWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithBaseURL:(id)arg1 location:(id)arg2 ;
-(NSString *)pointOfInterestIdentifier;
-(NSString *)pointOfInterestProviderIdentifier;
-(NSString *)pointOfInterestProviderURL;
-(void)setPointOfInterestIdentifier:(NSString *)arg1 ;
-(void)setPointOfInterestProviderIdentifier:(NSString *)arg1 ;
-(void)setPointOfInterestProviderURL:(NSString *)arg1 ;
-(NSString *)storeFrontSuffix;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)main;
-(CLLocation *)location;
@end

