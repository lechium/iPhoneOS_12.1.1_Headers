/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSArray;

@interface MPStoreModelRequestConfiguration : NSObject {

	NSURLRequest* _URLRequest;
	NSArray* _requestedItemIdentifiers;
	unsigned long long _itemMetadataRequestReason;
	long long _type;

}

@property (nonatomic,readonly) NSURLRequest * URLRequest;                                 //@synthesize URLRequest=_URLRequest - In the implementation block
@property (nonatomic,readonly) NSArray * requestedItemIdentifiers;                        //@synthesize requestedItemIdentifiers=_requestedItemIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long itemMetadataRequestReason;              //@synthesize itemMetadataRequestReason=_itemMetadataRequestReason - In the implementation block
@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
-(id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 ;
-(NSArray *)requestedItemIdentifiers;
-(unsigned long long)itemMetadataRequestReason;
-(id)initWithURLRequest:(id)arg1 ;
-(NSURLRequest *)URLRequest;
-(long long)type;
@end

