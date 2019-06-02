/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSDictionary, NSArray, NSDate, NSString, NSData;

@interface CPLMasterChange : CPLItemChange {

	NSDictionary* _resourcePerResourceType;
	short _importedBy;
	short _videoFrameRate;
	NSArray* _resources;
	NSDate* _creationDate;
	NSString* _itemType;
	NSDate* _importDate;
	NSString* _filename;
	NSString* _importGroupIdentifier;
	NSString* _mediaMetaDataType;
	NSData* _mediaMetaData;
	long long _originalOrientation;
	unsigned long long _fullSizeJPEGSource;
	NSString* _originatingFingerprint;
	NSString* _codec;

}

@property (nonatomic,copy) NSArray * resources;                                  //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                  //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) BOOL isImage; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,copy) NSDate * importDate;                                  //@synthesize importDate=_importDate - In the implementation block
@property (nonatomic,copy) NSString * filename;                                  //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * importGroupIdentifier;                     //@synthesize importGroupIdentifier=_importGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaMetaDataType;                         //@synthesize mediaMetaDataType=_mediaMetaDataType - In the implementation block
@property (nonatomic,retain) NSData * mediaMetaData;                             //@synthesize mediaMetaData=_mediaMetaData - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                      //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long fullSizeJPEGSource;              //@synthesize fullSizeJPEGSource=_fullSizeJPEGSource - In the implementation block
@property (nonatomic,copy) NSString * originatingFingerprint;                    //@synthesize originatingFingerprint=_originatingFingerprint - In the implementation block
@property (assign,nonatomic) short importedBy;                                   //@synthesize importedBy=_importedBy - In the implementation block
@property (assign,nonatomic) short videoFrameRate;                               //@synthesize videoFrameRate=_videoFrameRate - In the implementation block
@property (nonatomic,copy) NSString * codec;                                     //@synthesize codec=_codec - In the implementation block
-(short)videoFrameRate;
-(void)setFilename:(NSString *)arg1 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(id)propertiesDescription;
-(long long)dequeueOrder;
-(id)resourceForType:(unsigned long long)arg1 ;
-(void)_copyDerivatives:(unsigned long long*)arg1 count:(int)arg2 ifMatchingResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5 ;
-(BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1 ;
-(void)copyDerivativesFromRecordIfPossible:(id)arg1 ;
-(unsigned long long)dataClassType;
-(BOOL)validateRecordForTracker:(id)arg1 ;
-(BOOL)supportsResources;
-(void)setCodec:(NSString *)arg1 ;
-(long long)originalOrientation;
-(void)setImportedBy:(short)arg1 ;
-(NSString *)codec;
-(void)setOriginalOrientation:(long long)arg1 ;
-(short)importedBy;
-(void)setFullSizeJPEGSource:(unsigned long long)arg1 ;
-(unsigned long long)fullSizeJPEGSource;
-(void)setItemType:(NSString *)arg1 ;
-(void)setMediaMetaData:(NSData *)arg1 ;
-(void)setMediaMetaDataType:(NSString *)arg1 ;
-(void)setOriginatingFingerprint:(NSString *)arg1 ;
-(void)setVideoFrameRate:(short)arg1 ;
-(void)setImportGroupIdentifier:(NSString *)arg1 ;
-(NSData *)mediaMetaData;
-(NSString *)mediaMetaDataType;
-(NSString *)importGroupIdentifier;
-(NSString *)originatingFingerprint;
-(BOOL)isImage;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)itemType;
-(NSDate *)importDate;
-(void)setImportDate:(NSDate *)arg1 ;
-(BOOL)supportsDeletion;
-(id)init;
-(id)name;
-(void)setName:(id)arg1 ;
-(BOOL)isVideo;
-(NSString *)filename;
@end

