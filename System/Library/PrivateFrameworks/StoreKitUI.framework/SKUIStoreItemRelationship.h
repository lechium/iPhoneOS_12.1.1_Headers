/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIStoreIdentifier, NSSet;

@interface SKUIStoreItemRelationship : NSObject {

	SKUIStoreIdentifier* _singleParent;
	NSSet* _chidItems;

}

@property (nonatomic,copy,readonly) SKUIStoreIdentifier * singleParent;              //@synthesize singleParent=_singleParent - In the implementation block
@property (nonatomic,copy,readonly) NSSet * chidItems;                               //@synthesize chidItems=_chidItems - In the implementation block
-(id)initWithParent:(id)arg1 andChildren:(id)arg2 ;
-(SKUIStoreIdentifier *)singleParent;
-(NSSet *)chidItems;
@end

