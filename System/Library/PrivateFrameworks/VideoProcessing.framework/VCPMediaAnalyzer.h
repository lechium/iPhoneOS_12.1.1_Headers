/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, VCPDatabaseReader, NSXPCConnection;

@interface VCPMediaAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _analysisQueue;
	NSObject*<OS_dispatch_queue> _storageQueue;
	VCPDatabaseReader* _databaseReader;
	BOOL _standalone;
	BOOL _noResultStrip;
	NSXPCConnection* _connection;
	long long _sandboxHandle;

}
+(id)sharedMediaAnalyzer;
-(id)requestLivePhotoEffectsForAssets:(id)arg1 allowOnDemand:(BOOL)arg2 flags:(unsigned long long)arg3 ;
-(id)addClassificationResults:(id)arg1 analysis:(id)arg2 ;
-(unsigned long long)metaAnalysisTypesForAsset:(id)arg1 ;
-(id)analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 storeAnalysis:(BOOL)arg3 ;
-(id)requestAnalysisForAsset:(id)arg1 withAnalysisInDatabase:(id)arg2 analysisTypes:(unsigned long long)arg3 allowOndemand:(BOOL)arg4 ;
-(void)getSceneDescriptors:(SCD_Struct_VC9)arg1 featureResults:(id)arg2 descriptorArray:(id)arg3 ;
-(void)checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long*)arg3 ;
-(id)queryImageDescriptorOfAsset:(id)arg1 withExistingAnalysis:(id)arg2 timeRange:(SCD_Struct_VC9)arg3 lastFeature:(BOOL)arg4 isDegraded:(BOOL*)arg5 ;
-(unsigned long long)typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2 ;
-(int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 analyses:(id)arg5 ;
-(void)getDatabaseSandboxExtension;
-(int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)requestMovieHighlightsForAssets:(id)arg1 ;
-(id)curateMovieAssetsForCollection:(id)arg1 withAlreadyCuratedAssets:(id)arg2 andDesiredCount:(unsigned long long)arg3 allowOnDemand:(BOOL)arg4 ;
-(id)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 allowOndemand:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 error:(id*)arg5 ;
-(int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long*)arg3 distance:(float*)arg4 ;
-(void)distanceFromAsset:(id)arg1 timeRange:(SCD_Struct_VC9)arg2 toAsset:(id)arg3 timeRange:(SCD_Struct_VC9)arg4 duplicate:(long long*)arg5 distance:(float*)arg6 ;
-(BOOL)cancelAnalysisWithRequestID:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)connection;
@end

