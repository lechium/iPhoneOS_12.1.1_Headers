/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreFileAssetInfo, NSURL, NSString, NSArray, NSData;

@interface MPStoreFileAssetInfo : NSObject {

	ICStoreFileAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * assetURL; 
@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSArray * fairPlayInfoList; 
@property (nonatomic,readonly) long long flavorType; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,copy,readonly) NSData * md5; 
@property (nonatomic,readonly) long long protectionType; 
-(long long)protectionType;
-(NSString *)downloadKey;
-(NSArray *)fairPlayInfoList;
-(long long)flavorType;
-(NSData *)md5;
-(id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1 ;
-(NSURL *)assetURL;
-(NSString *)fileExtension;
-(unsigned long long)fileSize;
@end

