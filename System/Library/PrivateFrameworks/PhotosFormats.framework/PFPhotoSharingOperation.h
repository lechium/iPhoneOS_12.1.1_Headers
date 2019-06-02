/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError, NSURL, NSString, PFAssetAdjustments;

@interface PFPhotoSharingOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _externalIsolation;
	NSError* _operationError;
	BOOL _operationComplete;
	BOOL _operationSuccess;
	BOOL _shouldStripLocation;
	BOOL _shouldConvertToSRGB;
	BOOL _shouldStripMetadata;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	NSString* _customAccessibilityLabel;
	NSURL* _imageURL;
	PFAssetAdjustments* __adjustments;

}

@property (setter=_setImageURL:,nonatomic,copy) NSURL * imageURL;                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setAdjustments:,nonatomic,retain) PFAssetAdjustments * _adjustments;              //@synthesize _adjustments=__adjustments - In the implementation block
@property (nonatomic,copy) NSURL * outputDirectoryURL;                                               //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                                //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldStripMetadata;                                               //@synthesize shouldStripMetadata=_shouldStripMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                               //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertToSRGB;                                               //@synthesize shouldConvertToSRGB=_shouldConvertToSRGB - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSError * operationError; 
-(void)_setAdjustments:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2 ;
-(NSURL *)outputDirectoryURL;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(BOOL)shouldConvertToSRGB;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(PFAssetAdjustments *)_adjustments;
-(void)setOutputFilename:(NSString *)arg1 ;
-(void)_setImageURL:(id)arg1 ;
-(BOOL)success;
-(NSString *)customAccessibilityLabel;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(void)setShouldConvertToSRGB:(BOOL)arg1 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(NSError *)operationError;
-(NSString *)outputFilename;
-(float)progress;
-(void)main;
@end
