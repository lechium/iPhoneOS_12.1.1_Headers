/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryArtistMetadata : RadioStationMatchMetadata {

	NSString* _artistName;
	NSNumber* _artistStoreID;
	NSNumber* _representativeCloudID;

}

@property (nonatomic,copy) NSString * artistName;                         //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * artistStoreID;                      //@synthesize artistStoreID=_artistStoreID - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudID;              //@synthesize representativeCloudID=_representativeCloudID - In the implementation block
+(id)metadataKey;
-(NSNumber *)artistStoreID;
-(id)copyMetadataDictionary;
-(NSNumber *)representativeCloudID;
-(void)setArtistStoreID:(NSNumber *)arg1 ;
-(void)setRepresentativeCloudID:(NSNumber *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
@end
