/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUCacheNode.h>

@interface PILongExposureCacheNode : NUCacheNode
-(id)persistentURL;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2 ;
-(id)resolvedSourceNode:(out id*)arg1 ;
-(id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2 ;
-(id)initWithAutoLoopCacheNode:(id)arg1 urlKey:(id)arg2 ;
-(id)autoLoopCacheNode;
@end

