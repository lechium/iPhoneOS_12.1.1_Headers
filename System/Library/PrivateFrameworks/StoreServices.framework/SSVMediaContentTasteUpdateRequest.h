/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding> {

	BOOL _shouldInvalidateLocalCache;
	NSArray* _contentTasteItemUpdates;

}

@property (nonatomic,copy) NSArray * contentTasteItemUpdates;              //@synthesize contentTasteItemUpdates=_contentTasteItemUpdates - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidateLocalCache;              //@synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setContentTasteItemUpdates:(NSArray *)arg1 ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end

