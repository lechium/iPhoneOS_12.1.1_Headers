/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIResourceRequest : NSObject <NSCopying> {

	id _cacheKey;
	unsigned long long _requestID;

}

@property (nonatomic,readonly) BOOL cachesInMemory; 
@property (nonatomic,retain) id cacheKey;                                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long requestIdentifier;              //@synthesize requestID=_requestID - In the implementation block
-(unsigned long long)requestIdentifier;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestIdentifier:(unsigned long long)arg1 ;
-(id)cacheKey;
-(void)setCacheKey:(id)arg1 ;
@end

