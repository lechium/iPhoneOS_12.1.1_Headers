/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, FCAssetHandle;


@protocol NUVideoItem <NFCopying>
@property (nonatomic,copy,readonly) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) id<NUAdContextProvider> adContextProvider; 
@property (nonatomic,copy,readonly) NSString * callToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * callToActionURL; 
@property (nonatomic,readonly) FCAssetHandle * nameImageAssetHandle; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * sourceTagID; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@required
-(NSString *)sourceName;
-(NSURL *)videoURL;
-(NSString *)articleID;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isBoundToContext;
-(BOOL)isPaid;
-(FCAssetHandle *)nameImageAssetHandle;
-(NSURL *)callToActionURL;
-(NSString *)sourceTagID;
-(id<NUAdContextProvider>)adContextProvider;
-(NSString *)callToActionTitle;
-(NSString *)title;

@end
