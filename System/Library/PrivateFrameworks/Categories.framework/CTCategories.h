/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CTCategories : NSObject {

	NSString* _indexVersionId;

}

@property (copy,readonly) NSArray * availableCategoryIDs; 
+(id)systemBundleIdentifiers;
+(id)systemUnblockableBundleIdentifiers;
+(id)systemHiddenBundleIdentifiers;
+(id)sharedCategories;
+(id)systemBlockableBundleIdentifiers;
+(void)initialize;
-(void)categoriesForDomainURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_emptySharedCache:(id)arg1 ;
-(void)categoryForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(NSArray *)availableCategoryIDs;
-(void)categoriesForBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)categoriesForDomainNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

