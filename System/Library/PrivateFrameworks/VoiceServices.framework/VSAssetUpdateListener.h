/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {

	BOOL _isListening;
	PCPersistentTimer* _assetCleanupTimer;

}
+(id)sharedListener;
-(id)_initShared;
-(void)downloadAssetForLanguage:(id)arg1 ;
-(id)downloadingAssetLanguage;
-(int)assetStatusForLanguage:(id)arg1 ;
-(BOOL)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3 ;
-(void)removeAssetForLanguage:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(id)init;
@end

