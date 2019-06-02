/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVConferencePreviewClientDelegate.h>
#import <libobjc.A.dylib/TUVideoDeviceControllerProvider.h>
@class NSString, NSArray, VideoAttributes;


@protocol TUVideoDeviceControllerProvider <NSObject>
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,copy,readonly) NSString * localCameraUID; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (nonatomic,copy) VideoAttributes * localVideoAttributes; 
@property (assign,nonatomic,__weak) id<TUVideoDeviceControllerProviderDelegate> delegate; 
@required
-(id)localScreenAttributesForVideoAttributes:(id)arg1;
-(void)setLocalScreenAttributes:(id)arg1;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(VideoAttributes *)localVideoAttributes;
-(void)pausePreview;
-(void)stopPreview;
-(void)setLocalVideoAttributes:(id)arg1;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2;
-(id)localVideoLayer:(BOOL)arg1;
-(void)setLocalCameraWithUID:(id)arg1;
-(NSString *)localCameraUID;
-(void)setDelegate:(id)arg1;
-(id<TUVideoDeviceControllerProviderDelegate>)delegate;
-(NSArray *)inputDevices;

@end

#import <libobjc.A.dylib/TUVideoEffectsProvider.h>

@protocol TUVideoDeviceControllerProviderDelegate;
@class NSString, NSArray, VideoAttributes, TUVideoEffect, AVConferencePreview;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider> {

	id<TUVideoDeviceControllerProviderDelegate> _delegate;
	TUVideoEffect* _currentVideoEffect;
	AVConferencePreview* _preview;

}

@property (nonatomic,readonly) AVConferencePreview * preview;                                          //@synthesize preview=_preview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,copy,readonly) NSString * localCameraUID; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (nonatomic,copy) VideoAttributes * localVideoAttributes; 
@property (assign,nonatomic,__weak) id<TUVideoDeviceControllerProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect;                                       //@synthesize currentVideoEffect=_currentVideoEffect - In the implementation block
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
-(void)setCurrentVideoEffect:(TUVideoEffect *)arg1 ;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;
-(id)thumbnailImageForVideoEffectName:(id)arg1 ;
-(void)captureDevicesChanged:(id)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(VideoAttributes *)localVideoAttributes;
-(void)pausePreview;
-(void)stopPreview;
-(void)setLocalVideoAttributes:(VideoAttributes *)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2 ;
-(id)localVideoLayer:(BOOL)arg1 ;
-(void)setLocalCameraWithUID:(id)arg1 ;
-(NSString *)localCameraUID;
-(id)init;
-(void)setDelegate:(id<TUVideoDeviceControllerProviderDelegate>)arg1 ;
-(id<TUVideoDeviceControllerProviderDelegate>)delegate;
-(AVConferencePreview *)preview;
-(NSArray *)inputDevices;
@end

