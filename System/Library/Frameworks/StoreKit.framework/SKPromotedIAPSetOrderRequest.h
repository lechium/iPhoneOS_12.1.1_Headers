/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSArray* _order;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * order;                   //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(void)_handleReply:(id)arg1 ;
-(id)initWithOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)completionHandler;
-(void)setOrder:(NSArray *)arg1 ;
-(NSArray *)order;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_start;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
@end

