/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRadioResponse.h>

@class NSArray;

@interface ICRadioFetchMetadataResponse : ICRadioResponse

@property (nonatomic,copy,readonly) NSArray * allStorePlatformMetadata; 
-(id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:(id)arg1 ;
-(id)storePlatformMetadataForStoreAdamID:(long long)arg1 ;
-(NSArray *)allStorePlatformMetadata;
@end

