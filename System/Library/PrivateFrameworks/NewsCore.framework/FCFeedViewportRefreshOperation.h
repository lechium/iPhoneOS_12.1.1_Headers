/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCFeedViewport, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRefreshOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCFeedViewport* _viewport;
	FCFeedDescriptor* _feedDescriptor;
	/*^block*/id _refreshCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _resultDiff;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                  //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * resultDiff;                  //@synthesize resultDiff=_resultDiff - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id refreshCompletionHandler;                        //@synthesize refreshCompletionHandler=_refreshCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(void)setResultDiff:(FCFeedViewportDiff *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(FCFeedViewportDiff *)resultDiff;
-(id)refreshCompletionHandler;
-(void)setRefreshCompletionHandler:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end

