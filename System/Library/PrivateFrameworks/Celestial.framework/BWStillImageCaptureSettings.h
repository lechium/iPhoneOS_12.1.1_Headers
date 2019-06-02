/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BWStillImageCaptureMetadata, NSArray;

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {

	long long _settingsID;
	int _captureType;
	unsigned long long _captureFlags;
	unsigned long long _sceneFlags;
	BOOL _deliverProcessedImage;
	BOOL _deliverOriginalImage;
	BOOL _deliverSushiRaw;
	BOOL _frameStatisticsAreValid;
	SCD_Struct_BW114 _frameStatistics;
	BWStillImageCaptureMetadata* _metadata;
	NSArray* _captureStreamSettings;
	int _tempExpectedClientImageCount;
	int _timeMachineReferenceFrameBracketedCaptureSequenceNumber;
	SCD_Struct_BW2 _zeroShutterLagPTS;
	BOOL _zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

}

@property (nonatomic,readonly) long long settingsID;                                                               //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) int captureType;                                                                    //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) unsigned long long captureFlags;                                                    //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) unsigned long long sceneFlags;                                                        //@synthesize sceneFlags=_sceneFlags - In the implementation block
@property (nonatomic,readonly) BOOL deliverProcessedImage;                                                         //@synthesize deliverProcessedImage=_deliverProcessedImage - In the implementation block
@property (nonatomic,readonly) BOOL deliverOriginalImage;                                                          //@synthesize deliverOriginalImage=_deliverOriginalImage - In the implementation block
@property (nonatomic,readonly) BOOL deliverSushiRaw;                                                               //@synthesize deliverSushiRaw=_deliverSushiRaw - In the implementation block
@property (nonatomic,readonly) NSArray * captureStreamSettings;                                                    //@synthesize captureStreamSettings=_captureStreamSettings - In the implementation block
@property (nonatomic,readonly) int bracketedCaptureSequenceNumberForOISLongExposure; 
@property (nonatomic,readonly) BOOL expectReferenceFrameBracketedCaptureSequenceNumber; 
@property (assign,nonatomic) int expectedClientImageCount;                                                         //@synthesize tempExpectedClientImageCount=_tempExpectedClientImageCount - In the implementation block
@property (assign,nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;                          //@synthesize timeMachineReferenceFrameBracketedCaptureSequenceNumber=_timeMachineReferenceFrameBracketedCaptureSequenceNumber - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 zeroShutterLagPTS;                                                     //@synthesize zeroShutterLagPTS=_zeroShutterLagPTS - In the implementation block
@property (assign,nonatomic) BOOL zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;              //@synthesize zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled=_zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)settingsID;
-(int)captureType;
-(NSArray *)captureStreamSettings;
-(id)captureStreamSettingsForPortType:(id)arg1 ;
-(BOOL)zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;
-(int)timeMachineReferenceFrameBracketedCaptureSequenceNumber;
-(BOOL)deliverOriginalImage;
-(id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 deliverProcessedImage:(BOOL)arg5 deliverOriginalImage:(BOOL)arg6 deliverSushiRaw:(BOOL)arg7 captureStreamSettings:(id)arg8 ;
-(unsigned long long)sceneFlags;
-(int)bracketedCaptureSequenceNumberForOISLongExposure;
-(SCD_Struct_BW2)zeroShutterLagPTS;
-(BOOL)deliverSushiRaw;
-(BOOL)deliverProcessedImage;
-(void)_setFrameStatistics:(SCD_Struct_BW114*)arg1 ;
-(void)setExpectedClientImageCount:(int)arg1 ;
-(BOOL)expectReferenceFrameBracketedCaptureSequenceNumber;
-(BOOL)getFrameStatistics:(SCD_Struct_BW114*)arg1 ;
-(void)setSceneFlags:(unsigned long long)arg1 ;
-(int)expectedClientImageCount;
-(void)setTimeMachineReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 ;
-(void)setZeroShutterLagPTS:(SCD_Struct_BW2)arg1 ;
-(void)setZeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled:(BOOL)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(unsigned long long)captureFlags;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)metadata;
@end
