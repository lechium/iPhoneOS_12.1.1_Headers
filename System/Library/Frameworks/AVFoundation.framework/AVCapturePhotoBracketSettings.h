/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {

	AVCapturePhotoBracketSettingsInternal* _bracketSettingsInternal;

}

@property (nonatomic,readonly) NSArray * bracketedSettings; 
@property (assign,getter=isLensStabilizationEnabled,nonatomic) BOOL lensStabilizationEnabled; 
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3 ;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5 ;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(NSArray *)bracketedSettings;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 bracketedSettings:(id)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
-(BOOL)isLensStabilizationEnabled;
-(void)setLensStabilizationEnabled:(BOOL)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(id)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(id)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

