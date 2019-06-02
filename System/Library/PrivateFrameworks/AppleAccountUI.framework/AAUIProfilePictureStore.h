/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class ACAccount, ACAccountStore, AAGrandSlamSigner, CNMonogrammer, NSOperationQueue;

@interface AAUIProfilePictureStore : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	CNMonogrammer* _monogrammer;
	NSOperationQueue* _networkingQueue;
	BOOL _didBeginUsingAddressBookSingleton;
	double _pictureDiameter;
	long long _monogramType;

}

@property (assign,nonatomic) long long pictureStyle; 
@property (assign,nonatomic) double pictureDiameter;              //@synthesize pictureDiameter=_pictureDiameter - In the implementation block
@property (assign,nonatomic) long long monogramType;              //@synthesize monogramType=_monogramType - In the implementation block
+(long long)CNMonogrammerStyleFromAAUIMonogramType:(long long)arg1 ;
+(long long)aauiMonogramTypeForABStyle:(long long)arg1 ;
+(long long)abMonogramStyleForAAUIType:(long long)arg1 ;
-(id)_monogrammer;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(void)setPictureStyle:(long long)arg1 ;
-(void)setPictureDiameter:(double)arg1 ;
-(id)profilePictureForFamilyMember:(id)arg1 ;
-(double)pictureDiameter;
-(id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(void)_invalidateMonogrammer;
-(id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_meCardPicture;
-(void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg1 personID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_meCardRawImageAndCropRect:(/*^block*/id)arg1 ;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)_familyMember:(id)arg1 rawImageAndCropRect:(/*^block*/id)arg2 ;
-(void)_fetchProfilePictureSupersetWithRequest:(id)arg1 personID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)cacheablePictureForPicture:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1 ;
-(id)_familyMemberPersonPicture:(id)arg1 ;
-(void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_monogramContactImage:(id)arg1 ;
-(void*)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMember:(id)arg1 ;
-(id)_monogramPersonImage:(void*)arg1 ;
-(void*)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberEmailAddress:(id)arg1 ;
-(void*)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberFirstAndLastNames:(id)arg1 ;
-(BOOL)_onAddressBookQueue_peopleLinkedToMeCardContainsRecordID:(int)arg1 ;
-(void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2 ;
-(BOOL)_onAddressBookQueue_personSyncsWithiCloud:(void*)arg1 ;
-(void)_updateServerProfilePictureWithRequest:(id)arg1 ;
-(id)_profilePictureForPicture:(id)arg1 crop:(BOOL)arg2 cropRect:(CGRect)arg3 cacheable:(BOOL)arg4 ;
-(void)fetchRawImageAndCropRectForAccountOwner:(/*^block*/id)arg1 ;
-(void)fetchRawImageAndCropRectForFamilyMember:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProfilePictureForAccountOwner:(/*^block*/id)arg1 ;
-(void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2 ;
-(id)profilePictureForPicture:(id)arg1 ;
-(id)profilePictureForPicture:(id)arg1 cropRect:(CGRect)arg2 ;
-(long long)monogramType;
-(id)profilePictureForFamilyMemberWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3 ;
-(void)setProfilePictureForAccountOwner:(id)arg1 ;
-(long long)pictureStyle;
-(id)profilePictureForAccountOwnerWithoutMonogramFallback;
-(id)profilePictureForAccountOwner;
-(id)initWithAppleAccount:(id)arg1 store:(id)arg2 ;
-(void)setMonogramType:(long long)arg1 ;
-(void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_correctlySizedImageFromImage:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

