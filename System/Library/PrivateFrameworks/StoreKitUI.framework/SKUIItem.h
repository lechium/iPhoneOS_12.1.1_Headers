/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@protocol SKUIArtworkProviding;
@class NSString, SKUIItemOffer, NSArray, SKUIStoreIdentifier, NSURL, UIImage, NSMutableDictionary;

@interface SKUIItem : NSObject <SKUICacheCoding, SSMetricsEventFieldProvider> {

	NSRange _ageBandRange;
	NSString* _artistName;
	NSString* _bundleID;
	NSString* _categoryName;
	NSString* _collectionName;
	unsigned long long _deviceFamilies;
	NSString* _editorialBage;
	NSString* _feedUrlString;
	long long _itemIdentifier;
	long long _itemKind;
	NSString* _itemKindString;
	SKUIItemOffer* _itemOffer;
	BOOL _newsstandApp;
	BOOL _hasInAppPurchases;
	long long _newsstandBindingEdge;
	long long _newsstandBindingType;
	long long _numberOfChildItems;
	long long _numberOfUserRatings;
	long long _parentalControlsRank;
	BOOL _prerenderedArtwork;
	NSString* _productPageURLString;
	NSArray* _requiredCapabilities;
	SKUIStoreIdentifier* _storeIdentifier;
	NSString* _title;
	float _userRating;
	long long _versionIdentifier;
	NSString* _versionString;
	NSArray* _videos;
	BOOL _hasMessagesExtension;
	BOOL _isHiddenFromSpringBoard;
	BOOL _gameControllerSupported;
	BOOL _requiresGameController;
	id<SKUIArtworkProviding> _artworksProvider;
	NSString* _editorialBadge;
	id<SKUIArtworkProviding> _newsstandArtworks;

}

@property (nonatomic,readonly) NSString * _downloadKind; 
@property (nonatomic,readonly) NSRange ageBandRange;                                              //@synthesize ageBandRange=_ageBandRange - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                                             //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSURL * largestArtworkURL; 
@property (nonatomic,readonly) id<SKUIArtworkProviding> artworksProvider;                         //@synthesize artworksProvider=_artworksProvider - In the implementation block
@property (nonatomic,readonly) UIImage * artworkImage; 
@property (nonatomic,readonly) NSArray * childItemIdentifiers; 
@property (nonatomic,readonly) NSArray * loadedChildItems; 
@property (nonatomic,readonly) long long numberOfChildItems;                                      //@synthesize numberOfChildItems=_numberOfChildItems - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceFamilies;                                 //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (getter=hasPrerenderedArtwork,nonatomic,readonly) BOOL prerenderedArtwork;              //@synthesize prerenderedArtwork=_prerenderedArtwork - In the implementation block
@property (nonatomic,readonly) NSString * categoryName;                                           //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,readonly) NSString * collectionName;                                         //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,readonly) NSString * editorialBadge;                                         //@synthesize editorialBadge=_editorialBadge - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                                          //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long itemKind;                                                //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) NSString * itemKindString;                                         //@synthesize itemKindString=_itemKindString - In the implementation block
@property (nonatomic,readonly) long long numberOfUserRatings;                                     //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (nonatomic,readonly) long long parentalControlsRank;                                    //@synthesize parentalControlsRank=_parentalControlsRank - In the implementation block
@property (nonatomic,readonly) SKUIItemOffer * primaryItemOffer;                                  //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,readonly) NSString * productPageURLString;                                   //@synthesize productPageURLString=_productPageURLString - In the implementation block
@property (nonatomic,readonly) NSArray * requiredCapabilities;                                    //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,copy) SKUIStoreIdentifier * storeIdentifier;                                 //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) float userRating;                                                  //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long versionIdentifier;                                       //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * versionString;                                          //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,readonly) NSArray * videos;                                                  //@synthesize videos=_videos - In the implementation block
@property (nonatomic,readonly) BOOL hasInAppPurchases;                                            //@synthesize hasInAppPurchases=_hasInAppPurchases - In the implementation block
@property (nonatomic,readonly) BOOL hasMessagesExtension;                                         //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,readonly) BOOL isHiddenFromSpringBoard;                                      //@synthesize isHiddenFromSpringBoard=_isHiddenFromSpringBoard - In the implementation block
@property (nonatomic,readonly) BOOL gameControllerSupported;                                      //@synthesize gameControllerSupported=_gameControllerSupported - In the implementation block
@property (nonatomic,readonly) BOOL requiresGameController;                                       //@synthesize requiresGameController=_requiresGameController - In the implementation block
@property (getter=isNewsstandApp,nonatomic,readonly) BOOL newsstandApp;                           //@synthesize newsstandApp=_newsstandApp - In the implementation block
@property (nonatomic,readonly) long long newsstandBindingEdge;                                    //@synthesize newsstandBindingEdge=_newsstandBindingEdge - In the implementation block
@property (nonatomic,readonly) long long newsstandBindingType;                                    //@synthesize newsstandBindingType=_newsstandBindingType - In the implementation block
@property (nonatomic,readonly) id<SKUIArtworkProviding> newsstandArtworks;                        //@synthesize newsstandArtworks=_newsstandArtworks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(NSString *)collectionName;
-(long long)versionIdentifier;
-(NSString *)productPageURLString;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)lookupDictionary;
-(long long)parentalControlsRank;
-(SKUIItemOffer *)primaryItemOffer;
-(long long)itemKind;
-(NSArray *)requiredCapabilities;
-(NSString *)artistName;
-(NSString *)_downloadKind;
-(BOOL)isNewsstandApp;
-(BOOL)hasPrerenderedArtwork;
-(BOOL)hasMessagesExtension;
-(id)artworkURLForSize:(long long)arg1 ;
-(NSArray *)childItemIdentifiers;
-(NSArray *)loadedChildItems;
-(unsigned long long)deviceFamilies;
-(id<SKUIArtworkProviding>)artworksProvider;
-(NSString *)categoryName;
-(NSRange)ageBandRange;
-(BOOL)hasInAppPurchases;
-(NSString *)itemKindString;
-(long long)numberOfChildItems;
-(long long)numberOfUserRatings;
-(float)userRating;
-(id<SKUIArtworkProviding>)newsstandArtworks;
-(id)valueForMetricsField:(id)arg1 ;
-(id)initContainerItemWithItem:(id)arg1 ;
-(UIImage *)artworkImage;
-(id)childItemForIdentifier:(id)arg1 ;
-(NSURL *)largestArtworkURL;
-(void)setItemKind:(long long)arg1 ;
-(void)addItemOfferParameterWithName:(id)arg1 value:(id)arg2 ;
-(void)_setHasInAppPurchases:(BOOL)arg1 ;
-(NSString *)editorialBadge;
-(NSArray *)videos;
-(BOOL)isHiddenFromSpringBoard;
-(BOOL)gameControllerSupported;
-(BOOL)requiresGameController;
-(long long)newsstandBindingEdge;
-(long long)newsstandBindingType;
-(SKUIStoreIdentifier *)storeIdentifier;
-(NSString *)versionString;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

