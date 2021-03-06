/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PKPaymentSetupBrowseProductsModel : NSObject {

	NSArray* _products;
	NSArray* _likelyFilteredProducts;
	NSArray* _unlikelyFilteredProducts;
	NSString* _filterString;
	unsigned long long _filterType;
	NSArray* _likelyProductIdentifiers;

}

@property (nonatomic,copy) NSString * filterString;                          //@synthesize filterString=_filterString - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;                  //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) NSArray * likelyProductIdentifiers;               //@synthesize likelyProductIdentifiers=_likelyProductIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * likelyProducts; 
@property (nonatomic,copy,readonly) NSArray * unlikelyProducts; 
@property (nonatomic,copy,readonly) NSArray * unifiedProducts; 
-(void)_updatedFilteredProducts;
-(unsigned long long)numberOfUnlikelyProducts;
-(NSArray *)likelyProductIdentifiers;
-(id)likelyProductAtIndex:(unsigned long long)arg1 ;
-(NSArray *)likelyProducts;
-(id)unlikelyProductAtIndex:(unsigned long long)arg1 ;
-(NSArray *)unlikelyProducts;
-(id)initWithProducts:(id)arg1 ;
-(void)setLikelyProductIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)numberOfLikelyProducts;
-(id)unifiedProductAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUnifiedProducts;
-(NSString *)filterString;
-(unsigned long long)unfilteredCountForType:(unsigned long long)arg1 ;
-(NSArray *)unifiedProducts;
-(void)setFilterString:(NSString *)arg1 ;
-(void)setFilterType:(unsigned long long)arg1 ;
-(unsigned long long)filterType;
@end

