/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL, NSArray;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding> {

	BOOL _familyShared;
	BOOL _firstParty;
	BOOL _hasMessagesExtension;
	BOOL _hidden;
	BOOL _hiddenFromSpringboard;
	BOOL _is32BitOnly;
	BOOL _isPreorder;
	BOOL _supportsIPad;
	BOOL _supportsIPhone;
	unsigned _purchaseToken;
	NSString* _bundleID;
	long long _contentRatingFlags;
	NSDate* _datePurchased;
	NSString* _developerName;
	NSString* _iconURLString;
	NSString* _longTitle;
	NSString* _ovalIconURLString;
	NSURL* _preflightPackageURL;
	NSURL* _productURL;
	long long _purchaserDSID;
	NSString* _redownloadParams;
	NSArray* _requiredCapabilities;
	long long _storeItemID;
	unsigned long long _lockerItemID;

}

@property (copy) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) long long contentRatingFlags;                                    //@synthesize contentRatingFlags=_contentRatingFlags - In the implementation block
@property (copy) NSDate * datePurchased;                                            //@synthesize datePurchased=_datePurchased - In the implementation block
@property (copy) NSString * developerName;                                          //@synthesize developerName=_developerName - In the implementation block
@property (getter=isFamilyShared) BOOL familyShared;                                //@synthesize familyShared=_familyShared - In the implementation block
@property (getter=isFirstParty) BOOL firstParty;                                    //@synthesize firstParty=_firstParty - In the implementation block
@property (assign) BOOL hasMessagesExtension;                                       //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (getter=isHidden) BOOL hidden;                                            //@synthesize hidden=_hidden - In the implementation block
@property (getter=isHiddenFromSpringboard) BOOL hiddenFromSpringboard;              //@synthesize hiddenFromSpringboard=_hiddenFromSpringboard - In the implementation block
@property (copy) NSString * iconURLString;                                          //@synthesize iconURLString=_iconURLString - In the implementation block
@property (assign) BOOL is32BitOnly;                                                //@synthesize is32BitOnly=_is32BitOnly - In the implementation block
@property (assign) BOOL isPreorder;                                                 //@synthesize isPreorder=_isPreorder - In the implementation block
@property (copy) NSString * longTitle;                                              //@synthesize longTitle=_longTitle - In the implementation block
@property (copy) NSString * ovalIconURLString;                                      //@synthesize ovalIconURLString=_ovalIconURLString - In the implementation block
@property (copy) NSURL * preflightPackageURL;                                       //@synthesize preflightPackageURL=_preflightPackageURL - In the implementation block
@property (copy) NSURL * productURL;                                                //@synthesize productURL=_productURL - In the implementation block
@property (assign) long long purchaserDSID;                                         //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (copy) NSString * redownloadParams;                                       //@synthesize redownloadParams=_redownloadParams - In the implementation block
@property (copy) NSArray * requiredCapabilities;                                    //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (assign) long long storeItemID;                                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign) BOOL supportsIPad;                                               //@synthesize supportsIPad=_supportsIPad - In the implementation block
@property (assign) BOOL supportsIPhone;                                             //@synthesize supportsIPhone=_supportsIPhone - In the implementation block
@property (assign) unsigned purchaseToken;                                          //@synthesize purchaseToken=_purchaseToken - In the implementation block
@property (assign) unsigned long long lockerItemID;                                 //@synthesize lockerItemID=_lockerItemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFirstParty:(BOOL)arg1 ;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(BOOL)is32BitOnly;
-(long long)purchaserDSID;
-(void)setStoreItemID:(long long)arg1 ;
-(NSDate *)datePurchased;
-(long long)contentRatingFlags;
-(NSString *)longTitle;
-(NSString *)ovalIconURLString;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(NSString *)redownloadParams;
-(void)setDatePurchased:(NSDate *)arg1 ;
-(BOOL)isPreorder;
-(NSString *)iconURLString;
-(void)setIsPreorder:(BOOL)arg1 ;
-(void)setPurchaserDSID:(long long)arg1 ;
-(BOOL)isFamilyShared;
-(NSURL *)preflightPackageURL;
-(int)_bitfieldForBooleanProperties;
-(void)_setBooleanPropertiesForBitfield:(int)arg1 ;
-(void)setContentRatingFlags:(long long)arg1 ;
-(void)setFamilyShared:(BOOL)arg1 ;
-(void)setHiddenFromSpringboard:(BOOL)arg1 ;
-(void)setIconURLString:(NSString *)arg1 ;
-(void)setIs32BitOnly:(BOOL)arg1 ;
-(void)setLongTitle:(NSString *)arg1 ;
-(void)setOvalIconURLString:(NSString *)arg1 ;
-(void)setPreflightPackageURL:(NSURL *)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(void)setSupportsIPad:(BOOL)arg1 ;
-(void)setSupportsIPhone:(BOOL)arg1 ;
-(unsigned)purchaseToken;
-(void)setPurchaseToken:(unsigned)arg1 ;
-(unsigned long long)lockerItemID;
-(void)setLockerItemID:(unsigned long long)arg1 ;
-(NSURL *)productURL;
-(void)setProductURL:(NSURL *)arg1 ;
-(long long)storeItemID;
-(NSArray *)requiredCapabilities;
-(BOOL)hasMessagesExtension;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(BOOL)isHiddenFromSpringboard;
-(void)setDeveloperName:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isFirstParty;
-(NSString *)developerName;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)bundleID;
@end

