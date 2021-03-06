/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSString, NSDictionary;

@interface PFVideoComplement : NSObject {

	NSString* _imagePath;
	NSString* _videoPath;
	NSDictionary* _metadata;
	NSString* _originalPairingIdentifier;
	SCD_Struct_PF1 _originalImageDisplayTime;
	SCD_Struct_PF1 _originalVideoDuration;
	BOOL _didReadOriginalMetadata;

}

@property (nonatomic,copy,readonly) NSString * videoPath; 
@property (nonatomic,copy,readonly) NSString * imagePath; 
@property (nonatomic,copy,readonly) NSString * pairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF1 imageDisplayTime; 
@property (nonatomic,copy,readonly) NSString * originalPairingIdentifier; 
@property (nonatomic,readonly) SCD_Struct_PF1 originalImageDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PF1 originalVideoDuration; 
@property (nonatomic,copy,readonly) NSString * videoPath;                              //@synthesize videoPath=_videoPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePath;                              //@synthesize imagePath=_imagePath - In the implementation block
+(id)currentFormatVersion;
-(BOOL)linkOrCopyPath:(id)arg1 toPath:(id)arg2 forceCopy:(BOOL)arg3 error:(id*)arg4 ;
-(NSString *)originalPairingIdentifier;
-(SCD_Struct_PF1)originalImageDisplayTime;
-(void)_readMetadataIfNeeded;
-(SCD_Struct_PF1)imageDisplayTime;
-(SCD_Struct_PF1)originalVideoDuration;
-(id)propertyListRepresentation;
-(id)initWithPropertyList:(id)arg1 ;
-(NSString *)pairingIdentifier;
-(id)initWithBundleAtURL:(id)arg1 ;
-(NSString *)imagePath;
-(id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 ;
-(BOOL)writeToBundleAtURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(SCD_Struct_PF1)arg3 pairingIdentifier:(id)arg4 ;
-(id)init;
-(NSString *)videoPath;
@end

