/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItem.h>

@class NSURL, NSArray, SKUIItemContentRating, NSString, SKUIDeveloperInfo, NSMutableDictionary, SKUIStoreNotes;

@interface SKUIProductPageItem : SKUIItem {

	NSURL* _artistPageURL;
	NSArray* _childItemIdentifiers;
	SKUIItemContentRating* _contentRating;
	NSString* _copyrightString;
	SKUIDeveloperInfo* _developerInfo;
	NSArray* _inAppPurchases;
	NSString* _installationRequirementsDescription;
	NSString* _itemDescription;
	NSString* _lastUpdateDateString;
	NSString* _licenseAgreementURLString;
	NSMutableDictionary* _loadedChildItems;
	NSArray* _parentBundleItemIdentifiers;
	NSString* _privacyPolicyURLString;
	NSString* _regularPriceString;
	NSArray* _releaseNotes;
	NSString* _reviewsURLString;
	NSArray* _screenshots;
	NSArray* _secondaryContentRatings;
	NSString* _sellerName;
	NSString* _shortenedProductPageURLString;
	SKUIStoreNotes* _storeNotes;
	long long _supportedFeatures;
	unsigned long long _supportedGameCenterFeatures;
	NSString* _supportURLString;
	NSString* _updateDescription;

}

@property (nonatomic,readonly) NSURL * artistPageURL;                                       //@synthesize artistPageURL=_artistPageURL - In the implementation block
@property (nonatomic,readonly) SKUIItemContentRating * contentRating;                       //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSString * copyrightString;                                  //@synthesize copyrightString=_copyrightString - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;                           //@synthesize developerInfo=_developerInfo - In the implementation block
@property (nonatomic,readonly) NSArray * inAppPurchases;                                    //@synthesize inAppPurchases=_inAppPurchases - In the implementation block
@property (nonatomic,readonly) NSString * installationRequirementsDescription;              //@synthesize installationRequirementsDescription=_installationRequirementsDescription - In the implementation block
@property (nonatomic,readonly) NSString * itemDescription;                                  //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSString * lastUpdateDateString;                             //@synthesize lastUpdateDateString=_lastUpdateDateString - In the implementation block
@property (nonatomic,readonly) NSString * licenseAgreementURLString;                        //@synthesize licenseAgreementURLString=_licenseAgreementURLString - In the implementation block
@property (nonatomic,readonly) NSArray * parentBundleItemIdentifiers;                       //@synthesize parentBundleItemIdentifiers=_parentBundleItemIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * privacyPolicyURLString;                           //@synthesize privacyPolicyURLString=_privacyPolicyURLString - In the implementation block
@property (nonatomic,readonly) NSString * regularPriceString;                               //@synthesize regularPriceString=_regularPriceString - In the implementation block
@property (nonatomic,readonly) NSArray * releaseNotes;                                      //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,readonly) NSString * reviewsURLString;                                 //@synthesize reviewsURLString=_reviewsURLString - In the implementation block
@property (nonatomic,readonly) NSArray * screenshots;                                       //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryContentRatings;                           //@synthesize secondaryContentRatings=_secondaryContentRatings - In the implementation block
@property (nonatomic,readonly) NSString * sellerName;                                       //@synthesize sellerName=_sellerName - In the implementation block
@property (nonatomic,readonly) NSString * shortenedProductPageURLString;                    //@synthesize shortenedProductPageURLString=_shortenedProductPageURLString - In the implementation block
@property (nonatomic,readonly) SKUIStoreNotes * storeNotes;                                 //@synthesize storeNotes=_storeNotes - In the implementation block
@property (nonatomic,readonly) long long supportedFeatures;                                 //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedGameCenterFeatures;              //@synthesize supportedGameCenterFeatures=_supportedGameCenterFeatures - In the implementation block
@property (nonatomic,readonly) NSString * supportURLString;                                 //@synthesize supportURLString=_supportURLString - In the implementation block
@property (nonatomic,readonly) NSString * updateDescription;                                //@synthesize updateDescription=_updateDescription - In the implementation block
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)childItemIdentifiers;
-(id)loadedChildItems;
-(long long)numberOfChildItems;
-(id)childItemForIdentifier:(id)arg1 ;
-(SKUIDeveloperInfo *)developerInfo;
-(NSArray *)screenshots;
-(SKUIStoreNotes *)storeNotes;
-(NSString *)itemDescription;
-(NSString *)updateDescription;
-(NSArray *)inAppPurchases;
-(NSArray *)releaseNotes;
-(NSString *)copyrightString;
-(unsigned long long)supportedGameCenterFeatures;
-(NSArray *)parentBundleItemIdentifiers;
-(NSString *)lastUpdateDateString;
-(SKUIItemContentRating *)contentRating;
-(NSArray *)secondaryContentRatings;
-(NSURL *)artistPageURL;
-(NSString *)regularPriceString;
-(NSString *)sellerName;
-(NSString *)installationRequirementsDescription;
-(void)_setVersionHistory:(id)arg1 ;
-(void)_setInAppPurchases:(id)arg1 ;
-(NSString *)licenseAgreementURLString;
-(NSString *)privacyPolicyURLString;
-(NSString *)reviewsURLString;
-(NSString *)shortenedProductPageURLString;
-(NSString *)supportURLString;
-(long long)supportedFeatures;
@end

