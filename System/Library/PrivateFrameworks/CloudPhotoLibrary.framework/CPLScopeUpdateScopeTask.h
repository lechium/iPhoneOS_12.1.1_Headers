/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportGetLibraryInfoTask, CPLEngineTransportFetchTransportScopeTask;
@class NSObject, NSData;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportGetLibraryInfoTask> _getLibraryInfo;
	id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
	NSData* _fetchedTransportScope;

}
-(void)launch;
-(id)taskIdentifier;
-(id)initWithEngineLibrary:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1 ;
-(void)_markScopeAsFeatureDisabledWithFlags:(id)arg1 ;
-(void)_getLibraryInfo;
-(void)_fetchTransportScope;
-(void)cancel;
@end

