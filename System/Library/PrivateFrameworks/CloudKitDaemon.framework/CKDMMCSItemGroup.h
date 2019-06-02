/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MMCSOperationMetric;
@class NSMutableArray, NSError, NSData, NSArray, NSURL, NSString, CKAssetDownloadPreauthorization;

@interface CKDMMCSItemGroup : NSObject {

	NSMutableArray* _items;
	BOOL _complete;
	NSError* _error;
	id<MMCSOperationMetric> _metrics;
	NSData* _authPutRequest;
	NSArray* _tuple;

}

@property (nonatomic,retain) NSArray * tuple;                                                           //@synthesize tuple=_tuple - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL; 
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,readonly) NSString * requestor; 
@property (nonatomic,retain) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CKAssetDownloadPreauthorization * downloadPreauthorization; 
@property (assign,nonatomic) BOOL complete;                                                             //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) id<MMCSOperationMetric> metrics;                                           //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSData * authPutRequest;                                                   //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                         //@synthesize items=_items - In the implementation block
+(id)tupleForItem:(id)arg1 ;
-(NSString *)requestor;
-(id)CKPropertiesDescription;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(CKAssetDownloadPreauthorization *)downloadPreauthorization;
-(NSArray *)tuple;
-(id)initWithTuple:(id)arg1 ;
-(void)setTuple:(NSArray *)arg1 ;
-(id)description;
-(void)setMetrics:(id<MMCSOperationMetric>)arg1 ;
-(NSArray *)items;
-(BOOL)complete;
-(id<MMCSOperationMetric>)metrics;
-(void)addItem:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(NSString *)owner;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

