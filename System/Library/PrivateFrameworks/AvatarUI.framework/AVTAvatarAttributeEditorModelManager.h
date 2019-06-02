/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTUILogger;
@class AVTMemoji, AVTAvatarRecord, AVTAvatarConfiguration, AVTCoreModel, AVTPresetImageProvider, AVTPresetResourceLoader, NSMutableDictionary;

@interface AVTAvatarAttributeEditorModelManager : NSObject {

	AVTMemoji* _avatar;
	AVTAvatarRecord* _avatarRecord;
	AVTAvatarConfiguration* _avatarConfiguration;
	AVTCoreModel* _coreModel;
	AVTPresetImageProvider* _imageProvider;
	AVTPresetResourceLoader* _resourceLoader;
	NSMutableDictionary* _cancelationTokens;
	id<AVTUILogger> _logger;

}

@property (nonatomic,retain) NSMutableDictionary * cancelationTokens;                     //@synthesize cancelationTokens=_cancelationTokens - In the implementation block
@property (nonatomic,retain) id<AVTUILogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) AVTMemoji * avatar;                                        //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,copy,readonly) AVTAvatarRecord * avatarRecord;                       //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfiguration * avatarConfiguration;              //@synthesize avatarConfiguration=_avatarConfiguration - In the implementation block
@property (nonatomic,readonly) AVTCoreModel * coreModel;                                  //@synthesize coreModel=_coreModel - In the implementation block
@property (nonatomic,readonly) AVTPresetImageProvider * imageProvider;                    //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTPresetResourceLoader * resourceLoader;                  //@synthesize resourceLoader=_resourceLoader - In the implementation block
-(AVTMemoji *)avatar;
-(AVTPresetResourceLoader *)resourceLoader;
-(AVTPresetImageProvider *)imageProvider;
-(id<AVTUILogger>)logger;
-(void)setLogger:(id<AVTUILogger>)arg1 ;
-(AVTAvatarRecord *)avatarRecord;
-(AVTCoreModel *)coreModel;
-(NSMutableDictionary *)cancelationTokens;
-(void)cancelAllPreloading;
-(AVTAvatarConfiguration *)avatarConfiguration;
-(id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 resourceLoader:(id)arg4 environment:(id)arg5 ;
-(id)buildUIModelWithCurrentlySelectedCategory:(id)arg1 ;
-(void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)cancelPreloadForSectionItemIndexPath:(id)arg1 ;
-(void)preLoadCategory:(id)arg1 ;
-(void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCancelationTokens:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

