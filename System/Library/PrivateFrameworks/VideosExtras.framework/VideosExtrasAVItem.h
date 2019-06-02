/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreAVItem.h>
#import <VideosExtras/VideosAVItemCapability.h>

@class NSString, IKAssetElement;

@interface VideosExtrasAVItem : MPStoreAVItem <VideosAVItemCapability> {

	BOOL _loadedHLS;
	unsigned long long _mediaType;
	id _rtcReportingParentHierarchyToken;
	NSString* _rtcReportingServiceIdentifier;
	BOOL _background;
	IKAssetElement* _assetElement;

}

@property (nonatomic,readonly) IKAssetElement * assetElement;                    //@synthesize assetElement=_assetElement - In the implementation block
@property (getter=isBackground,nonatomic,readonly) BOOL background;              //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long overrideType; 
@property (nonatomic,readonly) BOOL overrideCurrentItemIsReady; 
@property (nonatomic,readonly) BOOL supportsPictureInPicture; 
@property (nonatomic,readonly) BOOL supportsScrubbing; 
@property (nonatomic,readonly) BOOL supportsNotification; 
-(long long)_expectedPlaybackMode;
-(void)loadAssetAndPlayerItem;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isiTunesStoreStream;
-(id)rtcReportingServiceIdentifierWithAssetURL:(id)arg1 ;
-(unsigned long long)streamType;
-(BOOL)allowsStoreBagStreamingKeyURLsFallback;
-(id)rtcReportingParentHierarchyToken;
-(id)rtcReportingServiceIdentifier;
-(unsigned long long)mediaType;
-(BOOL)isBackground;
-(IKAssetElement *)assetElement;
-(void)_networkSettingsChanged:(id)arg1 ;
-(BOOL)supportsPictureInPicture;
-(id)initWithAssetElement:(id)arg1 mediaType:(unsigned long long)arg2 isBackground:(BOOL)arg3 ;
-(void)dealloc;
-(long long)type;
@end

