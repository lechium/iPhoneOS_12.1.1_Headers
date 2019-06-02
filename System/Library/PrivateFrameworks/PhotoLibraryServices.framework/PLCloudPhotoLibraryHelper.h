/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCloudPhotoLibraryHelper : NSObject
+(void)performOnceLibraryIsReadyForCPLManager:(/*^block*/id)arg1 ;
+(BOOL)shouldSendOptimizeFeedbackOnce;
+(void)setShouldSendOptimizeFeedbackOnce:(BOOL)arg1 ;
+(BOOL)_isAssetsdReadyForCPLManager;
+(void)_stopWaitingForLibraryToBeReadyForCPLManager;
+(void)disableCPL:(/*^block*/id)arg1 ;
+(void)initializeCPLManager;
+(void)processCloudPhotosLibraryStateChange:(BOOL)arg1 ;
+(void)pauseCloudPhotos:(BOOL)arg1 reason:(short)arg2 ;
+(void)enableCPL:(/*^block*/id)arg1 ;
@end
